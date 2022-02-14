
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct moschip_port {int led_timer2; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct moschip_port* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct moschip_port* VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct moschip_port*,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 struct moschip_port *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_3);


 FUNC_2(VAR_6, 0x0300, VAR_1);
 FUNC_1(&VAR_6->led_timer2,
    VAR_2 + FUNC_3(VAR_0));
}
