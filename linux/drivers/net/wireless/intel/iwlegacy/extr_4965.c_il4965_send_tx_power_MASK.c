
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; int channel; } ;
struct il_priv {scalar_t__ band; TYPE_1__ active; int status; } ;
struct il4965_txpowertable_cmd {int band; int tx_power; int channel; int member_0; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (struct il_priv*,int,int ,int,int,int *) ;
 int FUNC_2 (struct il_priv*,int ,int,struct il4965_txpowertable_cmd*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_5)
{
 struct il4965_txpowertable_cmd VAR_6 = { 0 };
 int VAR_7;
 u8 VAR_8 = 0;
 bool VAR_9 = 0;
 u8 VAR_10 = 0;

 if (FUNC_0
     (FUNC_5(VAR_4, &VAR_5->status),
      "TX Power requested while scanning!\n"))
  return -VAR_1;

 VAR_8 = VAR_5->band == VAR_2;

 VAR_9 = FUNC_3(VAR_5->active.flags);

 if (VAR_9 && (VAR_5->active.flags & VAR_3))
  VAR_10 = 1;

 VAR_6.band = VAR_8;
 VAR_6.channel = VAR_5->active.channel;

 VAR_7 =
     FUNC_1(VAR_5, VAR_8, FUNC_4(VAR_5->active.channel),
        VAR_9, VAR_10, &VAR_6.tx_power);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_2(VAR_5, VAR_0, sizeof(VAR_6), &VAR_6);

out:
 return VAR_7;
}
