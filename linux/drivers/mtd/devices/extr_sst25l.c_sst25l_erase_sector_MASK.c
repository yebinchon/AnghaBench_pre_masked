
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sst25l_flash {int spi; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (struct sst25l_flash*) ;
 int FUNC_2 (struct sst25l_flash*,int) ;

__attribute__((used)) static int FUNC_3(struct sst25l_flash *VAR_1, uint32_t VAR_2)
{
 unsigned char VAR_3[4];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, 1);
 if (VAR_4)
  return VAR_4;

 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_2 >> 16;
 VAR_3[2] = VAR_2 >> 8;
 VAR_3[3] = VAR_2;
 VAR_4 = FUNC_0(VAR_1->spi, VAR_3, 4);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_1, 0);
}
