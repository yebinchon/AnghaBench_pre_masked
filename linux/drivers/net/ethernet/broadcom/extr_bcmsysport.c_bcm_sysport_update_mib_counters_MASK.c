
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bcm_sysport_stats {int type; int stat_offset; scalar_t__ stat_sizeof; int reg_offset; } ;
struct bcm_sysport_priv {int netdev; int is_lite; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bcm_sysport_stats* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_sysport_priv*,int ,int ,char*) ;
 int FUNC_1 (struct bcm_sysport_priv*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_3 (struct bcm_sysport_priv*,int ) ;
 int FUNC_4 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_5 (struct bcm_sysport_priv*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct bcm_sysport_priv *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct bcm_sysport_stats *VAR_8;
  u8 VAR_9 = 0;
  u32 VAR_10 = 0;
  char *VAR_11;

  VAR_8 = &VAR_3[VAR_6];
  switch (VAR_8->type) {
  case 133:
  case 132:
  case 128:
   continue;
  case 135:
  case 134:
  case 130:
   if (VAR_5->is_lite)
    continue;

   if (VAR_8->type != 135)
    VAR_9 = VAR_2;
   VAR_10 = FUNC_5(VAR_5, VAR_1 + VAR_7 + VAR_9);
   break;
  case 129:
   VAR_10 = FUNC_3(VAR_5, VAR_8->reg_offset);
   if (VAR_10 == ~0)
    FUNC_4(VAR_5, 0, VAR_8->reg_offset);
   break;
  case 131:
   VAR_10 = FUNC_1(VAR_5, VAR_8->reg_offset);
   if (VAR_10 == ~0)
    FUNC_2(VAR_5, 0, VAR_8->reg_offset);
   break;
  }

  VAR_7 += VAR_8->stat_sizeof;
  VAR_11 = (char *)VAR_5 + VAR_8->stat_offset;
  *(u32 *)VAR_11 = VAR_10;
 }

 FUNC_0(VAR_5, VAR_4, VAR_5->netdev, "updated MIB counters\n");
}
