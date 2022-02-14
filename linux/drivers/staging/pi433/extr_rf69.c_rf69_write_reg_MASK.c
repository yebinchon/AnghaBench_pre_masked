
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct spi_device {int dev; } ;


 char VAR_0 ;
 int FUNC_0 (int *,char*,char,char) ;
 int FUNC_1 (struct spi_device*,char**,int) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 char VAR_5[2];

 VAR_5[0] = VAR_2 | VAR_0;
 VAR_5[1] = VAR_3;

 VAR_4 = FUNC_1(VAR_1, &VAR_5, 2);
 return VAR_4;
}
