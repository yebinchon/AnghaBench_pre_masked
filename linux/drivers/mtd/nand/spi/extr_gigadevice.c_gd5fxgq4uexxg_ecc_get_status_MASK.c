
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct spi_mem_op FUNC_0 (int ,int*) ;
 int VAR_3 ;


 int FUNC_1 (int ,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_4,
     u8 VAR_5)
{
 u8 VAR_6;
 struct spi_mem_op VAR_7 = FUNC_0(VAR_2,
            &VAR_6);
 int VAR_8;

 switch (VAR_5 & VAR_3) {
 case 129:
  return 0;

 case 131:




  VAR_8 = FUNC_1(VAR_4->spimem, &VAR_7);
  if (VAR_8)
   return VAR_8;






  return ((VAR_5 & VAR_3) >> 2) |
   ((VAR_6 & VAR_3) >> 4);

 case 130:
  return 8;

 case 128:
  return -VAR_0;

 default:
  break;
 }

 return -VAR_1;
}
