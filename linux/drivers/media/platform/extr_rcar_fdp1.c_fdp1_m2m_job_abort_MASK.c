
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdp1_ctx {int aborting; int fdp1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 struct fdp1_ctx *VAR_4 = VAR_3;

 FUNC_0(VAR_4->fdp1, "+\n");


 VAR_4->aborting = 1;


 FUNC_1(VAR_4->fdp1, 0, VAR_0);
 FUNC_1(VAR_4->fdp1, VAR_2, VAR_1);
}
