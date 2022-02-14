
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tee_context {TYPE_3__* teedev; } ;
struct TYPE_6__ {TYPE_2__* desc; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* close_session ) (struct tee_context*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tee_context*,int ) ;

int FUNC_1(struct tee_context *VAR_1, u32 VAR_2)
{
 if (!VAR_1->teedev->desc->ops->close_session)
  return -VAR_0;
 return VAR_1->teedev->desc->ops->close_session(VAR_1, VAR_2);
}
