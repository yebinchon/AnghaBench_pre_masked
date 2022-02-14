
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tee_shm {int dummy; } ;
struct TYPE_3__ {scalar_t__ c; int b; int a; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
struct tee_param {TYPE_2__ u; int attr; } ;
struct tee_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tee_context*,int ,int,struct tee_param*) ;
 int FUNC_1 (struct tee_shm*) ;
 int FUNC_2 (struct tee_shm*) ;

__attribute__((used)) static void FUNC_3(struct tee_context *VAR_3, struct tee_shm *VAR_4)
{
 struct tee_param VAR_5;

 VAR_5.attr = VAR_2;
 VAR_5.u.value.a = VAR_1;
 VAR_5.u.value.b = FUNC_1(VAR_4);
 VAR_5.u.value.c = 0;
 FUNC_2(VAR_4);

 FUNC_0(VAR_3, VAR_0, 1, &VAR_5);
}
