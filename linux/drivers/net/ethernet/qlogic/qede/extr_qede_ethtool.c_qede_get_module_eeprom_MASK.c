
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* read_module_eeprom ) (int ,int *,int ,scalar_t__,scalar_t__) ;} ;


 int FUNC_0 (struct qede_dev*,char*,int) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int *,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
      struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 struct qede_dev *VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9 = VAR_6->offset, VAR_10 = 0;
 u8 *VAR_11 = VAR_7;
 int VAR_12 = 0;


 if (VAR_6->offset < VAR_0) {

  if (VAR_6->offset + VAR_6->len > VAR_0)
   VAR_10 = VAR_0 - VAR_6->offset;
  else
   VAR_10 = VAR_6->len;

  VAR_12 = VAR_8->ops->common->read_module_eeprom(VAR_8->cdev, VAR_11,
          VAR_2,
          VAR_9, VAR_10);
  if (VAR_12) {
   FUNC_0(VAR_8, "Failed reading A0 section  %d\n", VAR_12);
   return VAR_12;
  }

  VAR_11 += VAR_10;
  VAR_9 += VAR_10;
 }


 if (VAR_9 >= VAR_0 &&
     VAR_9 < VAR_1) {
  VAR_10 = VAR_6->len - VAR_10;

  if (VAR_9 + VAR_10 > VAR_1)
   VAR_10 = VAR_1 - VAR_9;
  VAR_9 -= VAR_0;
  VAR_12 = VAR_8->ops->common->read_module_eeprom(VAR_8->cdev, VAR_11,
          VAR_3,
          VAR_9, VAR_10);
  if (VAR_12) {
   FUNC_1(VAR_8, VAR_4,
       "Failed reading A2 section %d\n", VAR_12);
   return 0;
  }
 }

 return VAR_12;
}
