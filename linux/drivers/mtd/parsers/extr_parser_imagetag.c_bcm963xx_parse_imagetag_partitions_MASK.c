
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {char* name; unsigned int offset; unsigned int size; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {unsigned int size; int erasesize; } ;
struct bcm_tag {int total_length; int kernel_length; int kernel_address; int flash_image_start; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtd_info*,char*,int ,struct bcm_tag*) ;
 scalar_t__ FUNC_2 (int ,int,unsigned int*) ;
 struct mtd_partition* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,unsigned int,...) ;
 unsigned int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct bcm_tag*) ;
 struct bcm_tag* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_3,
     const struct mtd_partition **VAR_4,
     struct mtd_part_parser_data *VAR_5)
{

 int VAR_6 = 0, VAR_7 = 0;
 struct bcm_tag *VAR_8 = ((void*)0);
 struct mtd_partition *VAR_9;
 int VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 bool VAR_20 = 0;

 VAR_8 = FUNC_8(sizeof(struct bcm_tag));
 if (!VAR_8)
  return -VAR_1;


 VAR_10 = FUNC_1(VAR_3, "rootfs", 0, VAR_8);
 if (!VAR_10) {
  FUNC_0(VAR_8->flash_image_start);
  if (FUNC_2(VAR_8->flash_image_start, 10, &VAR_11) ||
    VAR_11 < VAR_0) {
   FUNC_4("invalid rootfs address: %*ph\n",
    (int)sizeof(VAR_8->flash_image_start),
    VAR_8->flash_image_start);
   goto out;
  }

  FUNC_0(VAR_8->kernel_address);
  if (FUNC_2(VAR_8->kernel_address, 10, &VAR_12) ||
    VAR_12 < VAR_0) {
   FUNC_4("invalid kernel address: %*ph\n",
    (int)sizeof(VAR_8->kernel_address),
    VAR_8->kernel_address);
   goto out;
  }

  FUNC_0(VAR_8->kernel_length);
  if (FUNC_2(VAR_8->kernel_length, 10, &VAR_16)) {
   FUNC_4("invalid kernel length: %*ph\n",
    (int)sizeof(VAR_8->kernel_length),
    VAR_8->kernel_length);
   goto out;
  }

  FUNC_0(VAR_8->total_length);
  if (FUNC_2(VAR_8->total_length, 10, &VAR_18)) {
   FUNC_4("invalid total length: %*ph\n",
    (int)sizeof(VAR_8->total_length),
    VAR_8->total_length);
   goto out;
  }






  if (VAR_11 < VAR_12)
   VAR_14 = VAR_11 - sizeof(struct bcm_tag);
  else
   VAR_14 = VAR_12 - sizeof(struct bcm_tag);

  VAR_12 = VAR_12 - VAR_14;
  VAR_11 = VAR_11 - VAR_14;
  VAR_13 = FUNC_6(VAR_18, VAR_3->erasesize);

  if (VAR_11 < VAR_12) {

   VAR_15 = VAR_12 - VAR_11;
   VAR_20 = 1;
  } else {

   VAR_11 = VAR_12 + VAR_16;
   VAR_15 = VAR_13 - VAR_11;
  }
 } else {
  goto out;
 }
 VAR_17 = VAR_3->size - VAR_13;


 if (VAR_15 > 0)
  VAR_6++;

 if (VAR_16 > 0)
  VAR_6++;

 VAR_9 = FUNC_3(sizeof(*VAR_9) * VAR_6 + 10 * VAR_6, VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out;
 }


 if (VAR_16 > 0) {
  int VAR_21 = VAR_7;

  if (VAR_15 > 0 && VAR_20)
   VAR_21++;
  VAR_9[VAR_21].name = "kernel";
  VAR_9[VAR_21].offset = VAR_12;
  VAR_9[VAR_21].size = VAR_16;
  VAR_7++;
 }

 if (VAR_15 > 0) {
  int VAR_22 = VAR_7;

  if (VAR_16 > 0 && VAR_20)
   VAR_22--;
  VAR_9[VAR_22].name = "rootfs";
  VAR_9[VAR_22].offset = VAR_11;
  VAR_9[VAR_22].size = VAR_15;
  if (VAR_17 > 0 && !VAR_20)
   VAR_9[VAR_22].size += VAR_17;
  VAR_7++;
 }

 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
  FUNC_5("Partition %d is %s offset %llx and length %llx\n", VAR_19,
   VAR_9[VAR_19].name, VAR_9[VAR_19].offset, VAR_9[VAR_19].size);

 FUNC_5("Spare partition is offset %x and length %x\n", VAR_13,
  VAR_17);

 *VAR_4 = VAR_9;
 VAR_10 = 0;

out:
 FUNC_7(VAR_8);

 if (VAR_10)
  return VAR_10;

 return VAR_6;
}
