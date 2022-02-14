
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u16 ;
struct swap_eb {int erase_count; } ;
struct mtdswap_oobdata {void* magic; int count; } ;
struct mtdswap_dev {int dev; TYPE_1__* mtd; } ;
struct mtd_oob_ops {int ooblen; int oobretlen; int * datbuf; int mode; int * oobbuf; scalar_t__ ooboffs; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,struct mtd_oob_ops*) ;
 scalar_t__ FUNC_5 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_6 (struct mtdswap_dev*,struct swap_eb*) ;

__attribute__((used)) static int FUNC_7(struct mtdswap_dev *VAR_6, struct swap_eb *VAR_7,
    u16 VAR_8)
{
 struct mtdswap_oobdata VAR_9;
 int VAR_10;
 loff_t VAR_11;
 struct mtd_oob_ops VAR_12;

 VAR_12.ooboffs = 0;
 VAR_12.oobbuf = (uint8_t *)&VAR_9;
 VAR_12.mode = VAR_5;
 VAR_12.datbuf = ((void*)0);

 if (VAR_8 == VAR_4) {
  VAR_9.magic = FUNC_0(VAR_1);
  VAR_9.count = FUNC_1(VAR_7->erase_count);
  VAR_12.ooblen = VAR_3;
  VAR_11 = FUNC_5(VAR_6, VAR_7);
 } else {
  VAR_9.magic = FUNC_0(VAR_2);
  VAR_12.ooblen = sizeof(VAR_9.magic);
  VAR_11 = FUNC_5(VAR_6, VAR_7) + VAR_6->mtd->writesize;
 }

 VAR_10 = FUNC_4(VAR_6->mtd, VAR_11, &VAR_12);

 if (VAR_10) {
  FUNC_2(VAR_6->dev, "Write OOB failed for block at %08llx "
   "error %d\n", VAR_11, VAR_10);
  if (VAR_10 == -VAR_0 || FUNC_3(VAR_10))
   FUNC_6(VAR_6, VAR_7);
  return VAR_10;
 }

 if (VAR_12.oobretlen != VAR_12.ooblen) {
  FUNC_2(VAR_6->dev, "Short OOB write for block at %08llx: "
   "%zd not %zd\n",
   VAR_11, VAR_12.oobretlen, VAR_12.ooblen);
  return VAR_10;
 }

 return 0;
}
