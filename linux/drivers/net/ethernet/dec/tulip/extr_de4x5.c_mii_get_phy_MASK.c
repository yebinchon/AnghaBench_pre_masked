
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct phy_table {int dummy; } ;
struct net_device {int name; int base_addr; } ;
struct de4x5_private {size_t active; int useMII; int mii_cnt; TYPE_2__* phy; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {int value; int mask; int reg; } ;
struct TYPE_6__ {int addr; int id; TYPE_1__ spd; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int,int ,int,int ) ;
 struct de4x5_private* FUNC_7 (struct net_device*) ;
 TYPE_3__* VAR_10 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct net_device *VAR_11)
{
    struct de4x5_private *VAR_12 = FUNC_7(VAR_11);
    u_long VAR_13 = VAR_11->base_addr;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18=FUNC_0(VAR_10);
    int VAR_19;

    VAR_12->active = 0;
    VAR_12->useMII = 1;


    for (VAR_17=0, VAR_12->mii_cnt=0, VAR_14=1; !((VAR_14==1) && (VAR_17==1)); VAR_14=(VAR_14+1)%VAR_0) {
 VAR_12->phy[VAR_12->active].addr = VAR_14;
 if (VAR_14==0) VAR_17++;
 while (FUNC_2(VAR_11)<0) FUNC_9(100);
 VAR_19 = FUNC_4(VAR_14, VAR_2);
 if ((VAR_19 == 0) || (VAR_19 == 65535)) continue;
 for (VAR_15=0; VAR_15<VAR_18; VAR_15++) {
     if (VAR_19 != VAR_10[VAR_15].id) continue;
     for (VAR_16=0; VAR_16 < VAR_1 && VAR_12->phy[VAR_16].id; VAR_16++);
     if (VAR_16 < VAR_1) {
  FUNC_3((char *)&VAR_12->phy[VAR_16],
         (char *)&VAR_10[VAR_15], sizeof(struct phy_table));
  VAR_12->phy[VAR_16].addr = VAR_14;
  VAR_12->mii_cnt++;
  VAR_12->active++;
     } else {
  goto purgatory;
     }
     break;
 }
 if ((VAR_15 == VAR_18) && (VAR_14 < VAR_0)) {
     for (VAR_16=0; VAR_16 < VAR_1 && VAR_12->phy[VAR_16].id; VAR_16++);
     VAR_12->phy[VAR_16].addr = VAR_14;
     VAR_12->phy[VAR_16].id = VAR_19;
     VAR_12->phy[VAR_16].spd.reg = VAR_5;
     VAR_12->phy[VAR_16].spd.mask = VAR_4;
     VAR_12->phy[VAR_16].spd.value = VAR_6;
     VAR_12->mii_cnt++;
     VAR_12->active++;
     FUNC_8("%s: Using generic MII device control. If the board doesn't operate,\nplease mail the following dump to the author:\n", VAR_11->name);
     VAR_15 = VAR_9;
     VAR_9 |= VAR_3;
     FUNC_1(VAR_11, VAR_16);
     VAR_9 = VAR_15;
     FUNC_8("\n");
 }
    }
  purgatory:
    VAR_12->active = 0;
    if (VAR_12->phy[0].id) {
 for (VAR_16=0; VAR_16 < VAR_1 && VAR_12->phy[VAR_16].id; VAR_16++) {
     FUNC_6(VAR_8, VAR_7, VAR_12->phy[VAR_16].addr, VAR_2);
     while (FUNC_5(VAR_7, VAR_12->phy[VAR_16].addr, VAR_2) & VAR_8);

     FUNC_1(VAR_11, VAR_16);
 }
    }
    if (!VAR_12->mii_cnt) VAR_12->useMII = 0;

    return VAR_12->mii_cnt;
}
