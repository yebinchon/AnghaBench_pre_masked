
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct moschip_port {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct moschip_port* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 struct moschip_port* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_3)
{
 struct moschip_port *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_1);

 FUNC_0(VAR_0, &VAR_4->flags);
}
