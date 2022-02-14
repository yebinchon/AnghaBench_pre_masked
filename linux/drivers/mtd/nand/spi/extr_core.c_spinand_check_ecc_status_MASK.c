
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int (* get_status ) (struct spinand_device*,int) ;} ;
struct spinand_device {TYPE_1__ eccinfo; } ;
struct TYPE_4__ {int strength; } ;
struct nand_device {TYPE_2__ eccreq; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 struct nand_device* FUNC_0 (struct spinand_device*) ;
 int FUNC_1 (struct spinand_device*,int) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_3, u8 VAR_4)
{
 struct nand_device *VAR_5 = FUNC_0(VAR_3);

 if (VAR_3->eccinfo.get_status)
  return VAR_3->eccinfo.get_status(VAR_3, VAR_4);

 switch (VAR_4 & VAR_2) {
 case 129:
  return 0;

 case 130:





  return VAR_5->eccreq.strength;

 case 128:
  return -VAR_0;

 default:
  break;
 }

 return -VAR_1;
}
