
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct long_ad {int dummy; } ;
struct TYPE_4__ {int logicalBlockNum; int partitionReferenceNum; } ;
struct kernel_long_ad {int extLength; TYPE_1__ extLocation; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_6__ {int i_lenExtents; } ;
struct TYPE_5__ {int s_blocksize; int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct kernel_long_ad*,struct kernel_long_ad*,int) ;
 int FUNC_2 (TYPE_2__*,struct inode*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_4, int VAR_5, int VAR_6,
     struct kernel_long_ad *VAR_7,
     int *VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12;

 if (*VAR_8 >= (VAR_5 + 1)) {
  if (!VAR_6)
   return;
  else
   VAR_9 = VAR_5;
 } else {
  if ((VAR_7[VAR_5 + 1].extLength >> 30) ==
     (VAR_0 >> 30)) {
   VAR_9 = VAR_5 + 1;
   VAR_10 = VAR_11 =
    (((VAR_7[VAR_5 + 1].extLength &
     VAR_3) +
    VAR_4->i_sb->s_blocksize - 1) >>
    VAR_4->i_sb->s_blocksize_bits);
  } else
   VAR_9 = VAR_5;
 }

 for (VAR_12 = VAR_9 + 1; VAR_12 <= *VAR_8; VAR_12++) {
  if (VAR_12 == *VAR_8) {
   if (VAR_6)
    VAR_10 += VAR_2;
  } else if ((VAR_7[VAR_12].extLength >> 30) ==
    (VAR_1 >> 30)) {
   VAR_10 += (((VAR_7[VAR_12].extLength &
      VAR_3) +
        VAR_4->i_sb->s_blocksize - 1) >>
        VAR_4->i_sb->s_blocksize_bits);
  } else
   break;
 }

 if (VAR_10) {
  int VAR_13 = VAR_7[VAR_9].extLocation.logicalBlockNum +
   (((VAR_7[VAR_9].extLength & VAR_3) +
     VAR_4->i_sb->s_blocksize - 1) >>
     VAR_4->i_sb->s_blocksize_bits);
  int VAR_14 = FUNC_2(VAR_4->i_sb, VAR_4,
    VAR_7[VAR_9].extLocation.partitionReferenceNum,
    VAR_13, (VAR_2 > VAR_10 ?
    VAR_10 : VAR_2) -
    VAR_11);
  if (VAR_14) {
   if (VAR_9 == (VAR_5 + 1))
    VAR_7[VAR_9].extLength +=
     (VAR_14 <<
      VAR_4->i_sb->s_blocksize_bits);
   else {
    FUNC_1(&VAR_7[VAR_5 + 2], &VAR_7[VAR_5 + 1],
     sizeof(struct long_ad) * (*VAR_8 - (VAR_5 + 1)));
    (*VAR_8)++;
    VAR_7[VAR_5 + 1].extLocation.logicalBlockNum = VAR_13;
    VAR_7[VAR_5 + 1].extLocation.partitionReferenceNum =
     VAR_7[VAR_5].extLocation.
       partitionReferenceNum;
    VAR_7[VAR_5 + 1].extLength =
     VAR_0 |
     (VAR_14 <<
      VAR_4->i_sb->s_blocksize_bits);
    VAR_9 = VAR_5 + 1;
   }

   for (VAR_12 = VAR_9 + 1; VAR_14 && VAR_12 < *VAR_8; VAR_12++) {
    int VAR_15 = ((VAR_7[VAR_12].extLength &
      VAR_3) +
         VAR_4->i_sb->s_blocksize - 1) >>
         VAR_4->i_sb->s_blocksize_bits;

    if (VAR_15 > VAR_14) {
     VAR_7[VAR_12].extLength -=
      (VAR_14 <<
       VAR_4->i_sb->s_blocksize_bits);
     VAR_14 = 0;
    } else {
     VAR_14 -= VAR_15;
     if (*VAR_8 > (VAR_12 + 1))
      FUNC_1(&VAR_7[VAR_12],
       &VAR_7[VAR_12 + 1],
       sizeof(struct long_ad) *
       (*VAR_8 - (VAR_12 + 1)));
     VAR_12--;
     (*VAR_8)--;
    }
   }
   FUNC_0(VAR_4)->i_lenExtents +=
    VAR_14 << VAR_4->i_sb->s_blocksize_bits;
  }
 }
}
