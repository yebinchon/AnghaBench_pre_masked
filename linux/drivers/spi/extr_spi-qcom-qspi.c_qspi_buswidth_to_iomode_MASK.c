
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_qspi {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static u32 FUNC_1(struct qcom_qspi *VAR_4,
       unsigned int VAR_5)
{
 switch (VAR_5) {
 case 1:
  return VAR_1 << VAR_0;
 case 2:
  return VAR_2 << VAR_0;
 case 4:
  return VAR_3 << VAR_0;
 default:
  FUNC_0(VAR_4->dev,
    "Unexpected bus width: %u\n", VAR_5);
  return VAR_1 << VAR_0;
 }
}
