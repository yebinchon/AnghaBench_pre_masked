
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hclge_vport {int dummy; } ;
struct hclge_dev {scalar_t__ num_vmdq_vport; scalar_t__ num_req_vfs; struct hclge_vport* vport; } ;


 int FUNC_0 (struct hclge_dev*,struct hclge_vport*) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_0)
{
 struct hclge_vport *VAR_1 = VAR_0->vport;
 u16 VAR_2, VAR_3;

 VAR_3 = VAR_0->num_vmdq_vport + VAR_0->num_req_vfs + 1;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_1++;
 }

 return 0;
}
