
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vchiq_mmal_instance {int dummy; } ;
struct TYPE_3__ {int work; scalar_t__ status; } ;
struct TYPE_4__ {TYPE_1__ bulk; } ;
struct mmal_msg_context {TYPE_2__ u; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vchiq_mmal_instance *VAR_0,
       struct mmal_msg_context *VAR_1)
{
 VAR_1->u.bulk.status = 0;


 FUNC_0(&VAR_1->u.bulk.work);
}
