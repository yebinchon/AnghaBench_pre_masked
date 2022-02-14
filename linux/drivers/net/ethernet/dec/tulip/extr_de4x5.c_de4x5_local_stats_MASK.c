
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_2__ {scalar_t__* bins; int unicast; int multicast; int broadcast; } ;
struct de4x5_private {TYPE_1__ pktStats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int) ;
 struct de4x5_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_2, char *VAR_3, int VAR_4)
{
    struct de4x5_private *VAR_5 = FUNC_4(VAR_2);
    int VAR_6;

    for (VAR_6=1; VAR_6<VAR_1-1; VAR_6++) {
        if (VAR_4 < (VAR_6*VAR_0)) {
     VAR_5->pktStats.bins[VAR_6]++;
     VAR_6 = VAR_1;
 }
    }
    if (FUNC_2(VAR_3)) {
        if (FUNC_1(VAR_3)) {
     VAR_5->pktStats.broadcast++;
 } else {
     VAR_5->pktStats.multicast++;
 }
    } else if (FUNC_0(VAR_3, VAR_2->dev_addr)) {
        VAR_5->pktStats.unicast++;
    }

    VAR_5->pktStats.bins[0]++;
    if (VAR_5->pktStats.bins[0] == 0) {
        FUNC_3((char *)&VAR_5->pktStats, 0, sizeof(VAR_5->pktStats));
    }
}
