
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_mbx_vf_to_pf_cmd {int * msg; } ;
struct hclge_dev {int state; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hclge_dev*,int ) ;
 int FUNC_2 (struct hclge_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_3,
        struct hclge_mbx_vf_to_pf_cmd *VAR_4)
{



 FUNC_0(VAR_0, &VAR_3->state);
 FUNC_2(VAR_3, 0);

 if (!VAR_4->msg[1])
  FUNC_1(VAR_3, VAR_4->msg[2]);
}
