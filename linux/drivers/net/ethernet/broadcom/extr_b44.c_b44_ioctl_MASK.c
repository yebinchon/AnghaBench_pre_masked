
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ifreq {int dummy; } ;
struct b44 {int flags; int lock; int mii_if; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int *) ;
 int FUNC_2 (struct ifreq*) ;
 struct b44* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct ifreq*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct b44 *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = -VAR_1;

 if (!FUNC_4(VAR_2))
  goto out;

 FUNC_6(&VAR_5->lock);
 if (VAR_5->flags & VAR_0) {
  FUNC_0(!VAR_2->phydev);
  VAR_6 = FUNC_5(VAR_2->phydev, VAR_3, VAR_4);
 } else {
  VAR_6 = FUNC_1(&VAR_5->mii_if, FUNC_2(VAR_3), VAR_4, ((void*)0));
 }
 FUNC_7(&VAR_5->lock);
out:
 return VAR_6;
}
