
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tee_shm {int dummy; } ;
struct TYPE_4__ {size_t b; scalar_t__ c; int a; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct tee_param {TYPE_2__ u; int attr; } ;
struct tee_context {int teedev; } ;
struct TYPE_6__ {int mutex; int ctx; } ;
struct optee {TYPE_3__ supp; } ;


 int VAR_0 ;
 struct tee_shm* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct tee_context*,int ,int,struct tee_param*) ;
 struct optee* FUNC_4 (int ) ;
 struct tee_shm* FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static struct tee_shm *FUNC_6(struct tee_context *VAR_4, size_t VAR_5)
{
 u32 VAR_6;
 struct tee_param VAR_7;
 struct optee *VAR_8 = FUNC_4(VAR_4->teedev);
 struct tee_shm *VAR_9;

 VAR_7.attr = VAR_3;
 VAR_7.u.value.a = VAR_2;
 VAR_7.u.value.b = VAR_5;
 VAR_7.u.value.c = 0;

 VAR_6 = FUNC_3(VAR_4, VAR_1, 1, &VAR_7);
 if (VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_8->supp.mutex);

 VAR_9 = FUNC_5(VAR_8->supp.ctx, VAR_7.u.value.c);
 FUNC_2(&VAR_8->supp.mutex);
 return VAR_9;
}
