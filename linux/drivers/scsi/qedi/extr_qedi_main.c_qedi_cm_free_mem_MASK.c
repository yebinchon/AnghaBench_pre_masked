
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int lcl_port_tbl; int * ep_tbl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qedi_ctx *VAR_0)
{
 FUNC_0(VAR_0->ep_tbl);
 VAR_0->ep_tbl = ((void*)0);
 FUNC_1(&VAR_0->lcl_port_tbl);
}
