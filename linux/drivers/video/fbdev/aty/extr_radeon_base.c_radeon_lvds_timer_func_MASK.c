
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct radeonfb_info {int pending_lvds_gen_cntl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct radeonfb_info* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 struct radeonfb_info* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct radeonfb_info *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_1);

 FUNC_2();

 FUNC_0(VAR_0, VAR_4->pending_lvds_gen_cntl);
}
