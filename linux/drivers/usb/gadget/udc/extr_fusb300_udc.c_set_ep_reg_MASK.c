
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb300_ep_info {int epnum; scalar_t__ bw_num; scalar_t__ interval; } ;
struct fusb300 {int dummy; } ;


 int FUNC_0 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_1 (struct fusb300*,int ) ;
 int FUNC_2 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_3 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_4 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_5 (struct fusb300*,struct fusb300_ep_info) ;

__attribute__((used)) static void FUNC_6(struct fusb300 *VAR_0,
        struct fusb300_ep_info VAR_1)
{
 FUNC_4(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);

 if (VAR_1.interval)
  FUNC_5(VAR_0, VAR_1);

 if (VAR_1.bw_num)
  FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1.epnum);
}
