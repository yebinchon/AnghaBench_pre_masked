
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int deleted_refs; int new_refs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct send_ctx *VAR_0)
{
 FUNC_0(&VAR_0->new_refs);
 FUNC_0(&VAR_0->deleted_refs);
}
