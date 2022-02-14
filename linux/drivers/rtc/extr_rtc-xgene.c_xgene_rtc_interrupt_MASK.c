
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rtc_dev {int rtc; scalar_t__ csr_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_7, void *VAR_8)
{
 struct xgene_rtc_dev *VAR_9 = VAR_8;


 if (!(FUNC_0(VAR_9->csr_base + VAR_5) & VAR_6))
  return VAR_1;


 FUNC_0(VAR_9->csr_base + VAR_3);

 FUNC_1(VAR_9->rtc, 1, VAR_4 | VAR_2);

 return VAR_0;
}
