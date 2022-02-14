
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_sg_context {scalar_t__ get_phys_addr; int cur_offset; } ;
struct esas2r_request {int comp_cb; } ;
struct esas2r_ioctl_fs {scalar_t__ status; int data; } ;
struct esas2r_adapter {long fs_api_buffer_size; scalar_t__ fs_api_buffer; int fs_api_mutex; scalar_t__ fs_api_command_done; int fs_api_waiter; } ;
typedef scalar_t__ PGETPHYSADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct esas2r_request* FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_ioctl_fs*,struct esas2r_request*,struct esas2r_sg_context*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

int FUNC_8(struct esas2r_adapter *VAR_5, char *VAR_6, long VAR_7, int VAR_8)
{
 if (!VAR_5->fs_api_buffer)
  return -VAR_2;

 if (VAR_7 == 0) {
  struct esas2r_request *VAR_9;
  struct esas2r_sg_context VAR_10;
  struct esas2r_ioctl_fs *VAR_11 =
   (struct esas2r_ioctl_fs *)VAR_5->fs_api_buffer;


  if (FUNC_5(&VAR_5->fs_api_mutex)) {
busy:
   VAR_11->status = VAR_0;
   return -VAR_1;
  }
  VAR_9 = FUNC_0(VAR_5);
  if (VAR_9 == ((void*)0)) {
   FUNC_1("esas2r_read_fs: out of requests");
   FUNC_6(&VAR_5->fs_api_mutex);
   goto busy;
  }

  VAR_9->comp_cb = VAR_3;



  VAR_10.cur_offset = VAR_11->data;
  VAR_10.get_phys_addr = (PGETPHYSADDR)VAR_4;

  VAR_5->fs_api_command_done = 0;

  if (!FUNC_3(VAR_5, VAR_11, VAR_9, &VAR_10)) {
   if (VAR_11->status == VAR_0)
    VAR_8 = -VAR_1;

   goto dont_wait;
  }



  while (!VAR_5->fs_api_command_done)
   FUNC_7(VAR_5->fs_api_waiter,
       VAR_5->fs_api_command_done);
  ;
dont_wait:

  FUNC_6(&VAR_5->fs_api_mutex);
  FUNC_2(VAR_5, (struct esas2r_request *)VAR_9);


  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_7 > VAR_5->fs_api_buffer_size)
  return 0;

 if (VAR_8 + VAR_7 > VAR_5->fs_api_buffer_size)
  VAR_8 = VAR_5->fs_api_buffer_size - VAR_7;

 if (VAR_8 < 0)
  return 0;

 FUNC_4(VAR_6, VAR_5->fs_api_buffer + VAR_7, VAR_8);

 return VAR_8;
}
