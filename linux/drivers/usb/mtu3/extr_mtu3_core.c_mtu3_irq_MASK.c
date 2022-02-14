
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtu3 {int lock; int mac_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mtu3*) ;
 int FUNC_1 (struct mtu3*) ;
 int FUNC_2 (struct mtu3*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mtu3*) ;
 int FUNC_5 (struct mtu3*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct mtu3 *VAR_10 = (struct mtu3 *)VAR_9;
 unsigned long VAR_11;
 u32 VAR_12;

 FUNC_6(&VAR_10->lock, VAR_11);


 VAR_12 = FUNC_3(VAR_10->mac_base, VAR_7);
 VAR_12 &= FUNC_3(VAR_10->mac_base, VAR_6);

 if (VAR_12 & VAR_1)
  FUNC_1(VAR_10);

 if (VAR_12 & VAR_3)
  FUNC_4(VAR_10);

 if (VAR_12 & VAR_4)
  FUNC_5(VAR_10);

 if (VAR_12 & VAR_0)
  FUNC_0(VAR_10);

 if (VAR_12 & VAR_5)
  FUNC_2(VAR_10);

 FUNC_7(&VAR_10->lock, VAR_11);

 return VAR_2;
}
