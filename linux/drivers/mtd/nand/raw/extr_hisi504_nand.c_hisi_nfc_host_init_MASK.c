
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; } ;
struct hinfc_host {int mmio; scalar_t__ chipselect; int * cache_addr_value; scalar_t__* addr_value; scalar_t__ addr_cycle; int version; struct nand_chip chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct hinfc_host*,int ) ;
 int FUNC_2 (struct hinfc_host*,unsigned int,int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hinfc_host *VAR_17)
{
 struct nand_chip *VAR_18 = &VAR_17->chip;
 unsigned int VAR_19 = 0;

 VAR_17->version = FUNC_1(VAR_17, VAR_15);
 VAR_17->addr_cycle = 0;
 VAR_17->addr_value[0] = 0;
 VAR_17->addr_value[1] = 0;
 VAR_17->cache_addr_value[0] = ~0;
 VAR_17->cache_addr_value[1] = ~0;
 VAR_17->chipselect = 0;


 VAR_19 = VAR_5 | VAR_8
  | ((0x001 & VAR_7)
   << VAR_6)
  | ((0x0 & VAR_3)
   << VAR_4)
  | ((VAR_18->options & VAR_16) ?
   VAR_2 : 0);
 FUNC_2(VAR_17, VAR_19, VAR_1);

 FUNC_3(VAR_17->mmio, 0xff, VAR_0);

 FUNC_2(VAR_17, FUNC_0(VAR_14,
      VAR_13, VAR_12), VAR_11);


 FUNC_2(VAR_17, VAR_10, VAR_9);
}
