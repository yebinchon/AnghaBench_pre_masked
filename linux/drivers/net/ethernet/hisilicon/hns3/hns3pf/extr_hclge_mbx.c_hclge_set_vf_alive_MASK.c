
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int dummy; } ;
struct hclge_mbx_vf_to_pf_cmd {int * msg; } ;


 int FUNC_0 (struct hclge_vport*) ;
 int FUNC_1 (struct hclge_vport*) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_0,
         struct hclge_mbx_vf_to_pf_cmd *VAR_1,
         bool VAR_2)
{
 bool VAR_3 = !!VAR_1->msg[2];
 int VAR_4 = 0;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);

 return VAR_4;
}
