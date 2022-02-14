
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {size_t active; scalar_t__ timeout; scalar_t__ chipset; scalar_t__ useMII; TYPE_1__* phy; scalar_t__ rst; scalar_t__ useSROM; } ;
struct TYPE_2__ {int addr; scalar_t__ rst; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_1(VAR_5);
    u_long VAR_7 = VAR_5->base_addr;
    int VAR_8 = 0;

    if ((VAR_6->useSROM) || (VAR_6->phy[VAR_6->active].id)) {
 if (VAR_6->timeout < 0) {
     if (VAR_6->useSROM) {
  if (VAR_6->phy[VAR_6->active].rst) {
      FUNC_2(VAR_5, VAR_6->phy[VAR_6->active].rst);
      FUNC_2(VAR_5, VAR_6->phy[VAR_6->active].rst);
  } else if (VAR_6->rst) {
      FUNC_2(VAR_5, VAR_6->rst);
      FUNC_2(VAR_5, VAR_6->rst);
  }
     } else {
  VAR_4;
     }
     if (VAR_6->useMII) {
         FUNC_0(VAR_3, VAR_2, VAR_6->phy[VAR_6->active].addr, VAR_1);
            }
        }
 if (VAR_6->useMII) {
     VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_3, 0, 500);
 }
    } else if (VAR_6->chipset == VAR_0) {
 VAR_4;
    }

    return VAR_8;
}
