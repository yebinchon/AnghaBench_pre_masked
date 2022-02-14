
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mnt_namespace {int user_ns; int ucounts; int ns; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mnt_namespace*) ;
 int FUNC_2 (struct mnt_namespace*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mnt_namespace *VAR_0)
{
 if (!FUNC_1(VAR_0))
  FUNC_3(&VAR_0->ns);
 FUNC_0(VAR_0->ucounts);
 FUNC_4(VAR_0->user_ns);
 FUNC_2(VAR_0);
}
