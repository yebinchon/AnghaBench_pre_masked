
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct de4x5_private {int local_state; int media; int tcount; int linkOK; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct de4x5_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_3, int VAR_4, int VAR_5,
        int (*VAR_6)(struct net_device *, int),
        int (*VAR_7)(struct net_device *))
{
    struct de4x5_private *VAR_8 = FUNC_0(VAR_3);
    int VAR_9 = VAR_0;
    int VAR_10;

    switch (VAR_8->local_state) {
    case 1:
 if (VAR_8->linkOK) {
     VAR_8->media = VAR_5;
 } else {
     VAR_8->local_state++;
     VAR_9 = VAR_7(VAR_3);
 }
 break;

    case 2:
 VAR_10 = VAR_6(VAR_3, VAR_4);
 if (VAR_10 < 0) {
     VAR_9 = VAR_10 & ~VAR_2;
 } else if (!VAR_10) {
     VAR_8->local_state--;
     VAR_8->media = VAR_5;
 } else {
     VAR_8->media = VAR_1;
     VAR_8->tcount++;
 }
    }

    return VAR_9;
}
