
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {scalar_t__ tx_sch_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hclge_dev*,int) ;
 int FUNC_1 (struct hclge_dev*) ;

int FUNC_2(struct hclge_dev *VAR_3, bool VAR_4)
{
 int VAR_5;

 if ((VAR_3->tx_sch_mode != VAR_1) &&
     (VAR_3->tx_sch_mode != VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return 0;
}
