
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int olinfo_status; } ;
union ixgbe_adv_tx_desc {TYPE_1__ read; } ;
typedef int u32 ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(union ixgbe_adv_tx_desc *VAR_10,
         u32 VAR_11, unsigned int VAR_12)
{
 __le32 VAR_13 = FUNC_0(VAR_12 << VAR_2);


 if (VAR_11 & VAR_6)
  VAR_13 |= FUNC_0(VAR_5);


 if (VAR_11 & VAR_8)
  VAR_13 |= FUNC_0(VAR_4);


 if (VAR_11 & VAR_7)
  VAR_13 |= FUNC_0(VAR_3);


 if (VAR_11 & (VAR_9 | VAR_7))
  VAR_13 |= FUNC_0(1u << VAR_1);




 VAR_13 |= FUNC_0(VAR_0);

 VAR_10->read.olinfo_status = VAR_13;
}
