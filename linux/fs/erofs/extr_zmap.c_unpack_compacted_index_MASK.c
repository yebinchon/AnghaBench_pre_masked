
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct z_erofs_maprecorder {int clusterofs; unsigned int* delta; scalar_t__ pblk; scalar_t__ type; scalar_t__* kaddr; int inode; } ;
struct erofs_inode {unsigned int z_logical_clusterbits; } ;
typedef int __le32 ;


 int VAR_0 ;
 struct erofs_inode* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (unsigned int const,unsigned int const,scalar_t__*,unsigned int,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct z_erofs_maprecorder *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct erofs_inode *const VAR_5 = FUNC_0(VAR_2->inode);
 const unsigned int VAR_6 = VAR_5->z_logical_clusterbits;
 const unsigned int VAR_7 = (1 << VAR_6) - 1;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 u8 *VAR_14, VAR_15;

 if (1 << VAR_3 == 4)
  VAR_8 = 2;
 else if (1 << VAR_3 == 2 && VAR_6 == 12)
  VAR_8 = 16;
 else
  return -VAR_0;

 VAR_11 = ((VAR_8 << VAR_3) - sizeof(__le32)) * 8 / VAR_8;
 VAR_9 = FUNC_3(VAR_4, VAR_8 << VAR_3);
 VAR_14 = VAR_2->kaddr + VAR_9;

 VAR_13 = (VAR_4 - VAR_9) >> VAR_3;

 VAR_10 = FUNC_1(VAR_6, VAR_7,
      VAR_14, VAR_11 * VAR_13, &VAR_15);
 VAR_2->type = VAR_15;
 if (VAR_15 == VAR_1) {
  VAR_2->clusterofs = 1 << VAR_6;
  if (VAR_13 + 1 != VAR_8) {
   VAR_2->delta[0] = VAR_10;
   return 0;
  }





  VAR_10 = FUNC_1(VAR_6, VAR_7,
       VAR_14, VAR_11 * (VAR_13 - 1), &VAR_15);
  if (VAR_15 != VAR_1)
   VAR_10 = 0;
  VAR_2->delta[0] = VAR_10 + 1;
  return 0;
 }
 VAR_2->clusterofs = VAR_10;
 VAR_2->delta[0] = 0;

 VAR_12 = 1;
 while (VAR_13 > 0) {
  --VAR_13;
  VAR_10 = FUNC_1(VAR_6, VAR_7,
       VAR_14, VAR_11 * VAR_13, &VAR_15);
  if (VAR_15 == VAR_1)
   VAR_13 -= VAR_10;

  if (VAR_13 >= 0)
   ++VAR_12;
 }
 VAR_14 += (VAR_8 << VAR_3) - sizeof(__le32);
 VAR_2->pblk = FUNC_2(*(__le32 *)VAR_14) + VAR_12;
 return 0;
}
