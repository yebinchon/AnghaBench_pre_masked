
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nftl_uci1 {int EraseMark; int EraseMark1; int WearInfo; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct NFTLrecord {int EraseSize; TYPE_1__ mbd; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (struct NFTLrecord*,int,int,int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int,int) ;
 scalar_t__ FUNC_5 (struct mtd_info*,int,int,size_t*,char*) ;
 scalar_t__ FUNC_6 (struct mtd_info*,int,int,size_t*,char*) ;

__attribute__((used)) static int FUNC_7(struct NFTLrecord *VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = VAR_4->mbd.mtd;
 struct nftl_uci1 VAR_7;
 unsigned int VAR_8;
 size_t VAR_9;


 if (FUNC_5(VAR_6, VAR_5 * VAR_4->EraseSize + VAR_1 + 8, 8,
     &VAR_9, (char *)&VAR_7) < 0)
  return -1;

 VAR_8 = FUNC_3 ((VAR_7 | VAR_7));
 if (VAR_8 != VAR_0) {


  if (FUNC_0 (VAR_4, VAR_5 * VAR_4->EraseSize, VAR_4->EraseSize, 1) != 0)
   return -1;


  VAR_7 = FUNC_1(VAR_0);
  VAR_7 = FUNC_1(VAR_0);
  VAR_7 = FUNC_2(0);
  if (FUNC_6(VAR_6,
       VAR_5 * VAR_4->EraseSize + VAR_1 + 8, 8,
       &VAR_9, (char *)&VAR_7) < 0)
   return -1;
 } else {
 }

 return 0;
}
