
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nubus_board {int dev; int name; } ;
struct net_device {int mem_start; int mem_end; int irq; int dev_addr; int * netdev_ops; } ;
typedef enum mac8390_type { ____Placeholder_mac8390_type } mac8390_type ;
struct TYPE_2__ {int stop_page; int rmem_start; int rmem_end; int* reg_offset; void* get_8390_hdr; void* block_output; void* block_input; void* reset_8390; void* rx_start_page; void* tx_start_page; int word16; int name; } ;





 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 int * VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ,...) ;
 TYPE_1__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (int) ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int * VAR_20 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_21, struct nubus_board *VAR_22,
      enum mac8390_type VAR_23)
{
 static u32 VAR_24[16] = {
  0, 4, 8, 12,
  16, 20, 24, 28,
  32, 36, 40, 44,
  48, 52, 56, 60
 };
 static u32 VAR_25[16] = {
  60, 56, 52, 48,
  44, 40, 36, 32,
  28, 24, 20, 16,
  12, 8, 4, 0
 };
 static u32 VAR_26[16] = {
  0, 2, 4, 6,
  8, 10, 12, 14,
  16, 18, 20, 22,
  24, 26, 28, 30
 };

 int VAR_27 = 0;


 VAR_21->netdev_ops = &VAR_12;


 VAR_10.name = VAR_6[VAR_23];
 VAR_10.word16 = VAR_20[VAR_23];


 if (VAR_23 == 132) {
  VAR_10.tx_start_page = VAR_2;
  VAR_10.rx_start_page = VAR_0;
  VAR_10.stop_page = VAR_1;
  VAR_10.rmem_start = VAR_21->mem_start;
  VAR_10.rmem_end = VAR_21->mem_start + VAR_1*256;
 } else {
  VAR_10.tx_start_page = VAR_5;
  VAR_10.rx_start_page = VAR_5 + VAR_4;
  VAR_10.stop_page = (VAR_21->mem_end - VAR_21->mem_start)/256;
  VAR_10.rmem_start = VAR_21->mem_start + VAR_4*256;
  VAR_10.rmem_end = VAR_21->mem_end;
 }


 switch (VAR_23) {
 case 130:
 case 134:
  switch (FUNC_3(VAR_21->mem_start)) {
  case 135:
   FUNC_1(&VAR_22->dev,
    "Don't know how to access card memory\n");
   return -VAR_3;

  case 137:

   VAR_10.reset_8390 = VAR_13;
   VAR_10.block_input = VAR_17;
   VAR_10.block_output = VAR_18;
   VAR_10.get_8390_hdr = VAR_19;
   VAR_10.reg_offset = VAR_25;
   break;

  case 136:

   VAR_10.reset_8390 = VAR_13;
   VAR_10.block_input = VAR_14;
   VAR_10.block_output = VAR_15;
   VAR_10.get_8390_hdr = VAR_16;
   VAR_10.reg_offset = VAR_25;
   VAR_27 = 1;
   break;
  }
  break;

 case 133:




  VAR_10.reset_8390 = VAR_13;
  VAR_10.block_input = VAR_17;
  VAR_10.block_output = VAR_18;
  VAR_10.get_8390_hdr = VAR_19;
  VAR_10.reg_offset = VAR_25;
  break;

 case 132:

  VAR_10.reset_8390 = VAR_13;
  VAR_10.block_input = VAR_17;
  VAR_10.block_output = VAR_18;
  VAR_10.get_8390_hdr = VAR_19;
  VAR_10.reg_offset = VAR_26;
  break;

 case 131:
 case 128:


  VAR_10.reset_8390 = VAR_13;
  VAR_10.block_input = VAR_7;
  VAR_10.block_output = VAR_8;
  VAR_10.get_8390_hdr = VAR_9;
  VAR_10.reg_offset = VAR_24;
  break;

 case 129:

  VAR_10.reset_8390 = VAR_11;
  VAR_10.block_input = VAR_17;
  VAR_10.block_output = VAR_18;
  VAR_10.get_8390_hdr = VAR_19;
  VAR_10.reg_offset = VAR_24;
  break;

 default:
  FUNC_1(&VAR_22->dev, "Unsupported card type\n");
  return -VAR_3;
 }

 FUNC_0(VAR_21, 0);


 FUNC_2(&VAR_22->dev, "%s (type %s)\n", VAR_22->name, VAR_6[VAR_23]);
 FUNC_2(&VAR_22->dev, "MAC %pM, IRQ %d, %d KB shared memory at %#lx, %d-bit access.\n",
   VAR_21->dev_addr, VAR_21->irq,
   (unsigned int)(VAR_21->mem_end - VAR_21->mem_start) >> 10,
   VAR_21->mem_start, VAR_27 ? 32 : 16);
 return 0;
}
