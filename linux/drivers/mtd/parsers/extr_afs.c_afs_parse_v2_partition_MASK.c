
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int u32 ;
struct mtd_partition {int offset; int size; scalar_t__ mask_flags; int name; } ;
struct mtd_info {int erasesize; } ;
typedef int imginfo ;
typedef int footer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct mtd_info*,int,int,size_t*,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int*,int) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_4,
      u_int VAR_5, struct mtd_partition *VAR_6)
{
 u_int VAR_7;
 u32 VAR_8[12];
 u32 VAR_9[36];
 char *VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 size_t VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = 0;

 FUNC_2("Parsing v2 partition @%08x-%08x\n",
   VAR_5, VAR_5 + VAR_4->erasesize);


 VAR_7 = VAR_5 + VAR_4->erasesize - sizeof(VAR_8);
 VAR_19 = FUNC_1(VAR_4, VAR_7, sizeof(VAR_8), &VAR_18, (u_char *)VAR_8);
 if ((VAR_19 < 0) || (VAR_19 >= 0 && VAR_18 != sizeof(VAR_8))) {
  FUNC_3("AFS: mtd read failed at 0x%x: %d\n",
         VAR_7, VAR_19);
  return -VAR_1;
 }
 VAR_10 = (char *) &VAR_8[0];
 VAR_11 = VAR_8[9];
 VAR_7 = VAR_5 + VAR_4->erasesize - sizeof(VAR_8) - VAR_8[8];

 FUNC_2("found image \"%s\", version %08x, info @%08x\n",
   VAR_10, VAR_11, VAR_7);


 VAR_19 = FUNC_1(VAR_4, VAR_7, sizeof(VAR_9), &VAR_18, (u_char *)VAR_9);
 if ((VAR_19 < 0) || (VAR_19 >= 0 && VAR_18 != sizeof(VAR_9))) {
  FUNC_3("AFS: mtd read failed at 0x%x: %d\n",
         VAR_7, VAR_19);
  return -VAR_1;
 }


 VAR_17 = FUNC_4(&VAR_9[1], 34);
 if (!VAR_17) {
  FUNC_2("Padding 1 word (4 bytes)\n");
  VAR_21 = 1;
 } else {

  VAR_17 = FUNC_4(&VAR_9[2], 34);
  if (!VAR_17) {
   FUNC_2("Padding 2 words (8 bytes)\n");
   VAR_21 = 2;
  }
 }
 if (VAR_17) {
  FUNC_3("AFS: bad checksum on v2 image info: %08x\n", VAR_17);
  return -VAR_0;
 }
 VAR_12 = VAR_9[VAR_21];
 VAR_13 = VAR_9[VAR_21+1];
 VAR_14 = VAR_9[VAR_21+2];
 VAR_15 = VAR_9[20];
 VAR_16 = VAR_9[21];

 FUNC_2("image entry=%08x, attr=%08x, regions=%08x, "
   "bs=%08x, be=%08x\n",
   VAR_12, VAR_13, VAR_14,
   VAR_15, VAR_16);

 for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
  u32 VAR_22 = VAR_9[VAR_21 + 3 + VAR_20*4];
  u32 VAR_23 = VAR_9[VAR_21 + 4 + VAR_20*4];
  u32 VAR_24 = VAR_9[VAR_21 + 5 + VAR_20*4];
  u32 VAR_25;
  u32 VAR_26;

  FUNC_2("  region %d: address: %08x, size: %08x, "
    "offset: %08x\n",
    VAR_20,
    VAR_22,
    VAR_23,
    VAR_24);

  VAR_25 = VAR_5 + VAR_24;
  VAR_26 = VAR_25 + VAR_23;

  VAR_26 += (VAR_4->erasesize - 1);
  VAR_26 &= ~(VAR_4->erasesize -1);
  FUNC_2("   partition start = %08x, partition end = %08x\n",
    VAR_25, VAR_26);


  VAR_6->name = FUNC_0(VAR_10, VAR_3);
  if (!VAR_6->name)
   return -VAR_2;
  VAR_6->offset = VAR_25;
  VAR_6->size = VAR_26 - VAR_25;
  VAR_6->mask_flags = 0;
 }

 return 0;
}
