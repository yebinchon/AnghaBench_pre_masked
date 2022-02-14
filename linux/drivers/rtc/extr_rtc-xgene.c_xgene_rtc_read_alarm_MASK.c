
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rtc_dev {scalar_t__ csr_base; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct xgene_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct xgene_rtc_dev *VAR_4 = FUNC_0(VAR_2);


 FUNC_2(0, &VAR_3->time);
 VAR_3->enabled = FUNC_1(VAR_4->csr_base + VAR_0) & VAR_1;

 return 0;
}
