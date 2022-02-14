
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {scalar_t__ tx_sch_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->tx_sch_mode == VAR_0) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   return VAR_2;
 } else {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
