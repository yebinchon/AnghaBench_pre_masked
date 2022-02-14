
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct ieee_pfc {size_t pfc_en; } ;
struct TYPE_3__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_4__ {size_t pfc_en; size_t* prio_tc; size_t num_tc; size_t hw_pfc_map; } ;
struct hclge_dev {int dcbx_cap; int flag; TYPE_2__ tm_info; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_dev*,int) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hnae3_handle*,int ,struct net_device*,char*,size_t,size_t,size_t) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_5, struct ieee_pfc *VAR_6)
{
 struct hclge_vport *VAR_7 = FUNC_1(VAR_5);
 struct net_device *VAR_8 = VAR_5->kinfo.netdev;
 struct hclge_dev *VAR_9 = VAR_7->back;
 u8 VAR_10, VAR_11, VAR_12, *VAR_13;

 if (!(VAR_9->dcbx_cap & VAR_0) ||
     VAR_9->flag & VAR_2)
  return -VAR_1;

 if (VAR_6->pfc_en == VAR_9->tm_info.pfc_en)
  return 0;

 VAR_13 = VAR_9->tm_info.prio_tc;
 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_9->tm_info.num_tc; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   if ((VAR_13[VAR_11] == VAR_10) && (VAR_6->pfc_en & FUNC_0(VAR_11))) {
    VAR_12 |= FUNC_0(VAR_10);
    break;
   }
  }
 }

 VAR_9->tm_info.hw_pfc_map = VAR_12;
 VAR_9->tm_info.pfc_en = VAR_6->pfc_en;

 FUNC_4(VAR_5, VAR_4, VAR_8,
    "set pfc: pfc_en=%x, pfc_map=%x, num_tc=%u\n",
    VAR_6->pfc_en, VAR_12, VAR_9->tm_info.num_tc);

 FUNC_3(VAR_9);

 return FUNC_2(VAR_9, 0);
}
