
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt7601u_dev {int debugfs_reg; int temp_mode; int raw_temp; TYPE_2__* hw; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int debugfsdir; } ;


 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct mt7601u_dev*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct mt7601u_dev *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_0("mt7601u", VAR_3->hw->wiphy->debugfsdir);
 if (!VAR_4)
  return;

 FUNC_3("temperature", 0400, VAR_4, &VAR_3->raw_temp);
 FUNC_2("temp_mode", 0400, VAR_4, &VAR_3->temp_mode);

 FUNC_2("regidx", 0600, VAR_4, &VAR_3->debugfs_reg);
 FUNC_1("regval", 0600, VAR_4, VAR_3, &VAR_2);
 FUNC_1("ampdu_stat", 0400, VAR_4, VAR_3, &VAR_0);
 FUNC_1("eeprom_param", 0400, VAR_4, VAR_3, &VAR_1);
}
