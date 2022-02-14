
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pch_gbe_hw {int miim_lock; TYPE_1__* reg; } ;
struct pch_gbe_adapter {int netdev; } ;
struct TYPE_2__ {int MIIM; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,char*,char*,int,int) ;
 int FUNC_3 (int ,char*) ;
 struct pch_gbe_adapter* FUNC_4 (struct pch_gbe_hw*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;

u16 FUNC_8(struct pch_gbe_hw *VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7,
   u16 VAR_8)
{
 struct pch_gbe_adapter *VAR_9 = FUNC_4(VAR_4);
 u32 VAR_10 = 0;
 unsigned int VAR_11;
 unsigned long VAR_12;

 FUNC_5(&VAR_4->miim_lock, VAR_12);

 for (VAR_11 = 100; VAR_11; --VAR_11) {
  if ((FUNC_0(&VAR_4->reg->MIIM) & VAR_1))
   break;
  FUNC_7(20);
 }
 if (VAR_11 == 0) {
  FUNC_3(VAR_9->netdev, "pch-gbe.miim won't go Ready\n");
  FUNC_6(&VAR_4->miim_lock, VAR_12);
  return 0;
 }
 FUNC_1(((VAR_7 << VAR_3) |
    (VAR_5 << VAR_2) |
    VAR_6 | VAR_8), &VAR_4->reg->MIIM);
 for (VAR_11 = 0; VAR_11 < 100; VAR_11++) {
  FUNC_7(20);
  VAR_10 = FUNC_0(&VAR_4->reg->MIIM);
  if ((VAR_10 & VAR_1))
   break;
 }
 FUNC_6(&VAR_4->miim_lock, VAR_12);

 FUNC_2(VAR_9->netdev, "PHY %s: reg=%d, data=0x%04X\n",
     VAR_6 == VAR_0 ? "READ" : "WRITE", VAR_7,
     VAR_6 == VAR_0 ? VAR_10 : VAR_8);
 return (u16) VAR_10;
}
