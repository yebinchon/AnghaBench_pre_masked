
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_3__ dev; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
struct e1000_adapter {TYPE_1__* pdev; struct e1000_hw hw; } ;
struct TYPE_4__ {int vendor; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct e1000_hw*,int,int,int*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int*,int,int) ;
 struct e1000_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4,
       struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_6(VAR_4);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u16 *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 u16 VAR_13;

 if (VAR_5->len == 0)
  return -VAR_0;

 VAR_5->magic = VAR_7->pdev->vendor | (VAR_7->pdev->device << 16);

 VAR_10 = VAR_5->offset >> 1;
 VAR_11 = (VAR_5->offset + VAR_5->len - 1) >> 1;

 VAR_9 = FUNC_2(VAR_11 - VAR_10 + 1, sizeof(u16),
        VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_4->dev.parent);

 if (VAR_8->nvm.type == VAR_3) {
  VAR_12 = FUNC_0(VAR_8, VAR_10,
      VAR_11 - VAR_10 + 1,
      VAR_9);
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_11 - VAR_10 + 1; VAR_13++) {
   VAR_12 = FUNC_0(VAR_8, VAR_10 + VAR_13, 1,
       &VAR_9[VAR_13]);
   if (VAR_12)
    break;
  }
 }

 FUNC_8(VAR_4->dev.parent);

 if (VAR_12) {

  FUNC_5(VAR_9, 0xff, sizeof(u16) *
         (VAR_11 - VAR_10 + 1));
 } else {

  for (VAR_13 = 0; VAR_13 < VAR_11 - VAR_10 + 1; VAR_13++)
   FUNC_3(&VAR_9[VAR_13]);
 }

 FUNC_4(VAR_6, (u8 *)VAR_9 + (VAR_5->offset & 1), VAR_5->len);
 FUNC_1(VAR_9);

 return VAR_12;
}
