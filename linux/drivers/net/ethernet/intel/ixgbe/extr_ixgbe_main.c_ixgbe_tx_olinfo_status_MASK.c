
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int olinfo_status; } ;
union ixgbe_adv_tx_desc {TYPE_1__ read; } ;
typedef unsigned int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(union ixgbe_adv_tx_desc *VAR_9,
       u32 VAR_10, unsigned int VAR_11)
{
 u32 VAR_12 = VAR_11 << VAR_1;


 VAR_12 |= FUNC_0(VAR_10,
     VAR_6,
     VAR_4);


 VAR_12 |= FUNC_0(VAR_10,
     VAR_8,
     VAR_3);


 VAR_12 |= FUNC_0(VAR_10,
     VAR_7,
     VAR_2);





 VAR_12 |= FUNC_0(VAR_10,
     VAR_5,
     VAR_0);

 VAR_9->read.olinfo_status = FUNC_1(VAR_12);
}
