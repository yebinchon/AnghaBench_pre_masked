
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_rtc_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_6, struct sunxi_rtc_dev *VAR_7)
{
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_7->base + VAR_0);
  VAR_8 |= VAR_1;

  VAR_9 = FUNC_0(VAR_7->base + VAR_2);
  VAR_9 |= VAR_3;
 } else {
  FUNC_1(VAR_5,
    VAR_7->base + VAR_4);
 }

 FUNC_1(VAR_8, VAR_7->base + VAR_0);
 FUNC_1(VAR_9, VAR_7->base + VAR_2);
}
