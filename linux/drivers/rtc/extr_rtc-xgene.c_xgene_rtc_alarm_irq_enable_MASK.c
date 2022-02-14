
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_rtc_dev {scalar_t__ csr_base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xgene_rtc_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, u32 VAR_4)
{
 struct xgene_rtc_dev *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->csr_base + VAR_0);
 if (VAR_4) {
  VAR_6 &= ~VAR_2;
  VAR_6 |= VAR_1;
 } else {
  VAR_6 &= ~VAR_1;
  VAR_6 |= VAR_2;
 }
 FUNC_2(VAR_6, VAR_5->csr_base + VAR_0);

 return 0;
}
