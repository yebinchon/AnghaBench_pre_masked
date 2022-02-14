
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlan_priv {int lock; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(struct net_device *VAR_5, u16 VAR_6, u16 VAR_7, u16 VAR_8)
{
 u16 VAR_9;
 int VAR_10;
 unsigned long VAR_11 = 0;
 struct tlan_priv *VAR_12 = FUNC_1(VAR_5);

 FUNC_2(VAR_2, VAR_5->base_addr + VAR_0);
 VAR_9 = VAR_5->base_addr + VAR_1 + VAR_2;

 if (!FUNC_0())
  FUNC_3(&VAR_12->lock, VAR_11);

 FUNC_8(VAR_5->base_addr);

 VAR_10 = FUNC_6(VAR_4, VAR_9);
 if (VAR_10)
  FUNC_5(VAR_4, VAR_9);

 FUNC_7(VAR_5->base_addr, 0x1, 2);
 FUNC_7(VAR_5->base_addr, 0x1, 2);
 FUNC_7(VAR_5->base_addr, VAR_6, 5);
 FUNC_7(VAR_5->base_addr, VAR_7, 5);

 FUNC_7(VAR_5->base_addr, 0x2, 2);
 FUNC_7(VAR_5->base_addr, VAR_8, 16);

 FUNC_5(VAR_3, VAR_9);
 FUNC_9(VAR_3, VAR_9);

 if (VAR_10)
  FUNC_9(VAR_4, VAR_9);

 if (!FUNC_0())
  FUNC_4(&VAR_12->lock, VAR_11);

}
