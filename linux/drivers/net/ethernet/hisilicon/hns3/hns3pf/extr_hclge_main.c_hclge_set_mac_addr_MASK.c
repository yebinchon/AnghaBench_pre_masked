
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_5__ {unsigned char const* mac_addr; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;
struct hclge_dev {TYPE_3__ hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char const*,unsigned char const*) ;
 int FUNC_3 (struct hnae3_handle*,unsigned char const*) ;
 struct hclge_vport* FUNC_4 (struct hnae3_handle*) ;
 int FUNC_5 (struct hclge_dev*,unsigned char const*) ;
 scalar_t__ FUNC_6 (struct hnae3_handle*,unsigned char const*) ;
 scalar_t__ FUNC_7 (unsigned char const*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (unsigned char const*) ;
 scalar_t__ FUNC_10 (unsigned char const*) ;

__attribute__((used)) static int FUNC_11(struct hnae3_handle *VAR_2, void *VAR_3,
         bool VAR_4)
{
 const unsigned char *VAR_5 = (const unsigned char *)VAR_3;
 struct hclge_vport *VAR_6 = FUNC_4(VAR_2);
 struct hclge_dev *VAR_7 = VAR_6->back;
 int VAR_8;


 if (FUNC_10(VAR_5) ||
     FUNC_7(VAR_5) ||
     FUNC_9(VAR_5)) {
  FUNC_0(&VAR_7->pdev->dev,
   "Change uc mac err! invalid mac:%pM.\n",
    VAR_5);
  return -VAR_0;
 }

 if ((!VAR_4 || FUNC_8()) &&
     FUNC_6(VAR_2, VAR_7->hw.mac.mac_addr))
  FUNC_1(&VAR_7->pdev->dev,
    "remove old uc mac address fail.\n");

 VAR_8 = FUNC_3(VAR_2, VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_7->pdev->dev,
   "add uc mac address fail, ret =%d.\n",
   VAR_8);

  if (!VAR_4 &&
      FUNC_3(VAR_2, VAR_7->hw.mac.mac_addr))
   FUNC_0(&VAR_7->pdev->dev,
    "restore uc mac address fail.\n");

  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_7->pdev->dev,
   "configure mac pause address fail, ret =%d.\n",
   VAR_8);
  return -VAR_1;
 }

 FUNC_2(VAR_7->hw.mac.mac_addr, VAR_5);

 return 0;
}
