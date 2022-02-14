
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_rtword_t ;
typedef int xfs_rtblock_t ;
typedef int xfs_mount_t ;
typedef int xfs_extlen_t ;
struct TYPE_4__ {int* b_addr; } ;
typedef TYPE_1__ xfs_buf_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int *,int,int ,TYPE_1__**) ;
 int FUNC_6 (int *,TYPE_1__*) ;

int
FUNC_7(
 xfs_mount_t *VAR_1,
 xfs_trans_t *VAR_2,
 xfs_rtblock_t VAR_3,
 xfs_extlen_t VAR_4,
 int VAR_5,
 xfs_rtblock_t *VAR_6,
 int *VAR_7)
{
 xfs_rtword_t *VAR_8;
 int VAR_9;
 xfs_rtblock_t VAR_10;
 xfs_buf_t *VAR_11;
 xfs_rtword_t *VAR_12;
 int VAR_13;
 xfs_rtblock_t VAR_14;
 xfs_rtblock_t VAR_15;
 xfs_rtword_t VAR_16;
 xfs_rtword_t VAR_17;
 int VAR_18;




 VAR_10 = FUNC_0(VAR_1, VAR_3);



 VAR_13 = FUNC_5(VAR_1, VAR_2, VAR_10, 0, &VAR_11);
 if (VAR_13) {
  return VAR_13;
 }
 VAR_12 = VAR_11->b_addr;



 VAR_18 = FUNC_1(VAR_1, VAR_3);
 VAR_8 = &VAR_12[VAR_18];
 VAR_9 = (int)(VAR_3 & (VAR_0 - 1));



 VAR_5 = -VAR_5;




 if (VAR_9) {



  VAR_15 = FUNC_4(VAR_9 + VAR_4, VAR_0);



  VAR_16 = (((xfs_rtword_t)1 << (VAR_15 - VAR_9)) - 1) << VAR_9;



  if ((VAR_17 = (*VAR_8 ^ VAR_5) & VAR_16)) {



   FUNC_6(VAR_2, VAR_11);
   VAR_14 = FUNC_3(VAR_17) - VAR_9;
   *VAR_6 = VAR_3 + VAR_14;
   *VAR_7 = 0;
   return 0;
  }
  VAR_14 = VAR_15 - VAR_9;




  if (++VAR_18 == FUNC_2(VAR_1) && VAR_14 < VAR_4) {



   FUNC_6(VAR_2, VAR_11);
   VAR_13 = FUNC_5(VAR_1, VAR_2, ++VAR_10, 0, &VAR_11);
   if (VAR_13) {
    return VAR_13;
   }
   VAR_8 = VAR_12 = VAR_11->b_addr;
   VAR_18 = 0;
  } else {



   VAR_8++;
  }
 } else {



  VAR_14 = 0;
 }




 while (VAR_4 - VAR_14 >= VAR_0) {



  if ((VAR_17 = *VAR_8 ^ VAR_5)) {



   FUNC_6(VAR_2, VAR_11);
   VAR_14 += FUNC_3(VAR_17);
   *VAR_6 = VAR_3 + VAR_14;
   *VAR_7 = 0;
   return 0;
  }
  VAR_14 += VAR_0;




  if (++VAR_18 == FUNC_2(VAR_1) && VAR_14 < VAR_4) {



   FUNC_6(VAR_2, VAR_11);
   VAR_13 = FUNC_5(VAR_1, VAR_2, ++VAR_10, 0, &VAR_11);
   if (VAR_13) {
    return VAR_13;
   }
   VAR_8 = VAR_12 = VAR_11->b_addr;
   VAR_18 = 0;
  } else {



   VAR_8++;
  }
 }




 if ((VAR_15 = VAR_4 - VAR_14)) {



  VAR_16 = ((xfs_rtword_t)1 << VAR_15) - 1;



  if ((VAR_17 = (*VAR_8 ^ VAR_5) & VAR_16)) {



   FUNC_6(VAR_2, VAR_11);
   VAR_14 += FUNC_3(VAR_17);
   *VAR_6 = VAR_3 + VAR_14;
   *VAR_7 = 0;
   return 0;
  } else
   VAR_14 = VAR_4;
 }



 FUNC_6(VAR_2, VAR_11);
 *VAR_6 = VAR_3 + VAR_14;
 *VAR_7 = 1;
 return 0;
}
