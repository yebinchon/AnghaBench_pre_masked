
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {void* ee_len; int ee_block; } ;
struct ext4_ext_path {size_t p_depth; struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
struct TYPE_2__ {int i_data_sem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (struct ext4_ext_path*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 int FUNC_8 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_9 (struct ext4_extent*) ;
 scalar_t__ FUNC_10 (struct ext4_extent*) ;
 int FUNC_11 (struct ext4_extent*) ;
 scalar_t__ FUNC_12 (struct ext4_ext_path*) ;
 int FUNC_13 (struct ext4_extent*) ;
 int FUNC_14 (struct ext4_extent*,int ) ;
 int FUNC_15 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 struct ext4_ext_path* FUNC_16 (struct inode*,scalar_t__,int *,int ) ;
 int FUNC_17 (int *,struct inode*,struct ext4_ext_path**,scalar_t__,int ) ;
 int FUNC_18 (scalar_t__,scalar_t__,int) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int) ;

int
FUNC_24(handle_t *VAR_2, struct inode *VAR_3,
    struct inode *VAR_4, ext4_lblk_t VAR_5, ext4_lblk_t VAR_6,
    ext4_lblk_t VAR_7, int VAR_8, int *VAR_9)
{
 struct ext4_ext_path *VAR_10 = ((void*)0);
 struct ext4_ext_path *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_0(!FUNC_22(&FUNC_1(VAR_3)->i_data_sem));
 FUNC_0(!FUNC_22(&FUNC_1(VAR_4)->i_data_sem));
 FUNC_0(!FUNC_19(VAR_3));
 FUNC_0(!FUNC_19(VAR_4));

 *VAR_9 = FUNC_5(VAR_3, VAR_5, VAR_7);
 if (FUNC_23(*VAR_9))
  return 0;
 *VAR_9 = FUNC_5(VAR_4, VAR_6, VAR_7);
 if (FUNC_23(*VAR_9))
  return 0;

 while (VAR_7) {
  struct ext4_extent *VAR_13, *VAR_14, VAR_15;
  ext4_lblk_t VAR_16, VAR_17;
  int VAR_18, VAR_19, VAR_20;
  int VAR_21 = 0;

  VAR_10 = FUNC_16(VAR_3, VAR_5, ((void*)0), VAR_0);
  if (FUNC_2(VAR_10)) {
   *VAR_9 = FUNC_3(VAR_10);
   VAR_10 = ((void*)0);
  finish:
   VAR_7 = 0;
   goto repeat;
  }
  VAR_11 = FUNC_16(VAR_4, VAR_6, ((void*)0), VAR_0);
  if (FUNC_2(VAR_11)) {
   *VAR_9 = FUNC_3(VAR_11);
   VAR_11 = ((void*)0);
   goto finish;
  }
  VAR_13 = VAR_10[VAR_10->p_depth].p_ext;
  VAR_14 = VAR_11[VAR_11->p_depth].p_ext;

  if (FUNC_23(!VAR_14 || !VAR_13))
   goto finish;

  VAR_16 = FUNC_21(VAR_13->ee_block);
  VAR_17 = FUNC_21(VAR_14->ee_block);
  VAR_18 = FUNC_9(VAR_13);
  VAR_19 = FUNC_9(VAR_14);


  if (!FUNC_18(VAR_5, VAR_16, VAR_18) ||
      !FUNC_18(VAR_6, VAR_17, VAR_19)) {
   ext4_lblk_t VAR_22, VAR_23;


   VAR_22 = FUNC_12(VAR_10);
   VAR_23 = FUNC_12(VAR_11);

   if (VAR_16 > VAR_5)
    VAR_22 = VAR_16;
   if (VAR_17 > VAR_6)
    VAR_23 = VAR_17;

   if (VAR_22 == VAR_1 || VAR_23 == VAR_1)
    goto finish;

   VAR_20 = VAR_22 - VAR_5;
   if (VAR_20 < VAR_23 - VAR_6)
    VAR_20 = VAR_23 - VAR_6;
   if (VAR_20 > VAR_7)
    VAR_20 = VAR_7;
   VAR_5 += VAR_20;
   VAR_6 += VAR_20;
   VAR_7 -= VAR_20;
   goto repeat;
  }


  if (VAR_16 < VAR_5) {
   VAR_21 = 1;
   *VAR_9 = FUNC_17(VAR_2, VAR_3,
      &VAR_10, VAR_5, 0);
   if (FUNC_23(*VAR_9))
    goto finish;
  }
  if (VAR_17 < VAR_6) {
   VAR_21 = 1;
   *VAR_9 = FUNC_17(VAR_2, VAR_4,
      &VAR_11, VAR_6, 0);
   if (FUNC_23(*VAR_9))
    goto finish;
  }


  if (VAR_21)
   goto repeat;


  VAR_20 = VAR_7;
  if (VAR_20 > VAR_16 + VAR_18 - VAR_5)
   VAR_20 = VAR_16 + VAR_18 - VAR_5;
  if (VAR_20 > VAR_17 + VAR_19 - VAR_6)
   VAR_20 = VAR_17 + VAR_19 - VAR_6;

  if (VAR_20 != VAR_18) {
   VAR_21 = 1;
   *VAR_9 = FUNC_17(VAR_2, VAR_3,
      &VAR_10, VAR_5 + VAR_20, 0);
   if (FUNC_23(*VAR_9))
    goto finish;
  }
  if (VAR_20 != VAR_19) {
   VAR_21 = 1;
   *VAR_9 = FUNC_17(VAR_2, VAR_4,
      &VAR_11, VAR_6 + VAR_20, 0);
   if (*VAR_9)
    goto finish;
  }


  if (VAR_21)
   goto repeat;

  FUNC_0(VAR_19 != VAR_18);
  *VAR_9 = FUNC_8(VAR_2, VAR_3, VAR_10 + VAR_10->p_depth);
  if (FUNC_23(*VAR_9))
   goto finish;
  *VAR_9 = FUNC_8(VAR_2, VAR_4, VAR_11 + VAR_11->p_depth);
  if (FUNC_23(*VAR_9))
   goto finish;


  VAR_15 = *VAR_13;
  FUNC_14(VAR_13, FUNC_13(VAR_14));
  FUNC_14(VAR_14, FUNC_13(&VAR_15));
  VAR_13->ee_len = FUNC_4(VAR_19);
  VAR_14->ee_len = FUNC_4(VAR_18);
  if (VAR_8)
   FUNC_11(VAR_14);
  if (FUNC_10(&VAR_15))
   FUNC_11(VAR_13);

  FUNC_15(VAR_2, VAR_4, VAR_11, VAR_14);
  FUNC_15(VAR_2, VAR_3, VAR_10, VAR_13);
  *VAR_9 = FUNC_6(VAR_2, VAR_4, VAR_11 +
          VAR_11->p_depth);
  if (FUNC_23(*VAR_9))
   goto finish;
  *VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_10 +
          VAR_10->p_depth);






  if (FUNC_23(*VAR_9))
   goto finish;
  VAR_5 += VAR_20;
  VAR_6 += VAR_20;
  VAR_12 += VAR_20;
  VAR_7 -= VAR_20;

 repeat:
  FUNC_7(VAR_10);
  FUNC_20(VAR_10);
  FUNC_7(VAR_11);
  FUNC_20(VAR_11);
  VAR_10 = VAR_11 = ((void*)0);
 }
 return VAR_12;
}
