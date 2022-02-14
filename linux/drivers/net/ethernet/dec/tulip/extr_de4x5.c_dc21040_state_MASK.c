
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct de4x5_private {int local_state; int media; int autosense; int linkOK; int tx_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7,
       int VAR_8, int VAR_9,
       int (*VAR_10)(struct net_device *, int))
{
    struct de4x5_private *VAR_11 = FUNC_1(VAR_3);
    int VAR_12 = VAR_1;
    int VAR_13;

    switch (VAR_11->local_state) {
    case 0:
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_11->local_state++;
 VAR_12 = 500;
 break;

    case 1:
 if (!VAR_11->tx_enable) {
     VAR_13 = VAR_10(VAR_3, VAR_7);
     if (VAR_13 < 0) {
  VAR_12 = VAR_13 & ~VAR_2;
     } else {
  if (VAR_13 && (VAR_11->autosense == VAR_0)) {
      VAR_11->local_state = 0;
      VAR_11->media = VAR_8;
  } else {
      FUNC_0(VAR_3);
  }
     }
 } else if (!VAR_11->linkOK && (VAR_11->autosense == VAR_0)) {
     VAR_11->media = VAR_9;
     VAR_12 = 3000;
 }
 break;
    }

    return VAR_12;
}
