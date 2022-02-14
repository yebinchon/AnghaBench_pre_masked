
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct spi_nor {int flags; int dev; } ;
struct mtd_info {int erasesize; int size; } ;
struct erase_info {int addr; int len; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,long long,long long) ;
 int FUNC_1 (int,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct spi_nor*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 struct spi_nor* FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (struct spi_nor*,int,int) ;
 int FUNC_6 (struct spi_nor*,int) ;
 scalar_t__ FUNC_7 (struct spi_nor*) ;
 int FUNC_8 (struct spi_nor*,int ) ;
 int FUNC_9 (struct spi_nor*,int ) ;
 int FUNC_10 (struct spi_nor*) ;
 int FUNC_11 (struct spi_nor*,unsigned long) ;
 int FUNC_12 (struct spi_nor*) ;
 int FUNC_13 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_14(struct mtd_info *VAR_6, struct erase_info *VAR_7)
{
 struct spi_nor *VAR_8 = FUNC_4(VAR_6);
 u32 VAR_9, VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_8->dev, "at 0x%llx, len %lld\n", (long long)VAR_7->addr,
   (long long)VAR_7->len);

 if (FUNC_7(VAR_8)) {
  FUNC_1(VAR_7->len, VAR_6->erasesize, &VAR_11);
  if (VAR_11)
   return -VAR_1;
 }

 VAR_9 = VAR_7->addr;
 VAR_10 = VAR_7->len;

 VAR_12 = FUNC_8(VAR_8, VAR_4);
 if (VAR_12)
  return VAR_12;


 if (VAR_10 == VAR_6->size && !(VAR_8->flags & VAR_3)) {
  unsigned long VAR_13;

  FUNC_13(VAR_8);

  if (FUNC_2(VAR_8)) {
   VAR_12 = -VAR_2;
   goto erase_err;
  }







  VAR_13 = FUNC_3(VAR_0,
         VAR_0 *
         (unsigned long)(VAR_6->size / VAR_5));
  VAR_12 = FUNC_11(VAR_8, VAR_13);
  if (VAR_12)
   goto erase_err;







 } else if (FUNC_7(VAR_8)) {
  while (VAR_10) {
   FUNC_13(VAR_8);

   VAR_12 = FUNC_6(VAR_8, VAR_9);
   if (VAR_12)
    goto erase_err;

   VAR_9 += VAR_6->erasesize;
   VAR_10 -= VAR_6->erasesize;

   VAR_12 = FUNC_10(VAR_8);
   if (VAR_12)
    goto erase_err;
  }


 } else {
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_10);
  if (VAR_12)
   goto erase_err;
 }

 FUNC_12(VAR_8);

erase_err:
 FUNC_9(VAR_8, VAR_4);

 return VAR_12;
}
