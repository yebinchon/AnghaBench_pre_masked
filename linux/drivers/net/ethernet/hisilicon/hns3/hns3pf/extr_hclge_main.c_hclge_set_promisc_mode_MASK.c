
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int netdev_flags; TYPE_1__* pdev; } ;
struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_promisc_param {int dummy; } ;
struct hclge_dev {int dummy; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_dev*,struct hclge_promisc_param*) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_promisc_param*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_1, bool VAR_2,
      bool VAR_3)
{
 struct hclge_vport *VAR_4 = FUNC_1(VAR_1);
 struct hclge_dev *VAR_5 = VAR_4->back;
 struct hclge_promisc_param VAR_6;
 bool VAR_7 = 1;





 if (VAR_1->pdev->revision == 0x20)
  VAR_7 = VAR_1->netdev_flags & VAR_0 ? 1 : 0;

 FUNC_2(&VAR_6, VAR_2, VAR_3, VAR_7,
     VAR_4->vport_id);
 return FUNC_0(VAR_5, &VAR_6);
}
