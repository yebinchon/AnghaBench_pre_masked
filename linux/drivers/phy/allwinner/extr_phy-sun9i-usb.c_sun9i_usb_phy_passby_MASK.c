
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun9i_usb_phy {scalar_t__ type; int pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct sun9i_usb_phy *VAR_10, int VAR_11)
{
 u32 VAR_12, VAR_13;

 VAR_12 = VAR_0 | VAR_2 |
  VAR_1 | VAR_3 |
  VAR_8;

 if (VAR_10->type == VAR_9)
  VAR_12 |= VAR_5 | VAR_4 |
   VAR_6 | VAR_7;

 VAR_13 = FUNC_0(VAR_10->pmu);

 if (VAR_11)
  VAR_13 |= VAR_12;
 else
  VAR_13 &= ~VAR_12;

 FUNC_1(VAR_13, VAR_10->pmu);
}
