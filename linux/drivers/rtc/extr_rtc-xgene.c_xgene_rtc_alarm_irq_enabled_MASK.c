
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rtc_dev {scalar_t__ csr_base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct xgene_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2)
{
 struct xgene_rtc_dev *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_3->csr_base + VAR_0) & VAR_1 ? 1 : 0;
}
