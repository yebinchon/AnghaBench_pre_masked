
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {int mii_lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vortex_private*) ;
 int FUNC_1 (struct vortex_private*,int) ;
 scalar_t__ VAR_5 ;
 struct vortex_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vortex_private*,int,int,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct vortex_private *VAR_10 = FUNC_2(VAR_6);
 int VAR_11 = 0x50020000 | (VAR_7 << 23) | (VAR_8 << 18) | VAR_9;
 int VAR_12;

 FUNC_3(&VAR_10->mii_lock);

 if (VAR_5)
  FUNC_1(VAR_10, 32);


 for (VAR_12 = 31; VAR_12 >= 0; VAR_12--) {
  int VAR_13 = (VAR_11&(1<<VAR_12)) ? VAR_1 : VAR_0;
  FUNC_5(VAR_10, VAR_13, 4, VAR_4);
  FUNC_0(VAR_10);
  FUNC_5(VAR_10, VAR_13 | VAR_3,
          4, VAR_4);
  FUNC_0(VAR_10);
 }

 for (VAR_12 = 1; VAR_12 >= 0; VAR_12--) {
  FUNC_5(VAR_10, VAR_2, 4, VAR_4);
  FUNC_0(VAR_10);
  FUNC_5(VAR_10, VAR_2 | VAR_3,
          4, VAR_4);
  FUNC_0(VAR_10);
 }

 FUNC_4(&VAR_10->mii_lock);
}
