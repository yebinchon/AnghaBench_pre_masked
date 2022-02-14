
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
 int VAR_5 ;
 int FUNC_0 (struct vortex_private*) ;
 int FUNC_1 (struct vortex_private*,int) ;
 scalar_t__ VAR_6 ;
 struct vortex_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vortex_private*,int,int ) ;
 int FUNC_6 (struct vortex_private*,int,int,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct vortex_private *VAR_11 = FUNC_2(VAR_7);
 int VAR_12 = (0xf6 << 10) | (VAR_8 << 5) | VAR_9;
 unsigned int VAR_13 = 0;

 FUNC_3(&VAR_11->mii_lock);

 if (VAR_6)
  FUNC_1(VAR_11, 32);


 for (VAR_10 = 14; VAR_10 >= 0; VAR_10--) {
  int VAR_14 = (VAR_12&(1<<VAR_10)) ? VAR_2 : VAR_1;
  FUNC_6(VAR_11, VAR_14, 4, VAR_5);
  FUNC_0(VAR_11);
  FUNC_6(VAR_11, VAR_14 | VAR_4,
          4, VAR_5);
  FUNC_0(VAR_11);
 }

 for (VAR_10 = 19; VAR_10 > 0; VAR_10--) {
  FUNC_6(VAR_11, VAR_3, 4, VAR_5);
  FUNC_0(VAR_11);
  VAR_13 = (VAR_13 << 1) |
   ((FUNC_5(VAR_11, 4, VAR_5) &
     VAR_0) ? 1 : 0);
  FUNC_6(VAR_11, VAR_3 | VAR_4,
          4, VAR_5);
  FUNC_0(VAR_11);
 }

 FUNC_4(&VAR_11->mii_lock);

 return VAR_13 & 0x20000 ? 0xffff : VAR_13>>1 & 0xffff;
}
