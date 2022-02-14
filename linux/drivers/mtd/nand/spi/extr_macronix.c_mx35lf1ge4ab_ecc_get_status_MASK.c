
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spinand_device {int dummy; } ;
struct TYPE_2__ {int strength; } ;
struct nand_device {TYPE_1__ eccreq; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spinand_device*,int*) ;
 struct nand_device* FUNC_2 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_3(struct spinand_device *VAR_3,
           u8 VAR_4)
{
 struct nand_device *VAR_5 = FUNC_2(VAR_3);
 u8 VAR_6;

 switch (VAR_4 & VAR_2) {
 case 129:
  return 0;

 case 128:
  return -VAR_0;

 case 130:





  if (FUNC_1(VAR_3, &VAR_6))
   return VAR_5->eccreq.strength;

  if (FUNC_0(VAR_6 > VAR_5->eccreq.strength || !VAR_6))
   return VAR_5->eccreq.strength;

  return VAR_6;

 default:
  break;
 }

 return -VAR_1;
}
