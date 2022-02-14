
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int * msg; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hclge_vport*,int const*) ;
 int FUNC_2 (struct hclge_vport*,int const*,int ) ;
 int FUNC_3 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int,int *,int ) ;
 int FUNC_4 (struct hclge_vport*,int const*) ;
 int FUNC_5 (struct hclge_vport*,int const*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct hclge_vport *VAR_4,
        struct hclge_mbx_vf_to_pf_cmd *VAR_5,
        bool VAR_6)
{
 const u8 *VAR_7 = (const u8 *)(&VAR_5->msg[2]);
 struct hclge_dev *VAR_8 = VAR_4->back;
 u8 VAR_9 = 0;
 u8 VAR_10;
 int VAR_11;

 if (VAR_5->msg[1] == VAR_2) {
  VAR_11 = FUNC_1(VAR_4, VAR_7);
  if (!VAR_11)
   FUNC_2(VAR_4, VAR_7,
        VAR_1);
 } else if (VAR_5->msg[1] == VAR_3) {
  VAR_11 = FUNC_4(VAR_4, VAR_7);
  if (!VAR_11)
   FUNC_5(VAR_4, VAR_7,
       0, VAR_1);
 } else {
  FUNC_0(&VAR_8->pdev->dev,
   "failed to set mcast mac addr, unknown subcode %d\n",
   VAR_5->msg[1]);
  return -VAR_0;
 }

 if (VAR_6)
  FUNC_3(VAR_4, VAR_5, VAR_11,
         &VAR_10, VAR_9);

 return 0;
}
