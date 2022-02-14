
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int gepc; } ;
struct de4x5_private {int infoleaf_offset; scalar_t__ chipset; TYPE_1__ cache; int srom; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct net_device*) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int*) ;
 int FUNC_3 (struct net_device*,int,int*) ;
 int FUNC_4 (struct net_device*,int,int*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_4)
{
    struct de4x5_private *VAR_5 = FUNC_1(VAR_4);
    u_char *VAR_6 = (u_char *)&VAR_5->srom + VAR_5->infoleaf_offset;
    u_char VAR_7;

    VAR_6+=2;
    if (VAR_5->chipset == VAR_2) {
 VAR_5->cache.gepc = (*VAR_6++ | VAR_3);
 FUNC_0(VAR_5->cache.gepc, VAR_4);
    }


    VAR_7 = *VAR_6++;


    for (;VAR_7; --VAR_7) {
 if (*VAR_6 < 128) {
     VAR_6 += VAR_1;
 } else if (*(VAR_6+1) == 5) {
     FUNC_4(VAR_4, 1, VAR_6);
     VAR_6 += ((*VAR_6 & VAR_0) + 1);
 } else if (*(VAR_6+1) == 4) {
     VAR_6 += ((*VAR_6 & VAR_0) + 1);
 } else if (*(VAR_6+1) == 3) {
     FUNC_3(VAR_4, 1, VAR_6);
     VAR_6 += ((*VAR_6 & VAR_0) + 1);
 } else if (*(VAR_6+1) == 2) {
     VAR_6 += ((*VAR_6 & VAR_0) + 1);
 } else if (*(VAR_6+1) == 1) {
     FUNC_2(VAR_4, 1, VAR_6);
     VAR_6 += ((*VAR_6 & VAR_0) + 1);
 } else {
     VAR_6 += ((*VAR_6 & VAR_0) + 1);
 }
    }
}
