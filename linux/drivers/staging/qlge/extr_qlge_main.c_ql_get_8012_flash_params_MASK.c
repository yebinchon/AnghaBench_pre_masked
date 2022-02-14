
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int mac_addr; } ;
struct TYPE_5__ {TYPE_1__ flash_params_8012; } ;
struct ql_adapter {TYPE_3__* ndev; TYPE_2__ flash; scalar_t__ port; } ;
struct flash_params_8012 {int dummy; } ;
typedef int __le32 ;
struct TYPE_6__ {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,TYPE_3__*,char*) ;
 int FUNC_3 (struct ql_adapter*,int,int *) ;
 scalar_t__ FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int ) ;
 int FUNC_6 (struct ql_adapter*,int,char*) ;

__attribute__((used)) static int FUNC_7(struct ql_adapter *VAR_4)
{
 int VAR_5;
 int VAR_6;
 __le32 *VAR_7 = (__le32 *)&VAR_4->flash;
 u32 VAR_8 = 0;
 u32 VAR_9 = sizeof(struct flash_params_8012) / sizeof(u32);




 if (VAR_4->port)
  VAR_8 = VAR_9;

 if (FUNC_4(VAR_4, VAR_2))
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++, VAR_7++) {
  VAR_6 = FUNC_3(VAR_4, VAR_5+VAR_8, VAR_7);
  if (VAR_6) {
   FUNC_2(VAR_4, VAR_3, VAR_4->ndev,
      "Error reading flash.\n");
   goto exit;
  }

 }

 VAR_6 = FUNC_6(VAR_4,
   sizeof(struct flash_params_8012) / sizeof(u16),
   "8012");
 if (VAR_6) {
  FUNC_2(VAR_4, VAR_3, VAR_4->ndev, "Invalid flash.\n");
  VAR_6 = -VAR_0;
  goto exit;
 }

 if (!FUNC_0(VAR_4->flash.flash_params_8012.mac_addr)) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_1(VAR_4->ndev->dev_addr,
  VAR_4->flash.flash_params_8012.mac_addr,
  VAR_4->ndev->addr_len);

exit:
 FUNC_5(VAR_4, VAR_2);
 return VAR_6;
}
