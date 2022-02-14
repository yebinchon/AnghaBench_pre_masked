
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct long_ad {int dummy; } ;
struct TYPE_4__ {unsigned long logicalBlockNum; scalar_t__ partitionReferenceNum; } ;
struct kernel_long_ad {int extLength; TYPE_2__ extLocation; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_3__ {unsigned long s_blocksize; unsigned char s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct kernel_long_ad*,struct kernel_long_ad*,int) ;
 int FUNC_1 (TYPE_1__*,struct inode*,TYPE_2__*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_4, struct kernel_long_ad *VAR_5,
         int *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = VAR_4->i_sb->s_blocksize;
 unsigned char VAR_9 = VAR_4->i_sb->s_blocksize_bits;

 for (VAR_7 = 0; VAR_7 < (*VAR_6 - 1); VAR_7++) {
  struct kernel_long_ad *VAR_10 = &VAR_5[VAR_7];
  struct kernel_long_ad *VAR_11 = &VAR_5[VAR_7 + 1];

  if (((VAR_10->extLength >> 30) == (VAR_11->extLength >> 30)) &&
   (((VAR_10->extLength >> 30) ==
    (VAR_1 >> 30)) ||
   ((VAR_11->extLocation.logicalBlockNum -
     VAR_10->extLocation.logicalBlockNum) ==
   (((VAR_10->extLength & VAR_3) +
   VAR_8 - 1) >> VAR_9)))) {

   if (((VAR_10->extLength & VAR_3) +
    (VAR_11->extLength & VAR_3) +
    VAR_8 - 1) & ~VAR_3) {
    VAR_11->extLength = (VAR_11->extLength -
        (VAR_10->extLength &
         VAR_3) +
         VAR_3) &
       ~(VAR_8 - 1);
    VAR_10->extLength = (VAR_10->extLength &
       VAR_2) +
      (VAR_3 + 1) -
      VAR_8;
    VAR_11->extLocation.logicalBlockNum =
     VAR_10->extLocation.logicalBlockNum +
     ((VAR_10->extLength &
      VAR_3) >>
      VAR_9);
   } else {
    VAR_10->extLength = VAR_11->extLength +
     (((VAR_10->extLength &
      VAR_3) +
      VAR_8 - 1) & ~(VAR_8 - 1));
    if (*VAR_6 > (VAR_7 + 2))
     FUNC_0(&VAR_5[VAR_7 + 1], &VAR_5[VAR_7 + 2],
      sizeof(struct long_ad) *
      (*VAR_6 - (VAR_7 + 2)));
    VAR_7--;
    (*VAR_6)--;
   }
  } else if (((VAR_10->extLength >> 30) ==
    (VAR_0 >> 30)) &&
      ((VAR_11->extLength >> 30) ==
    (VAR_1 >> 30))) {
   FUNC_1(VAR_4->i_sb, VAR_4, &VAR_10->extLocation, 0,
     ((VAR_10->extLength &
       VAR_3) +
      VAR_8 - 1) >> VAR_9);
   VAR_10->extLocation.logicalBlockNum = 0;
   VAR_10->extLocation.partitionReferenceNum = 0;

   if (((VAR_10->extLength & VAR_3) +
        (VAR_11->extLength & VAR_3) +
        VAR_8 - 1) & ~VAR_3) {
    VAR_11->extLength = (VAR_11->extLength -
         (VAR_10->extLength &
         VAR_3) +
         VAR_3) &
         ~(VAR_8 - 1);
    VAR_10->extLength = (VAR_10->extLength &
       VAR_2) +
      (VAR_3 + 1) -
      VAR_8;
   } else {
    VAR_10->extLength = VAR_11->extLength +
     (((VAR_10->extLength &
      VAR_3) +
       VAR_8 - 1) & ~(VAR_8 - 1));
    if (*VAR_6 > (VAR_7 + 2))
     FUNC_0(&VAR_5[VAR_7 + 1], &VAR_5[VAR_7 + 2],
      sizeof(struct long_ad) *
      (*VAR_6 - (VAR_7 + 2)));
    VAR_7--;
    (*VAR_6)--;
   }
  } else if ((VAR_10->extLength >> 30) ==
     (VAR_0 >> 30)) {
   FUNC_1(VAR_4->i_sb, VAR_4,
     &VAR_10->extLocation, 0,
     ((VAR_10->extLength &
      VAR_3) +
      VAR_8 - 1) >> VAR_9);
   VAR_10->extLocation.logicalBlockNum = 0;
   VAR_10->extLocation.partitionReferenceNum = 0;
   VAR_10->extLength = (VAR_10->extLength &
      VAR_3) |
      VAR_1;
  }
 }
}
