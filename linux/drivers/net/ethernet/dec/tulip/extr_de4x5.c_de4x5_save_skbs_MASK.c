
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int save_cnt; } ;
struct de4x5_private {TYPE_1__ cache; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct de4x5_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_4)
{
    struct de4x5_private *VAR_5 = FUNC_4(VAR_4);
    u_long VAR_6 = VAR_4->base_addr;
    s32 VAR_7;

    if (!VAR_5->cache.save_cnt) {
 VAR_3;
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4, VAR_1);
 FUNC_2(VAR_4);
 FUNC_0(VAR_4, VAR_0);
 VAR_5->cache.save_cnt++;
 VAR_2;
    }
}
