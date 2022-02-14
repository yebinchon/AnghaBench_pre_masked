
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int dummy; } ;


 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 return FUNC_1(VAR_0);
}
