
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_device*,int*,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_3,
        u8 VAR_4, const u8 *VAR_5, u32 VAR_6)
{
 u8 VAR_7[VAR_0 + 4];
 const u8 *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!VAR_3 || !VAR_5) {
  FUNC_2("invalid arg\n");
  return -VAR_1;
 }
 if (VAR_6 > VAR_0 || VAR_6 > VAR_2) {
  FUNC_2("data size > WRITE_MAX\n");
  return -VAR_1;
 }

 if (VAR_4 + VAR_6 > 0x100) {
  FUNC_2("out of range\n");
  return -VAR_1;
 }

 VAR_7[0] = 0x0e;
 VAR_8 = VAR_5;

 VAR_7[1] = VAR_4;
 VAR_7[2] = (u8)VAR_6;

 FUNC_1(&VAR_7[3], VAR_8, VAR_7[2]);

 VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_7[2] + 3);
 if (VAR_9)
  FUNC_2("write spi failed %d\n", VAR_9);

 return VAR_9;
}
