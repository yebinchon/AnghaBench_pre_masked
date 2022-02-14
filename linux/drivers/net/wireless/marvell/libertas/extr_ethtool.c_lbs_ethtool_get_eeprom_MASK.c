
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ len; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_eeprom_access {int value; void* len; void* offset; void* action; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_eeprom_access*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
                                  struct ethtool_eeprom *VAR_6, u8 * VAR_7)
{
 struct lbs_private *VAR_8 = VAR_5->ml_priv;
 struct cmd_ds_802_11_eeprom_access VAR_9;
 int VAR_10;

 if (VAR_6->offset + VAR_6->len > VAR_3 ||
     VAR_6->len > VAR_4) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9.hdr.size = FUNC_0(sizeof(struct cmd_ds_802_11_eeprom_access) -
  VAR_4 + VAR_6->len);
 VAR_9.action = FUNC_0(VAR_1);
 VAR_9.offset = FUNC_0(VAR_6->offset);
 VAR_9.len = FUNC_0(VAR_6->len);
 VAR_10 = FUNC_1(VAR_8, VAR_0, &VAR_9);
 if (!VAR_10)
  FUNC_2(VAR_7, VAR_9.value, VAR_6->len);

out:
        return VAR_10;
}
