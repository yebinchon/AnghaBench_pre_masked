
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct ssb_sflash_tbl_e {int id; int blocksize; int numblocks; int name; } ;
struct ssb_sflash {int blocksize; int numblocks; int size; int present; int window; } ;
struct ssb_chipcommon {int capabilities; TYPE_3__* dev; } ;
struct TYPE_11__ {struct ssb_sflash* platform_data; } ;
struct TYPE_12__ {TYPE_5__ dev; TYPE_4__* resource; } ;
struct TYPE_10__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_9__ {TYPE_2__* bus; } ;
struct TYPE_7__ {struct ssb_sflash sflash; } ;
struct TYPE_8__ {TYPE_1__ mipscore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_0 (struct ssb_chipcommon*,int ) ;
 int FUNC_1 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int,int,int) ;
 struct ssb_sflash_tbl_e* VAR_8 ;
 int FUNC_4 (struct ssb_chipcommon*,int ) ;
 TYPE_6__ VAR_9 ;
 struct ssb_sflash_tbl_e* VAR_10 ;
 struct ssb_sflash_tbl_e* VAR_11 ;

int FUNC_5(struct ssb_chipcommon *VAR_12)
{
 struct ssb_sflash *VAR_13 = &VAR_12->dev->bus->mipscore.sflash;
 const struct ssb_sflash_tbl_e *VAR_14;
 u32 VAR_15, VAR_16;

 switch (VAR_12->capabilities & VAR_1) {
 case 128:
  FUNC_4(VAR_12, VAR_4);

  FUNC_1(VAR_12, VAR_2, 0);
  FUNC_4(VAR_12, VAR_5);
  VAR_15 = FUNC_0(VAR_12, VAR_6);

  FUNC_1(VAR_12, VAR_2, 1);
  FUNC_4(VAR_12, VAR_5);
  VAR_16 = FUNC_0(VAR_12, VAR_6);

  switch (VAR_15) {
  case 0xbf:
   for (VAR_14 = VAR_10; VAR_14->name; VAR_14++) {
    if (VAR_14->id == VAR_16)
     break;
   }
   break;
  case 0x13:
   return -VAR_0;
  default:
   for (VAR_14 = VAR_11; VAR_14->name; VAR_14++) {
    if (VAR_14->id == VAR_15)
     break;
   }
   break;
  }
  if (!VAR_14->name) {
   FUNC_2("Unsupported ST serial flash (id: 0x%X, id2: 0x%X)\n",
          VAR_15, VAR_16);
   return -VAR_0;
  }

  break;
 case 129:
  FUNC_4(VAR_12, VAR_3);
  VAR_15 = FUNC_0(VAR_12, VAR_6) & 0x3c;

  for (VAR_14 = VAR_8; VAR_14->name; VAR_14++) {
   if (VAR_14->id == VAR_15)
    break;
  }
  if (!VAR_14->name) {
   FUNC_2("Unsupported Atmel serial flash (id: 0x%X)\n",
          VAR_15);
   return -VAR_0;
  }

  break;
 default:
  FUNC_2("Unsupported flash type\n");
  return -VAR_0;
 }

 VAR_13->window = VAR_7;
 VAR_13->blocksize = VAR_14->blocksize;
 VAR_13->numblocks = VAR_14->numblocks;
 VAR_13->size = VAR_13->blocksize * VAR_13->numblocks;
 VAR_13->present = 1;

 FUNC_3("Found %s serial flash (size: %dKiB, blocksize: 0x%X, blocks: %d)\n",
  VAR_14->name, VAR_13->size / 1024, VAR_14->blocksize, VAR_14->numblocks);



 VAR_9.resource[0].end = VAR_9.resource[0].start +
      VAR_13->size;
 VAR_9.dev.platform_data = VAR_13;

 return 0;
}
