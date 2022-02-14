
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int netdev_flags; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_6, bool VAR_7)
{
 struct hclge_vport *VAR_8 = FUNC_0(VAR_6);
 struct hclge_dev *VAR_9 = VAR_8->back;

 if (VAR_9->pdev->revision >= 0x21) {
  FUNC_1(VAR_9, VAR_4,
        VAR_0, VAR_7, 0);
  FUNC_1(VAR_9, VAR_3,
        VAR_2, VAR_7, 0);
 } else {
  FUNC_1(VAR_9, VAR_4,
        VAR_1, VAR_7,
        0);
 }
 if (VAR_7)
  VAR_6->netdev_flags |= VAR_5;
 else
  VAR_6->netdev_flags &= ~VAR_5;
}
