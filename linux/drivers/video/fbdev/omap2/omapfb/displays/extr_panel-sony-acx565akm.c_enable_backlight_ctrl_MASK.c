
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct panel_drv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct panel_drv_data*,int ,int *,int) ;
 int FUNC_1 (struct panel_drv_data*,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(struct panel_drv_data *VAR_4, int VAR_5)
{
 u16 VAR_6;

 FUNC_0(VAR_4, VAR_2, (u8 *)&VAR_6, 1);
 if (VAR_5) {
  VAR_6 |= VAR_1 |
   VAR_0;
 } else {
  VAR_6 &= ~(VAR_1 |
     VAR_0);
 }

 VAR_6 |= 1 << 8;
 FUNC_1(VAR_4, VAR_3, (u8 *)&VAR_6, 2);
}
