
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spinand_device {int spimem; } ;
struct spi_mem_op {int dummy; } ;
struct TYPE_2__ {int strength; } ;
struct nand_device {TYPE_1__ eccreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_mem_op FUNC_0 (int,int*) ;

 int VAR_2 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct spi_mem_op*) ;
 struct nand_device* FUNC_3 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_4(struct spinand_device *VAR_3,
          u8 VAR_4)
{
 struct nand_device *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6 = 0;
 struct spi_mem_op VAR_7 = FUNC_0(0x30, &VAR_6);

 switch (VAR_4 & VAR_2) {
 case 130:
  return 0;

 case 129:
  return -VAR_0;

 case 131:
 case 128:





  if (FUNC_2(VAR_3->spimem, &VAR_7))
   return VAR_5->eccreq.strength;

  VAR_6 >>= 4;

  if (FUNC_1(VAR_6 > VAR_5->eccreq.strength || !VAR_6))
   return VAR_5->eccreq.strength;

  return VAR_6;

 default:
  break;
 }

 return -VAR_1;
}
