
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {char* name; unsigned int offset; unsigned int size; int types; } ;
struct mtd_info {unsigned int size; int erasesize; } ;
struct bcm963xx_nvram {unsigned int psi_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct mtd_partition* FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_6,
 const struct mtd_partition **VAR_7, struct bcm963xx_nvram *VAR_8)
{
 struct mtd_partition *VAR_9;
 int VAR_10 = 3, VAR_11 = 0;
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(VAR_5, VAR_6->erasesize,
         VAR_0);

 VAR_12 = VAR_14;
 VAR_13 = VAR_8->psi_size * VAR_3;
 VAR_13 = FUNC_3(VAR_13, VAR_14);

 VAR_9 = FUNC_0(sizeof(*VAR_9) * VAR_10 + 10 * VAR_10, VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_9[VAR_11].name = "CFE";
 VAR_9[VAR_11].offset = 0;
 VAR_9[VAR_11].size = VAR_12;
 VAR_11++;

 VAR_9[VAR_11].name = "nvram";
 VAR_9[VAR_11].offset = VAR_6->size - VAR_13;
 VAR_9[VAR_11].size = VAR_13;
 VAR_11++;


 VAR_9[VAR_11].name = "linux";
 VAR_9[VAR_11].offset = VAR_12;
 VAR_9[VAR_11].size = VAR_6->size - VAR_12 - VAR_13;
 VAR_9[VAR_11].types = VAR_4;

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  FUNC_2("Partition %d is %s offset %llx and length %llx\n", VAR_15,
   VAR_9[VAR_15].name, VAR_9[VAR_15].offset, VAR_9[VAR_15].size);

 *VAR_7 = VAR_9;

 return VAR_10;
}
