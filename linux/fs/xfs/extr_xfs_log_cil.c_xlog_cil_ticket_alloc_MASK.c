
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlog_ticket {scalar_t__ t_curr_res; } ;
struct xlog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xlog_ticket* FUNC_0 (struct xlog*,int ,int,int ,int ,int ) ;

__attribute__((used)) static struct xlog_ticket *
FUNC_1(
 struct xlog *VAR_2)
{
 struct xlog_ticket *VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0, 1, VAR_1, 0,
    VAR_0);





 VAR_3->t_curr_res = 0;
 return VAR_3;
}
