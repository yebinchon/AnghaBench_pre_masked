
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int mbx_need_resp; int * msg; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hclge_vport*,int const*) ;
 int FUNC_2 (struct hclge_vport*,int const*,int ) ;
 int FUNC_3 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int,int *,int ) ;
 int FUNC_4 (struct hclge_vport*,int const*) ;
 int FUNC_5 (struct hclge_vport*,int const*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct hclge_vport *VAR_6,
        struct hclge_mbx_vf_to_pf_cmd *VAR_7)
{
 const u8 *VAR_8 = (const u8 *)(&VAR_7->msg[2]);
 struct hclge_dev *VAR_9 = VAR_6->back;
 int VAR_10;

 if (VAR_7->msg[1] == VAR_3) {
  const u8 *VAR_11 = (const u8 *)(&VAR_7->msg[8]);

  FUNC_4(VAR_6, VAR_11);
  VAR_10 = FUNC_1(VAR_6, VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_6, VAR_11);
  } else {
   FUNC_5(VAR_6, VAR_8,
       0, VAR_1);
   FUNC_2(VAR_6, VAR_8,
        VAR_1);
  }
 } else if (VAR_7->msg[1] == VAR_2) {
  VAR_10 = FUNC_1(VAR_6, VAR_8);
  if (!VAR_10)
   FUNC_2(VAR_6, VAR_8,
        VAR_1);
 } else if (VAR_7->msg[1] == VAR_4) {
  VAR_10 = FUNC_4(VAR_6, VAR_8);
  if (!VAR_10)
   FUNC_5(VAR_6, VAR_8,
       0, VAR_1);
 } else {
  FUNC_0(&VAR_9->pdev->dev,
   "failed to set unicast mac addr, unknown subcode %d\n",
   VAR_7->msg[1]);
  return -VAR_0;
 }

 if (VAR_7->mbx_need_resp & VAR_5)
  FUNC_3(VAR_6, VAR_7, VAR_10, ((void*)0), 0);

 return 0;
}
