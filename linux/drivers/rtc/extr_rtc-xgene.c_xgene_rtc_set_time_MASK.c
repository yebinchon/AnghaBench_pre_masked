
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_rtc_dev {scalar_t__ csr_base; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct xgene_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct xgene_rtc_dev *VAR_3 = FUNC_0(VAR_1);





 FUNC_3((u32)FUNC_2(VAR_2), VAR_3->csr_base + VAR_0);
 FUNC_1(VAR_3->csr_base + VAR_0);

 return 0;
}
