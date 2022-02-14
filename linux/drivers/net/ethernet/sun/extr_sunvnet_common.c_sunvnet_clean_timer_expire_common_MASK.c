
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_port {int clean_timer; } ;
struct timer_list {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vnet_port*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct vnet_port* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct vnet_port* VAR_3 ;
 struct sk_buff* FUNC_6 (struct vnet_port*,unsigned int*) ;
 int FUNC_7 (struct sk_buff*) ;

void FUNC_8(struct timer_list *VAR_4)
{
 struct vnet_port *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_1);
 struct sk_buff *VAR_6;
 unsigned VAR_7;

 FUNC_4(FUNC_0(VAR_5));
 VAR_6 = FUNC_6(VAR_5, &VAR_7);
 FUNC_5(FUNC_0(VAR_5));

 FUNC_7(VAR_6);

 if (VAR_7)
  (void)FUNC_3(&VAR_5->clean_timer,
    VAR_2 + VAR_0);
  else
  FUNC_1(&VAR_5->clean_timer);
}
