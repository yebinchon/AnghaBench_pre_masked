
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_rsrc {struct nubus_board* board; } ;
struct nubus_dirent {int dummy; } ;
struct nubus_dir {int dummy; } ;
struct nubus_board {int slot; int slot_addr; int dev; } ;
struct net_device {int base_addr; int* dev_addr; int mem_start; int mem_end; int irq; } ;
typedef enum mac8390_type { ____Placeholder_mac8390_type } mac8390_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nubus_dir*,int ,struct nubus_dirent*) ;
 int FUNC_5 (struct nubus_rsrc*,struct nubus_dir*) ;
 int FUNC_6 (int*,struct nubus_dirent*,int) ;
 int FUNC_7 (struct nubus_dir*) ;
 int* VAR_9 ;

__attribute__((used)) static bool FUNC_8(struct net_device *VAR_10,
         struct nubus_rsrc *VAR_11,
         enum mac8390_type VAR_12)
{
 struct nubus_board *VAR_13 = VAR_11->board;
 struct nubus_dir VAR_14;
 struct nubus_dirent VAR_15;
 int VAR_16;
 volatile unsigned short *VAR_17;

 VAR_10->irq = FUNC_0(VAR_13->slot);

 VAR_10->base_addr = VAR_13->slot_addr | ((VAR_13->slot & 0xf) << 20);






 if (FUNC_5(VAR_11, &VAR_14) == -1) {
  FUNC_1(&VAR_13->dev,
   "Unable to get Nubus functional directory\n");
  return 0;
 }


 if (FUNC_4(&VAR_14, VAR_6, &VAR_15) == -1) {
  FUNC_2(&VAR_13->dev, "MAC address resource not found\n");
  return 0;
 }

 FUNC_6(VAR_10->dev_addr, &VAR_15, 6);

 if (VAR_9[VAR_12] == 1) {
  FUNC_7(&VAR_14);
  if (FUNC_4(&VAR_14, VAR_7,
        &VAR_15) == -1) {
   FUNC_1(&VAR_13->dev,
    "Memory offset resource not found\n");
   return 0;
  }
  FUNC_6(&VAR_16, &VAR_15, 4);
  VAR_10->mem_start = VAR_10->base_addr + VAR_16;

  VAR_10->base_addr = VAR_10->mem_start + 0x10000;
  FUNC_7(&VAR_14);
  if (FUNC_4(&VAR_14, VAR_8,
        &VAR_15) == -1) {
   FUNC_2(&VAR_13->dev,
     "Memory length resource not found, probing\n");
   VAR_16 = FUNC_3(VAR_10->mem_start);
  } else {
   FUNC_6(&VAR_16, &VAR_15, 4);
  }
  VAR_10->mem_end = VAR_10->mem_start + VAR_16;
 } else {
  switch (VAR_12) {
  case 128:
  case 130:
   VAR_10->base_addr = (int)(VAR_13->slot_addr +
            VAR_2);
   VAR_10->mem_start = (int)(VAR_13->slot_addr +
            VAR_3);
   VAR_10->mem_end = VAR_10->mem_start +
           FUNC_3(VAR_10->mem_start);
   break;
  case 129:
   VAR_10->base_addr = (int)(VAR_13->slot_addr +
            VAR_4);
   VAR_10->mem_start = (int)(VAR_13->slot_addr +
            VAR_5);
   VAR_10->mem_end = VAR_10->mem_start +
           FUNC_3(VAR_10->mem_start);
   break;
  case 131:
   VAR_10->base_addr = (int)(VAR_13->slot_addr +
            VAR_0);
   VAR_10->mem_start = (int)(VAR_13->slot_addr +
            VAR_1);






   VAR_17 = (void *)VAR_10->base_addr;
   *VAR_17 = 0x21;
   VAR_10->mem_end = VAR_10->mem_start +
           FUNC_3(VAR_10->mem_start);
   break;

  default:
   FUNC_1(&VAR_13->dev,
    "No known base address for card type\n");
   return 0;
  }
 }

 return 1;
}
