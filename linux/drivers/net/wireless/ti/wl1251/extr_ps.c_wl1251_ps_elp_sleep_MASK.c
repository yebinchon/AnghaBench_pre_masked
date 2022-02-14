
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {scalar_t__ station_mode; int elp_work; int hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 unsigned long FUNC_1 (int ) ;

void FUNC_2(struct wl1251 *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2->station_mode != VAR_1) {
  VAR_3 = FUNC_1(VAR_0);
  FUNC_0(VAR_2->hw, &VAR_2->elp_work, VAR_3);
 }
}
