
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent* p_ext; int p_hdr; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
typedef enum SHIFT_DIRECTION { ____Placeholder_SHIFT_DIRECTION } SHIFT_DIRECTION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,char*,unsigned long) ;
 int VAR_2 ;
 struct ext4_extent* FUNC_1 (int ) ;
 struct ext4_extent* FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct ext4_ext_path*) ;
 int FUNC_4 (struct ext4_ext_path*) ;
 int VAR_4 ;
 int FUNC_5 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_6 (struct ext4_extent*) ;
 scalar_t__ FUNC_7 (struct ext4_ext_path*) ;
 int FUNC_8 (struct ext4_ext_path*,scalar_t__,struct inode*,int *,int) ;
 struct ext4_ext_path* FUNC_9 (struct inode*,scalar_t__,struct ext4_ext_path**,int ) ;
 int FUNC_10 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_5, handle_t *VAR_6,
         ext4_lblk_t VAR_7, ext4_lblk_t VAR_8,
         enum SHIFT_DIRECTION VAR_9)
{
 struct ext4_ext_path *VAR_10;
 int VAR_11 = 0, VAR_12;
 struct ext4_extent *VAR_13;
 ext4_lblk_t VAR_14, *VAR_15, VAR_16, VAR_17;


 VAR_10 = FUNC_9(VAR_5, VAR_3 - 1, ((void*)0),
    VAR_2);
 if (FUNC_3(VAR_10))
  return FUNC_4(VAR_10);

 VAR_12 = VAR_10->p_depth;
 VAR_13 = VAR_10[VAR_12].p_ext;
 if (!VAR_13)
  goto out;

 VAR_14 = FUNC_11(VAR_13->ee_block);






 if (VAR_9 == VAR_4) {
  VAR_10 = FUNC_9(VAR_5, VAR_7 - 1, &VAR_10,
     VAR_2);
  if (FUNC_3(VAR_10))
   return FUNC_4(VAR_10);
  VAR_12 = VAR_10->p_depth;
  VAR_13 = VAR_10[VAR_12].p_ext;
  if (VAR_13) {
   VAR_16 = FUNC_11(VAR_13->ee_block);
   VAR_17 = FUNC_11(VAR_13->ee_block) +
    FUNC_6(VAR_13);
  } else {
   VAR_16 = 0;
   VAR_17 = 0;
  }

  if ((VAR_7 == VAR_16 && VAR_8 > VAR_16) ||
      (VAR_8 > VAR_7 - VAR_17)) {
   VAR_11 = -VAR_1;
   goto out;
  }
 } else {
  if (VAR_8 > VAR_3 -
      (VAR_14 + FUNC_6(VAR_13))) {
   VAR_11 = -VAR_1;
   goto out;
  }
 }






 if (VAR_9 == VAR_4)
  VAR_15 = &VAR_7;
 else
  VAR_15 = &VAR_14;






 while (VAR_15 && VAR_7 <= VAR_14) {
  VAR_10 = FUNC_9(VAR_5, *VAR_15, &VAR_10,
     VAR_2);
  if (FUNC_3(VAR_10))
   return FUNC_4(VAR_10);
  VAR_12 = VAR_10->p_depth;
  VAR_13 = VAR_10[VAR_12].p_ext;
  if (!VAR_13) {
   FUNC_0(VAR_5, "unexpected hole at %lu",
      (unsigned long) *VAR_15);
   return -VAR_0;
  }
  if (VAR_9 == VAR_4 && *VAR_15 >
      FUNC_11(VAR_13->ee_block)) {

   if (VAR_13 < FUNC_2(VAR_10[VAR_12].p_hdr)) {
    VAR_10[VAR_12].p_ext++;
   } else {
    *VAR_15 = FUNC_7(VAR_10);
    continue;
   }
  }

  if (VAR_9 == VAR_4) {
   VAR_13 = FUNC_2(VAR_10[VAR_12].p_hdr);
   *VAR_15 = FUNC_11(VAR_13->ee_block) +
     FUNC_6(VAR_13);
  } else {
   VAR_13 = FUNC_1(VAR_10[VAR_12].p_hdr);
   if (FUNC_11(VAR_13->ee_block) > 0)
    *VAR_15 = FUNC_11(VAR_13->ee_block) - 1;
   else

    VAR_15 = ((void*)0);

   while (FUNC_11(VAR_13->ee_block) < VAR_7)
    VAR_13++;
   VAR_10[VAR_12].p_ext = VAR_13;
  }
  VAR_11 = FUNC_8(VAR_10, VAR_8, VAR_5,
    VAR_6, VAR_9);
  if (VAR_11)
   break;
 }
out:
 FUNC_5(VAR_10);
 FUNC_10(VAR_10);
 return VAR_11;
}
