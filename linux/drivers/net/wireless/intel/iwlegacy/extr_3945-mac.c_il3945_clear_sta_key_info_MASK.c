
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct il_priv {int sta_lock; TYPE_2__* stations; } ;
struct il_hw_key {int dummy; } ;
struct il_addsta_cmd {int dummy; } ;
struct il4965_keyinfo {int dummy; } ;
struct TYPE_5__ {int modify_mask; } ;
struct TYPE_7__ {int key_flags; } ;
struct TYPE_8__ {int mode; TYPE_1__ sta; TYPE_3__ key; } ;
struct TYPE_6__ {TYPE_4__ sta; TYPE_3__ keyinfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct il_priv*,struct il_addsta_cmd*,int ) ;
 int FUNC_2 (struct il_addsta_cmd*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_4, u8 VAR_5)
{
 unsigned long VAR_6;
 struct il_addsta_cmd VAR_7;

 FUNC_4(&VAR_4->sta_lock, VAR_6);
 FUNC_3(&VAR_4->stations[VAR_5].keyinfo, 0, sizeof(struct il_hw_key));
 FUNC_3(&VAR_4->stations[VAR_5].sta.key, 0, sizeof(struct il4965_keyinfo));
 VAR_4->stations[VAR_5].sta.key.key_flags = VAR_2;
 VAR_4->stations[VAR_5].sta.sta.modify_mask = VAR_3;
 VAR_4->stations[VAR_5].sta.mode = VAR_1;
 FUNC_2(&VAR_7, &VAR_4->stations[VAR_5].sta,
        sizeof(struct il_addsta_cmd));
 FUNC_5(&VAR_4->sta_lock, VAR_6);

 FUNC_0("hwcrypto: clear ucode station key info\n");
 return FUNC_1(VAR_4, &VAR_7, VAR_0);
}
