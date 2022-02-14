
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclge_mac_mgr_tbl_entry_cmd {int dummy; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int retval; int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (struct hclge_dev*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct hclge_mac_mgr_tbl_entry_cmd const*,int) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_1,
        const struct hclge_mac_mgr_tbl_entry_cmd *VAR_2)
{
 struct hclge_desc VAR_3;
 u8 VAR_4;
 u16 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_3, VAR_0, 0);
 FUNC_6(VAR_3.data, VAR_2, sizeof(struct hclge_mac_mgr_tbl_entry_cmd));

 VAR_6 = FUNC_1(&VAR_1->hw, &VAR_3, 1);
 if (VAR_6) {
  FUNC_0(&VAR_1->pdev->dev,
   "add mac ethertype failed for cmd_send, ret =%d.\n",
   VAR_6);
  return VAR_6;
 }

 VAR_4 = (FUNC_5(VAR_3.data[0]) >> 8) & 0xff;
 VAR_5 = FUNC_4(VAR_3.retval);

 return FUNC_3(VAR_1, VAR_5, VAR_4);
}
