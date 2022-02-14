
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_sg_context {scalar_t__ get_phys_addr; scalar_t__ cur_offset; struct esas2r_adapter* adapter; struct esas2r_request* first_req; } ;
struct esas2r_request {int comp_cb; } ;
struct esas2r_adapter {scalar_t__ vda_buffer; scalar_t__ vda_command_done; int vda_waiter; } ;
struct atto_ioctl_vda {int dummy; } ;
typedef scalar_t__ PGETPHYSADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 struct esas2r_request* FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_3 (struct esas2r_adapter*,struct atto_ioctl_vda*,struct esas2r_request*,struct esas2r_sg_context*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct esas2r_adapter *VAR_6, char *VAR_7, long VAR_8, int VAR_9)
{
 if (!VAR_6->vda_buffer)
  return -VAR_1;

 if (VAR_8 == 0) {
  struct esas2r_request *VAR_10;
  struct atto_ioctl_vda *VAR_11 =
   (struct atto_ioctl_vda *)VAR_6->vda_buffer;
  struct esas2r_sg_context VAR_12;
  bool VAR_13;
  VAR_10 = FUNC_0(VAR_6);
  if (VAR_10 == ((void*)0)) {
   FUNC_1("esas2r_read_vda: out of requests");
   return -VAR_0;
  }

  VAR_10->comp_cb = VAR_5;

  VAR_12.first_req = VAR_10;
  VAR_12.adapter = VAR_6;
  VAR_12.cur_offset = VAR_6->vda_buffer + VAR_2;
  VAR_12.get_phys_addr = (PGETPHYSADDR)VAR_4;

  VAR_6->vda_command_done = 0;

  VAR_13 =
   FUNC_3(VAR_6, VAR_11, VAR_10, &VAR_12);

  if (VAR_13) {


   while (!VAR_6->vda_command_done)
    FUNC_5(VAR_6->vda_waiter,
        VAR_6->vda_command_done);
  }

  FUNC_2(VAR_6, (struct esas2r_request *)VAR_10);
 }

 if (VAR_8 > VAR_3)
  return 0;

 if (VAR_9 + VAR_8 > VAR_3)
  VAR_9 = VAR_3 - VAR_8;

 if (VAR_9 < 0)
  return 0;

 FUNC_4(VAR_7, VAR_6->vda_buffer + VAR_8, VAR_9);

 return VAR_9;
}
