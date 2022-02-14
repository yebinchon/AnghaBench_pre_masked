
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tee_device {TYPE_1__* desc; } ;
struct tee_context {int list_shm; struct tee_device* teedev; int refcount; } ;
struct TYPE_4__ {int (* open ) (struct tee_context*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tee_context* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tee_context*) ;
 int FUNC_3 (int *) ;
 struct tee_context* FUNC_4 (int,int ) ;
 int FUNC_5 (struct tee_context*) ;
 int FUNC_6 (struct tee_device*) ;
 int FUNC_7 (struct tee_device*) ;

__attribute__((used)) static struct tee_context *FUNC_8(struct tee_device *VAR_3)
{
 int VAR_4;
 struct tee_context *VAR_5;

 if (!FUNC_6(VAR_3))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  VAR_4 = -VAR_1;
  goto err;
 }

 FUNC_3(&VAR_5->refcount);
 VAR_5->teedev = VAR_3;
 FUNC_1(&VAR_5->list_shm);
 VAR_4 = VAR_3->desc->ops->open(VAR_5);
 if (VAR_4)
  goto err;

 return VAR_5;
err:
 FUNC_2(VAR_5);
 FUNC_7(VAR_3);
 return FUNC_0(VAR_4);

}
