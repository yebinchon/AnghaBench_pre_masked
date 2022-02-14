
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_memory_organization {unsigned int ntargets; } ;
struct nand_flash_dev {int dummy; } ;
struct TYPE_4__ {int* data; } ;
struct nand_chip {int cur_cs; int options; int base; TYPE_2__ id; int lock; } ;
struct TYPE_3__ {scalar_t__ parent; } ;
struct mtd_info {unsigned int size; TYPE_1__ dev; scalar_t__ name; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,struct nand_flash_dev*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int ,int*,int) ;
 int FUNC_7 (struct nand_chip*,unsigned int) ;
 int FUNC_8 (struct nand_chip*,unsigned int) ;
 int FUNC_9 (struct nand_chip*) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_11 (int *) ;
 unsigned int FUNC_12 (int *) ;
 int FUNC_13 (struct nand_chip*,int ,int ) ;
 int FUNC_14 (char*,unsigned int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct nand_chip *VAR_2, unsigned int VAR_3,
      struct nand_flash_dev *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_10(VAR_2);
 struct nand_memory_organization *VAR_6;
 int VAR_7, VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_6 = FUNC_11(&VAR_2->base);


 VAR_2->cur_cs = -1;

 FUNC_1(&VAR_2->lock);


 FUNC_13(VAR_2, VAR_1, 0);

 VAR_10 = FUNC_4(VAR_2);
 if (VAR_10)
  return VAR_10;

 if (!VAR_5->name && VAR_5->dev.parent)
  VAR_5->name = FUNC_0(VAR_5->dev.parent);


 FUNC_9(VAR_2);

 VAR_10 = FUNC_5(VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_6->ntargets = VAR_3;


 VAR_10 = FUNC_3(VAR_2, VAR_4);
 if (VAR_10) {
  if (!(VAR_2->options & VAR_0))
   FUNC_15("No NAND device found\n");
  FUNC_2(VAR_2);
  return VAR_10;
 }

 VAR_7 = VAR_2->id.data[0];
 VAR_8 = VAR_2->id.data[1];

 FUNC_2(VAR_2);


 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  u8 VAR_11[2];


  VAR_10 = FUNC_7(VAR_2, VAR_9);
  if (VAR_10)
   break;

  FUNC_8(VAR_2, VAR_9);

  VAR_10 = FUNC_6(VAR_2, 0, VAR_11, sizeof(VAR_11));
  if (VAR_10)
   break;

  if (VAR_7 != VAR_11[0] || VAR_8 != VAR_11[1]) {
   FUNC_2(VAR_2);
   break;
  }
  FUNC_2(VAR_2);
 }
 if (VAR_9 > 1)
  FUNC_14("%d chips detected\n", VAR_9);


 VAR_6->ntargets = VAR_9;
 VAR_5->size = VAR_9 * FUNC_12(&VAR_2->base);

 return 0;
}
