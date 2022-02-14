
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct spi_nor {int sst_write_second; void* program_opcode; int dev; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,int ,size_t) ;
 struct spi_nor* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct spi_nor*,int ) ;
 int FUNC_4 (struct spi_nor*,int ) ;
 int FUNC_5 (struct spi_nor*) ;
 int FUNC_6 (struct spi_nor*,int,int,int const*) ;
 int FUNC_7 (struct spi_nor*) ;
 int FUNC_8 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_3, loff_t VAR_4, size_t VAR_5,
  size_t *VAR_6, const u_char *VAR_7)
{
 struct spi_nor *VAR_8 = FUNC_2(VAR_3);
 size_t VAR_9;
 int VAR_10;

 FUNC_1(VAR_8->dev, "to 0x%08x, len %zd\n", (u32)VAR_4, VAR_5);

 VAR_10 = FUNC_3(VAR_8, VAR_2);
 if (VAR_10)
  return VAR_10;

 FUNC_8(VAR_8);

 VAR_8->sst_write_second = 0;

 VAR_9 = VAR_4 % 2;

 if (VAR_9) {
  VAR_8->program_opcode = VAR_1;


  VAR_10 = FUNC_6(VAR_8, VAR_4, 1, VAR_7);
  if (VAR_10 < 0)
   goto sst_write_err;
  FUNC_0(VAR_10 != 1, "While writing 1 byte written %i bytes\n",
       (int)VAR_10);
  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10)
   goto sst_write_err;
 }
 VAR_4 += VAR_9;


 for (; VAR_9 < VAR_5 - 1; VAR_9 += 2) {
  VAR_8->program_opcode = VAR_0;


  VAR_10 = FUNC_6(VAR_8, VAR_4, 2, VAR_7 + VAR_9);
  if (VAR_10 < 0)
   goto sst_write_err;
  FUNC_0(VAR_10 != 2, "While writing 2 bytes written %i bytes\n",
       (int)VAR_10);
  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10)
   goto sst_write_err;
  VAR_4 += 2;
  VAR_8->sst_write_second = 1;
 }
 VAR_8->sst_write_second = 0;

 FUNC_7(VAR_8);
 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto sst_write_err;


 if (VAR_9 != VAR_5) {
  FUNC_8(VAR_8);

  VAR_8->program_opcode = VAR_1;
  VAR_10 = FUNC_6(VAR_8, VAR_4, 1, VAR_7 + VAR_9);
  if (VAR_10 < 0)
   goto sst_write_err;
  FUNC_0(VAR_10 != 1, "While writing 1 byte written %i bytes\n",
       (int)VAR_10);
  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10)
   goto sst_write_err;
  FUNC_7(VAR_8);
  VAR_9 += 1;
 }
sst_write_err:
 *VAR_6 += VAR_9;
 FUNC_4(VAR_8, VAR_2);
 return VAR_10;
}
