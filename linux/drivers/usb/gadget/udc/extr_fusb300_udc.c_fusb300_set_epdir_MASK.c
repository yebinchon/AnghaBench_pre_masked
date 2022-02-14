
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fusb300_ep_info {int epnum; int dir_in; } ;
struct fusb300 {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fusb300 *VAR_2,
         struct fusb300_ep_info VAR_3)
{
 u32 VAR_4;

 if (!VAR_3.dir_in)
  return;
 VAR_4 = FUNC_1(VAR_2->reg + FUNC_0(VAR_3.epnum));
 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_0;
 FUNC_2(VAR_4, VAR_2->reg + FUNC_0(VAR_3.epnum));
}
