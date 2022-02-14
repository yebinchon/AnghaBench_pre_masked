
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ieee_ets {int dummy; } ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int dcbx_cap; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_dev*,struct ieee_ets*,int *,int*) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclge_dev*,struct ieee_ets*) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (struct hclge_dev*) ;
 int FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (struct hclge_dev*,int ) ;
 int FUNC_9 (struct hnae3_handle*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_10(struct hnae3_handle *VAR_4, struct ieee_ets *VAR_5)
{
 struct hclge_vport *VAR_6 = FUNC_2(VAR_4);
 struct net_device *VAR_7 = VAR_4->kinfo.netdev;
 struct hclge_dev *VAR_8 = VAR_6->back;
 bool VAR_9 = 0;
 u8 VAR_10 = 0;
 int VAR_11;

 if (!(VAR_8->dcbx_cap & VAR_0) ||
     VAR_8->flag & VAR_2)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_8, VAR_5, &VAR_10, &VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_9) {
  FUNC_9(VAR_4, VAR_3, VAR_7, "set ets\n");

  VAR_11 = FUNC_5(VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_8(VAR_8, VAR_10);

 VAR_11 = FUNC_3(VAR_8, VAR_5);
 if (VAR_11)
  goto err_out;

 if (VAR_9) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11)
   goto err_out;

  VAR_11 = FUNC_0(VAR_8);
  if (VAR_11)
   goto err_out;

  VAR_11 = FUNC_6(VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_7(VAR_8);

err_out:
 if (!VAR_9)
  return VAR_11;

 FUNC_6(VAR_8);

 return VAR_11;
}
