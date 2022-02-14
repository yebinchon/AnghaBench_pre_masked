
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
typedef int uint ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *,int,int ,TYPE_1__**) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int ) ;

int
FUNC_6(
 xfs_mount_t *VAR_1,
 xfs_trans_t *VAR_2,
 xfs_rtblock_t VAR_3,
 xfs_extlen_t VAR_4,
 int VAR_5)
{
 xfs_rtword_t *VAR_6;
 int VAR_7;
 xfs_rtblock_t VAR_8;
 xfs_buf_t *VAR_9;
 xfs_rtword_t *VAR_10;
 int VAR_11;
 xfs_rtword_t *VAR_12;
 int VAR_13;
 int VAR_14;
 xfs_rtword_t VAR_15;
 int VAR_16;




 VAR_8 = FUNC_0(VAR_1, VAR_3);



 VAR_11 = FUNC_4(VAR_1, VAR_2, VAR_8, 0, &VAR_9);
 if (VAR_11) {
  return VAR_11;
 }
 VAR_10 = VAR_9->b_addr;



 VAR_16 = FUNC_1(VAR_1, VAR_3);
 VAR_12 = VAR_6 = &VAR_10[VAR_16];
 VAR_7 = (int)(VAR_3 & (VAR_0 - 1));



 VAR_5 = -VAR_5;




 if (VAR_7) {



  VAR_14 = FUNC_3(VAR_7 + VAR_4, VAR_0);
  VAR_15 = (((xfs_rtword_t)1 << (VAR_14 - VAR_7)) - 1) << VAR_7;



  if (VAR_5)
   *VAR_6 |= VAR_15;
  else
   *VAR_6 &= ~VAR_15;
  VAR_13 = VAR_14 - VAR_7;




  if (++VAR_16 == FUNC_2(VAR_1) && VAR_13 < VAR_4) {




   FUNC_5(VAR_2, VAR_9,
    (uint)((char *)VAR_12 - (char *)VAR_10),
    (uint)((char *)VAR_6 - (char *)VAR_10));
   VAR_11 = FUNC_4(VAR_1, VAR_2, ++VAR_8, 0, &VAR_9);
   if (VAR_11) {
    return VAR_11;
   }
   VAR_12 = VAR_6 = VAR_10 = VAR_9->b_addr;
   VAR_16 = 0;
  } else {



   VAR_6++;
  }
 } else {



  VAR_13 = 0;
 }




 while (VAR_4 - VAR_13 >= VAR_0) {



  *VAR_6 = VAR_5;
  VAR_13 += VAR_0;




  if (++VAR_16 == FUNC_2(VAR_1) && VAR_13 < VAR_4) {




   FUNC_5(VAR_2, VAR_9,
    (uint)((char *)VAR_12 - (char *)VAR_10),
    (uint)((char *)VAR_6 - (char *)VAR_10));
   VAR_11 = FUNC_4(VAR_1, VAR_2, ++VAR_8, 0, &VAR_9);
   if (VAR_11) {
    return VAR_11;
   }
   VAR_12 = VAR_6 = VAR_10 = VAR_9->b_addr;
   VAR_16 = 0;
  } else {



   VAR_6++;
  }
 }




 if ((VAR_14 = VAR_4 - VAR_13)) {



  VAR_15 = ((xfs_rtword_t)1 << VAR_14) - 1;



  if (VAR_5)
   *VAR_6 |= VAR_15;
  else
   *VAR_6 &= ~VAR_15;
  VAR_6++;
 }



 if (VAR_6 > VAR_12)
  FUNC_5(VAR_2, VAR_9, (uint)((char *)VAR_12 - (char *)VAR_10),
   (uint)((char *)VAR_6 - (char *)VAR_10 - 1));
 return 0;
}
