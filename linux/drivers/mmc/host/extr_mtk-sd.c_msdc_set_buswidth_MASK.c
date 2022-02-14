
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msdc_host {int dev; scalar_t__ base; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msdc_host *VAR_5, u32 VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_5->base + VAR_3);

 VAR_7 &= ~VAR_4;

 switch (VAR_6) {
 default:
 case 130:
  VAR_7 |= (VAR_0 << 16);
  break;
 case 129:
  VAR_7 |= (VAR_1 << 16);
  break;
 case 128:
  VAR_7 |= (VAR_2 << 16);
  break;
 }

 FUNC_2(VAR_7, VAR_5->base + VAR_3);
 FUNC_0(VAR_5->dev, "Bus Width = %d", VAR_6);
}
