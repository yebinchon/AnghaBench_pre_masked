
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nftl_uci1 {int EraseMark; int EraseMark1; unsigned int WearInfo; } ;
struct mtd_info {int dummy; } ;
struct erase_info {int addr; int len; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct NFTLrecord {int EraseSize; TYPE_1__ mbd; struct erase_info instr; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct NFTLrecord*,int,int,int) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct erase_info*,int ,int) ;
 int FUNC_6 (struct mtd_info*,int) ;
 scalar_t__ FUNC_7 (struct mtd_info*,struct erase_info*) ;
 scalar_t__ FUNC_8 (struct mtd_info*,scalar_t__,int,size_t*,char*) ;
 scalar_t__ FUNC_9 (struct mtd_info*,scalar_t__,int,size_t*,char*) ;
 int FUNC_10 (char*,int) ;

int FUNC_11(struct NFTLrecord *VAR_2, int VAR_3)
{
 size_t VAR_4;
 unsigned int VAR_5, VAR_6;
 struct nftl_uci1 VAR_7;
 struct erase_info *VAR_8 = &VAR_2->instr;
 struct mtd_info *VAR_9 = VAR_2->mbd.mtd;


 if (FUNC_8(VAR_9, VAR_3 * VAR_2->EraseSize + VAR_1 + 8,
     8, &VAR_4, (char *)&VAR_7) < 0)
  goto default_uci1;

 VAR_6 = FUNC_3 ((VAR_7.EraseMark | VAR_7.EraseMark1));
 if (VAR_6 != VAR_0) {
 default_uci1:
  VAR_7.EraseMark = FUNC_1(VAR_0);
  VAR_7.EraseMark1 = FUNC_1(VAR_0);
  VAR_7.WearInfo = FUNC_2(0);
 }

 FUNC_5(VAR_8, 0, sizeof(struct erase_info));


 VAR_8->addr = VAR_3 * VAR_2->EraseSize;
 VAR_8->len = VAR_2->EraseSize;
 if (FUNC_7(VAR_9, VAR_8)) {
  FUNC_10("Error while formatting block %d\n", VAR_3);
  goto fail;
 }


 VAR_5 = FUNC_4(VAR_7.WearInfo);
 VAR_5++;


 if (VAR_5 == 0)
  VAR_5 = 1;





 if (FUNC_0(VAR_2, VAR_8->addr, VAR_2->EraseSize, 1) != 0)
  goto fail;

 VAR_7.WearInfo = FUNC_4(VAR_5);
 if (FUNC_9(VAR_9, VAR_3 * VAR_2->EraseSize + VAR_1 +
      8, 8, &VAR_4, (char *)&VAR_7) < 0)
  goto fail;
 return 0;
fail:


 FUNC_6(VAR_2->mbd.mtd, VAR_8->addr);
 return -1;
}
