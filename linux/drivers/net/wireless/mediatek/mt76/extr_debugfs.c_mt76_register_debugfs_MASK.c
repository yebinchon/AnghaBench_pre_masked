
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; } ;
struct mt76_dev {int dev; TYPE_3__ otp; TYPE_3__ eeprom; int debugfs_reg; int led_pin; TYPE_2__* hw; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int debugfsdir; } ;


 int FUNC_0 (char*,int,struct dentry*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,struct dentry*,int ) ;
 struct dentry* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,struct dentry*,struct mt76_dev*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 int FUNC_5 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct dentry *FUNC_6(struct mt76_dev *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_2("mt76", VAR_3->hw->wiphy->debugfsdir);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5("led_pin", 0600, VAR_4, &VAR_3->led_pin);
 FUNC_4("regidx", 0600, VAR_4, &VAR_3->debugfs_reg);
 FUNC_3("regval", 0600, VAR_4, VAR_3,
       &VAR_0);
 FUNC_0("eeprom", 0400, VAR_4, &VAR_3->eeprom);
 if (VAR_3->otp.data)
  FUNC_0("otp", 0400, VAR_4, &VAR_3->otp);
 FUNC_1(VAR_3->dev, "queues", VAR_4, VAR_1);
 FUNC_1(VAR_3->dev, "rate_txpower", VAR_4,
        VAR_2);

 return VAR_4;
}
