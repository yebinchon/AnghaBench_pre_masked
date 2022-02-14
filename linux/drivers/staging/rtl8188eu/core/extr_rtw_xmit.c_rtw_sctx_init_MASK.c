
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submit_ctx {int timeout_ms; int status; int done; int submit_time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

void FUNC_1(struct submit_ctx *VAR_2, int VAR_3)
{
 VAR_2->timeout_ms = VAR_3;
 VAR_2->submit_time = VAR_1;
 FUNC_0(&VAR_2->done);
 VAR_2->status = VAR_0;
}
