
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int reset_type; } ;






 int FUNC_0 (struct hclge_dev*,int) ;
 int FUNC_1 (struct hclge_dev*,int) ;
 int FUNC_2 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0->reset_type) {
 case 130:

 case 131:
  VAR_1 = FUNC_1(VAR_0, 0);
  break;
 case 129:

 case 128:
  VAR_1 = FUNC_2(VAR_0);
  break;
 default:
  break;
 }


 FUNC_0(VAR_0, 0);

 return VAR_1;
}
