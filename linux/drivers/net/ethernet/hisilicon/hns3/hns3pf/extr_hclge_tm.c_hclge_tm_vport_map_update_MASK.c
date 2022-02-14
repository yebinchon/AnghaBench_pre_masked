
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int dummy; } ;
struct hclge_dev {int flag; struct hclge_vport* vport; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_vport*) ;
 int FUNC_2 (struct hclge_dev*,struct hclge_vport*) ;

int FUNC_3(struct hclge_dev *VAR_1)
{
 struct hclge_vport *VAR_2 = VAR_1->vport;
 int VAR_3;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!(VAR_1->flag & VAR_0))
  return 0;

 return FUNC_0(VAR_1);
}
