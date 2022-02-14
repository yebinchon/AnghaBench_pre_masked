
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int reset_type; } ;




 int FUNC_0 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0->reset_type) {
 case 128:

 case 129:
  VAR_1 = FUNC_0(VAR_0, 1);
  break;
 default:
  break;
 }

 return VAR_1;
}
