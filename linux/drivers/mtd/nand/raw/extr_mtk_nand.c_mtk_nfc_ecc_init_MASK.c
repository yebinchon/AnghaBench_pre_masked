
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ mode; int size; int strength; } ;
struct TYPE_5__ {int strength; int step_size; } ;
struct TYPE_6__ {TYPE_1__ eccreq; } ;
struct nand_chip {TYPE_4__ ecc; TYPE_2__ base; } ;
struct mtk_nfc {int ecc; TYPE_3__* caps; } ;
struct mtd_info {int writesize; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int max_sector_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 struct nand_chip* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,struct mtd_info*) ;
 struct mtk_nfc* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, struct mtd_info *VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_2(VAR_5);
 struct mtk_nfc *VAR_7 = FUNC_6(VAR_6);
 u32 VAR_8;
 int VAR_9, VAR_10;


 if (VAR_6->ecc.mode != VAR_1) {
  FUNC_0(VAR_4, "ecc.mode not supported\n");
  return -VAR_0;
 }


 if (!VAR_6->ecc.size || !VAR_6->ecc.strength) {

  VAR_6->ecc.strength = VAR_6->base.eccreq.strength;
  VAR_6->ecc.size = VAR_6->base.eccreq.step_size;





  if (VAR_6->ecc.size < 1024) {
   if (VAR_5->writesize > 512 &&
       VAR_7->caps->max_sector_size > 512) {
    VAR_6->ecc.size = 1024;
    VAR_6->ecc.strength <<= 1;
   } else {
    VAR_6->ecc.size = 512;
   }
  } else {
   VAR_6->ecc.size = 1024;
  }

  VAR_10 = FUNC_5(&VAR_8, VAR_5);
  if (VAR_10)
   return VAR_10;


  VAR_9 = (VAR_6->ecc.strength * FUNC_4(VAR_7->ecc)
   + 7) >> 3;
  VAR_9 = VAR_8 - VAR_9;






  if (VAR_9 > VAR_2) {
   VAR_8 -= VAR_2;
   VAR_6->ecc.strength = (VAR_8 << 3) /
          FUNC_4(VAR_7->ecc);
  } else if (VAR_9 < 0) {
   VAR_8 -= VAR_3;
   VAR_6->ecc.strength = (VAR_8 << 3) /
          FUNC_4(VAR_7->ecc);
  }
 }

 FUNC_3(VAR_7->ecc, &VAR_6->ecc.strength);

 FUNC_1(VAR_4, "eccsize %d eccstrength %d\n",
   VAR_6->ecc.size, VAR_6->ecc.strength);

 return 0;
}
