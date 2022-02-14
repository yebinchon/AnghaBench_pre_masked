
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct esas2r_sg_context {scalar_t__ length; scalar_t__ get_phys_addr; scalar_t__ cur_offset; } ;
struct esas2r_request {int comp_cb; } ;
struct esas2r_buffered_ioctl {scalar_t__ length; scalar_t__ ioctl; int done_context; int (* done_callback ) (struct esas2r_adapter*,struct esas2r_request*,int ) ;int context; int (* callback ) (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sg_context*,int ) ;scalar_t__ offset; struct esas2r_adapter* a; } ;
struct esas2r_adapter {scalar_t__ buffered_ioctl_done; int buffered_ioctl_waiter; TYPE_1__* pcid; } ;
struct TYPE_2__ {int dev; } ;
typedef scalar_t__ PGETPHYSADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int *,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct esas2r_request* FUNC_3 (struct esas2r_adapter*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sg_context*,int ) ;
 int FUNC_9 (struct esas2r_adapter*,struct esas2r_request*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_12(struct esas2r_buffered_ioctl *VAR_11)
{
 struct esas2r_adapter *VAR_12 = VAR_11->a;
 struct esas2r_request *VAR_13;
 struct esas2r_sg_context VAR_14;
 u8 VAR_15 = VAR_3;

 if (FUNC_2(&VAR_4))
  return VAR_2;


 if (VAR_6) {
  if (VAR_9 < VAR_11->length) {

   FUNC_1(&VAR_12->pcid->dev,
       (size_t)VAR_9,
       VAR_6,
       VAR_7);

   goto allocate_buffer;
  }
 } else {
allocate_buffer:
  VAR_9 = VAR_11->length;
  VAR_8 = VAR_12->pcid;
  VAR_6 = FUNC_0(&VAR_12->pcid->dev,
          (size_t)
          VAR_9,
          &
          VAR_7,
          VAR_1);
 }

 if (!VAR_6) {
  FUNC_6(VAR_0,
      "could not allocate %d bytes of consistent memory "
      "for a buffered ioctl!",
      VAR_11->length);

  FUNC_4("buffered ioctl alloc failure");
  VAR_15 = VAR_2;
  goto exit_cleanly;
 }

 FUNC_7(VAR_6, VAR_11->ioctl, VAR_11->length);

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_0,
      "could not allocate an internal request");

  VAR_15 = VAR_2;
  FUNC_4("buffered ioctl - no requests");
  goto exit_cleanly;
 }

 VAR_12->buffered_ioctl_done = 0;
 VAR_13->comp_cb = VAR_5;
 VAR_14.cur_offset = VAR_6 + VAR_11->offset;
 VAR_14.get_phys_addr = (PGETPHYSADDR)VAR_10;
 VAR_14.length = VAR_9;

 if (!(*VAR_11->callback)(VAR_12, VAR_13, &VAR_14, VAR_11->context)) {

  VAR_12->buffered_ioctl_done = 0;
  goto free_andexit_cleanly;
 }


 while (!VAR_12->buffered_ioctl_done)
  FUNC_11(VAR_12->buffered_ioctl_waiter,
      VAR_12->buffered_ioctl_done);

free_andexit_cleanly:
 if (VAR_15 == VAR_3 && VAR_11->done_callback)
  (*VAR_11->done_callback)(VAR_12, VAR_13, VAR_11->done_context);

 FUNC_5(VAR_12, VAR_13);

exit_cleanly:
 if (VAR_15 == VAR_3)
  FUNC_7(VAR_11->ioctl, VAR_6, VAR_11->length);

 FUNC_10(&VAR_4);
 return VAR_15;
}
