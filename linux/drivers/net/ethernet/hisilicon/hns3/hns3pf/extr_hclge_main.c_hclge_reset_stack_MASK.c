
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int ae_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hclge_dev*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->ae_dev);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3, VAR_1);
}
