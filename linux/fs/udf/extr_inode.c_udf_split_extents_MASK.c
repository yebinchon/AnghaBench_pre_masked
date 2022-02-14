
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ udf_pblk_t ;
struct TYPE_7__ {scalar_t__ logicalBlockNum; scalar_t__ partitionReferenceNum; } ;
struct kernel_long_ad {int extLength; TYPE_3__ extLocation; } ;
struct inode {TYPE_2__* i_sb; } ;
typedef int int8_t ;
struct TYPE_5__ {scalar_t__ partitionReferenceNum; } ;
struct TYPE_8__ {TYPE_1__ i_location; } ;
struct TYPE_6__ {unsigned long s_blocksize; unsigned char s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_2__*,struct inode*,TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_4, int *VAR_5, int VAR_6,
          udf_pblk_t VAR_7,
          struct kernel_long_ad *VAR_8, int *VAR_9)
{
 unsigned long VAR_10 = VAR_4->i_sb->s_blocksize;
 unsigned char VAR_11 = VAR_4->i_sb->s_blocksize_bits;

 if ((VAR_8[*VAR_5].extLength >> 30) == (VAR_0 >> 30) ||
     (VAR_8[*VAR_5].extLength >> 30) ==
    (VAR_1 >> 30)) {
  int VAR_12 = *VAR_5;
  int VAR_13 = ((VAR_8[VAR_12].extLength & VAR_3) +
       VAR_10 - 1) >> VAR_11;
  int8_t VAR_14 = (VAR_8[VAR_12].extLength >> 30);

  if (VAR_13 == 1)
   ;
  else if (!VAR_6 || VAR_13 == VAR_6 + 1) {
   VAR_8[VAR_12 + 2] = VAR_8[VAR_12 + 1];
   VAR_8[VAR_12 + 1] = VAR_8[VAR_12];
  } else {
   VAR_8[VAR_12 + 3] = VAR_8[VAR_12 + 1];
   VAR_8[VAR_12 + 2] = VAR_8[VAR_12 + 1] = VAR_8[VAR_12];
  }

  if (VAR_6) {
   if (VAR_14 == (VAR_0 >> 30)) {
    FUNC_1(VAR_4->i_sb, VAR_4,
      &VAR_8[VAR_12].extLocation,
      0, VAR_6);
    VAR_8[VAR_12].extLength =
     VAR_1 |
     (VAR_6 << VAR_11);
    VAR_8[VAR_12].extLocation.logicalBlockNum = 0;
    VAR_8[VAR_12].extLocation.
      partitionReferenceNum = 0;
   } else
    VAR_8[VAR_12].extLength = (VAR_14 << 30) |
     (VAR_6 << VAR_11);
   VAR_12++;
   (*VAR_5)++;
   (*VAR_9)++;
  }

  VAR_8[VAR_12].extLocation.logicalBlockNum = VAR_7;
  if (VAR_14 == (VAR_1 >> 30))
   VAR_8[VAR_12].extLocation.partitionReferenceNum =
    FUNC_0(VAR_4)->i_location.partitionReferenceNum;
  VAR_8[VAR_12].extLength = VAR_2 |
   VAR_10;
  VAR_12++;

  if (VAR_13 != VAR_6 + 1) {
   if (VAR_14 == (VAR_0 >> 30))
    VAR_8[VAR_12].extLocation.logicalBlockNum +=
        VAR_6 + 1;
   VAR_8[VAR_12].extLength = (VAR_14 << 30) |
    ((VAR_13 - (VAR_6 + 1)) << VAR_11);
   VAR_12++;
   (*VAR_9)++;
  }
 }
}
