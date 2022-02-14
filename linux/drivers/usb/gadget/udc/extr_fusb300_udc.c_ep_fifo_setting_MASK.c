
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb300_ep_info {int epnum; } ;
struct fusb300 {int dummy; } ;


 int FUNC_0 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_1 (struct fusb300*,int ) ;
 int FUNC_2 (struct fusb300*,int ) ;

__attribute__((used)) static void FUNC_3(struct fusb300 *VAR_0,
       struct fusb300_ep_info VAR_1)
{
 FUNC_1(VAR_0, VAR_1.epnum);
 FUNC_2(VAR_0, VAR_1.epnum);
 FUNC_0(VAR_0, VAR_1);
}
