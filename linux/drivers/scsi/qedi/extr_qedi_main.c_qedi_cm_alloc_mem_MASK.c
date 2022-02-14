
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qedi_endpoint {int dummy; } ;
struct qedi_ctx {int max_active_conns; int lcl_port_tbl; int ep_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct qedi_ctx*) ;
 scalar_t__ FUNC_3 (int *,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct qedi_ctx *VAR_4)
{
 u16 VAR_5;

 VAR_4->ep_tbl = FUNC_0((VAR_4->max_active_conns *
    sizeof(struct qedi_endpoint *)), VAR_1);
 if (!VAR_4->ep_tbl)
  return -VAR_0;
 VAR_5 = FUNC_1() % VAR_3;
 if (FUNC_3(&VAR_4->lcl_port_tbl, VAR_3,
        VAR_2, VAR_5)) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }

 return 0;
}
