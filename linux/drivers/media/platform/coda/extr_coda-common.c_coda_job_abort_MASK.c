
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_ctx {int aborting; } ;


 int FUNC_0 (int,struct coda_ctx*,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct coda_ctx *VAR_1 = VAR_0;

 VAR_1->aborting = 1;

 FUNC_0(1, VAR_1, "job abort\n");
}
