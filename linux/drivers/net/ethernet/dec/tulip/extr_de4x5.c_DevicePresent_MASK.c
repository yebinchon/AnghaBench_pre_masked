
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_long ;
struct net_device {int dummy; } ;
struct de4x5_srom {int dummy; } ;
struct de4x5_private {scalar_t__ chipset; scalar_t__ bus; int srom; } ;
typedef void* __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_4, u_long VAR_5)
{
    int VAR_6, VAR_7=0;
    struct de4x5_private *VAR_8 = FUNC_3(VAR_4);

    if (VAR_8->chipset == VAR_0) {
 if (VAR_8->bus == VAR_1) {
     FUNC_2(VAR_5);
 } else {
     FUNC_4(0, VAR_5);
 }
    } else {
 u_short VAR_9;
 __le16 *VAR_10 = (__le16 *)((char *)&VAR_8->srom + VAR_3);
 for (VAR_6=0; VAR_6<(VAR_2>>1); VAR_6++) {
     VAR_9 = FUNC_5(VAR_5, (VAR_3>>1) + VAR_6);
     VAR_7 += VAR_9;
     *VAR_10 = FUNC_0(VAR_9);
 }
 if (VAR_7 == 0 || VAR_7 == 3 * 0xffff) {

  return;
 }

 VAR_10 = (__le16 *)&VAR_8->srom;
 for (VAR_6=0; VAR_6<(sizeof(struct de4x5_srom)>>1); VAR_6++) {
     VAR_9 = FUNC_5(VAR_5, VAR_6);
     *VAR_10++ = FUNC_0(VAR_9);
 }
 FUNC_1(&VAR_8->srom);
    }
}
