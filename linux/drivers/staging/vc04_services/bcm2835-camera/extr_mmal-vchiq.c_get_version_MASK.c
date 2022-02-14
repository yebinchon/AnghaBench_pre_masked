
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vchiq_mmal_instance {int dummy; } ;
struct vchi_held_msg {int dummy; } ;
struct TYPE_4__ {int minor; int major; } ;
struct TYPE_5__ {TYPE_1__ version; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct mmal_msg {TYPE_2__ u; TYPE_3__ h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vchiq_mmal_instance*,struct mmal_msg*,int,struct mmal_msg**,struct vchi_held_msg*) ;
 int FUNC_1 (struct vchi_held_msg*) ;

__attribute__((used)) static int FUNC_2(struct vchiq_mmal_instance *VAR_2,
         u32 *VAR_3, u32 *VAR_4)
{
 int VAR_5;
 struct mmal_msg VAR_6;
 struct mmal_msg *VAR_7;
 struct vchi_held_msg VAR_8;

 VAR_6.h.type = VAR_1;

 VAR_5 = FUNC_0(VAR_2, &VAR_6,
     sizeof(VAR_6.u.version),
     &VAR_7, &VAR_8);
 if (VAR_5)
  return VAR_5;

 if (VAR_7->h.type != VAR_6.h.type) {

  VAR_5 = -VAR_0;
  goto release_msg;
 }

 *VAR_3 = VAR_7->u.version.major;
 *VAR_4 = VAR_7->u.version.minor;

release_msg:
 FUNC_1(&VAR_8);

 return VAR_5;
}
