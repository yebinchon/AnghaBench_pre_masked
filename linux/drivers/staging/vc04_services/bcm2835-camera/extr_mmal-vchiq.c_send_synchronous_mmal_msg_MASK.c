
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vchiq_mmal_instance {int handle; } ;
struct vchi_held_msg {int dummy; } ;
struct mmal_msg_header {int dummy; } ;
struct TYPE_5__ {struct vchi_held_msg msg_handle; struct mmal_msg* msg; int cmplt; } ;
struct TYPE_6__ {TYPE_2__ sync; } ;
struct mmal_msg_context {TYPE_3__ u; int handle; } ;
struct TYPE_4__ {scalar_t__ status; int context; int magic; } ;
struct mmal_msg {TYPE_1__ h; } ;


 int FUNC_0 (struct mmal_msg*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mmal_msg_context*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mmal_msg_context*) ;
 struct mmal_msg_context* FUNC_3 (struct vchiq_mmal_instance*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct mmal_msg_context*) ;
 int FUNC_7 (int ,struct mmal_msg*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 unsigned long FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct vchiq_mmal_instance *VAR_5,
         struct mmal_msg *VAR_6,
         unsigned int VAR_7,
         struct mmal_msg **VAR_8,
         struct vchi_held_msg *VAR_9)
{
 struct mmal_msg_context *VAR_10;
 int VAR_11;
 unsigned long VAR_12;


 if (VAR_7 >
     (VAR_4 - sizeof(struct mmal_msg_header))) {
  FUNC_5("payload length %d exceeds max:%d\n", VAR_7,
         (int)(VAR_4 -
       sizeof(struct mmal_msg_header)));
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_5);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 FUNC_4(&VAR_10->u.sync.cmplt);

 VAR_6->h.magic = VAR_3;
 VAR_6->h.context = VAR_10->handle;
 VAR_6->h.status = 0;

 FUNC_0(VAR_6, (sizeof(struct mmal_msg_header) + VAR_7),
       ">>> sync message");

 FUNC_9(VAR_5->handle);

 VAR_11 = FUNC_7(VAR_5->handle,
     VAR_6,
     sizeof(struct mmal_msg_header) +
     VAR_7);

 FUNC_8(VAR_5->handle);

 if (VAR_11) {
  FUNC_5("error %d queuing message\n", VAR_11);
  FUNC_6(VAR_10);
  return VAR_11;
 }

 VAR_12 = FUNC_10(&VAR_10->u.sync.cmplt,
           3 * VAR_2);
 if (VAR_12 == 0) {
  FUNC_5("timed out waiting for sync completion\n");
  VAR_11 = -VAR_1;

  FUNC_6(VAR_10);
  return VAR_11;
 }

 *VAR_8 = VAR_10->u.sync.msg;
 *VAR_9 = VAR_10->u.sync.msg_handle;
 FUNC_6(VAR_10);

 return 0;
}
