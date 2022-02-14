
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tlan_priv {int lock; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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

__attribute__((used)) static bool
FUNC_10(struct net_device *VAR_7, u16 VAR_8, u16 VAR_9, u16 *VAR_10)
{
 u8 VAR_11;
 u16 VAR_12, VAR_13;
 u32 VAR_14;
 bool VAR_15;
 int VAR_16;
 struct tlan_priv *VAR_17 = FUNC_1(VAR_7);
 unsigned long VAR_18 = 0;

 VAR_15 = 0;
 FUNC_2(VAR_2, VAR_7->base_addr + VAR_0);
 VAR_12 = VAR_7->base_addr + VAR_1 + VAR_2;

 if (!FUNC_0())
  FUNC_3(&VAR_17->lock, VAR_18);

 FUNC_8(VAR_7->base_addr);

 VAR_16 = FUNC_6(VAR_5, VAR_12);
 if (VAR_16)
  FUNC_5(VAR_5, VAR_12);

 FUNC_7(VAR_7->base_addr, 0x1, 2);
 FUNC_7(VAR_7->base_addr, 0x2, 2);
 FUNC_7(VAR_7->base_addr, VAR_8, 5);
 FUNC_7(VAR_7->base_addr, VAR_9, 5);


 FUNC_5(VAR_6, VAR_12);

 FUNC_5(VAR_3, VAR_12);
 FUNC_9(VAR_3, VAR_12);
 FUNC_5(VAR_3, VAR_12);

 VAR_11 = FUNC_6(VAR_4, VAR_12);
 FUNC_9(VAR_3, VAR_12);
 if (VAR_11) {
  for (VAR_14 = 0; VAR_14 < 16; VAR_14++) {
   FUNC_5(VAR_3, VAR_12);
   FUNC_9(VAR_3, VAR_12);
  }
  VAR_13 = 0xffff;
  VAR_15 = 1;
 } else {
  for (VAR_13 = 0, VAR_14 = 0x8000; VAR_14; VAR_14 >>= 1) {
   FUNC_5(VAR_3, VAR_12);
   if (FUNC_6(VAR_4, VAR_12))
    VAR_13 |= VAR_14;
   FUNC_9(VAR_3, VAR_12);
  }
 }


 FUNC_5(VAR_3, VAR_12);
 FUNC_9(VAR_3, VAR_12);

 if (VAR_16)
  FUNC_9(VAR_5, VAR_12);

 *VAR_10 = VAR_13;

 if (!FUNC_0())
  FUNC_4(&VAR_17->lock, VAR_18);

 return VAR_15;

}
