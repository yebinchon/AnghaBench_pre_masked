
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nftl_uci2 {int FoldMark; int FoldMark1; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct NFTLrecord {unsigned int EraseSize; TYPE_1__ mbd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mtd_info*,unsigned int,int,size_t*,char*) ;

__attribute__((used)) static int FUNC_2(struct NFTLrecord *VAR_1, unsigned int VAR_2)
{
 struct mtd_info *VAR_3 = VAR_1->mbd.mtd;
 struct nftl_uci2 VAR_4;
 size_t VAR_5;

 if (FUNC_1(VAR_3, VAR_2 * VAR_1->EraseSize + 2 * VAR_0 + 8,
     8, &VAR_5, (char *)&VAR_4) < 0)
  return 0;

 return FUNC_0((VAR_4.FoldMark | VAR_4.FoldMark1));
}
