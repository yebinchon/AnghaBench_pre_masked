
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NFTLrecord {unsigned int nb_blocks; unsigned int* ReplUnitTable; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct NFTLrecord *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4 = VAR_2;

 for (;;) {
  VAR_3++;


  if (VAR_3 >= VAR_1->nb_blocks) {
   FUNC_0("nftl: length too long %d !\n", VAR_3);
   break;
  }

  VAR_4 = VAR_1->ReplUnitTable[VAR_4];
  if (!(VAR_4 == VAR_0 || VAR_4 < VAR_1->nb_blocks))
   FUNC_0("incorrect ReplUnitTable[] : %d\n", VAR_4);
  if (VAR_4 == VAR_0 || VAR_4 >= VAR_1->nb_blocks)
   break;
 }
 return VAR_3;
}
