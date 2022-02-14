
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct kvaser_pciefd_can {scalar_t__ err_rep_cnt; } ;


 int VAR_0 ;
 struct kvaser_pciefd_can* VAR_1 ;
 struct kvaser_pciefd_can* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct kvaser_pciefd_can*) ;
 int FUNC_2 (struct kvaser_pciefd_can*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct kvaser_pciefd_can *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 VAR_3->err_rep_cnt = 0;
}
