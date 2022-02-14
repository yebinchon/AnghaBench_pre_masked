
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; int p_hdr; TYPE_1__* p_idx; struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef enum SHIFT_DIRECTION { ____Placeholder_SHIFT_DIRECTION } SHIFT_DIRECTION ;
struct TYPE_2__ {int ei_block; } ;


 int VAR_0 ;
 struct ext4_extent* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 struct ext4_extent* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (int *,struct inode*,struct ext4_ext_path*) ;
 scalar_t__ FUNC_5 (struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct ext4_ext_path *VAR_2, ext4_lblk_t VAR_3,
       struct inode *VAR_4, handle_t *VAR_5,
       enum SHIFT_DIRECTION VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct ext4_extent *VAR_9, *VAR_10;
 bool VAR_11 = 0;
 VAR_7 = VAR_2->p_depth;

 while (VAR_7 >= 0) {
  if (VAR_7 == VAR_2->p_depth) {
   VAR_9 = VAR_2[VAR_7].p_ext;
   if (!VAR_9)
    return -VAR_0;

   VAR_10 = FUNC_2(VAR_2[VAR_7].p_hdr);

   VAR_8 = FUNC_3(VAR_5, VAR_4, VAR_2 + VAR_7);
   if (VAR_8)
    goto out;

   if (VAR_9 == FUNC_0(VAR_2[VAR_7].p_hdr))
    VAR_11 = 1;

   while (VAR_9 <= VAR_10) {
    if (VAR_6 == VAR_1) {
     FUNC_6(&VAR_9->ee_block,
      -VAR_3);

     if ((VAR_9 >
         FUNC_0(VAR_2[VAR_7].p_hdr))
         &&
         FUNC_5(VAR_4,
         VAR_2, VAR_9 - 1))
      VAR_10--;
     else
      VAR_9++;
    } else {
     FUNC_6(&VAR_10->ee_block, VAR_3);
     FUNC_5(VAR_4, VAR_2,
      VAR_10);
     VAR_10--;
    }
   }
   VAR_8 = FUNC_4(VAR_5, VAR_4, VAR_2 + VAR_7);
   if (VAR_8)
    goto out;

   if (--VAR_7 < 0 || !VAR_11)
    break;
  }


  VAR_8 = FUNC_3(VAR_5, VAR_4, VAR_2 + VAR_7);
  if (VAR_8)
   goto out;

  if (VAR_6 == VAR_1)
   FUNC_6(&VAR_2[VAR_7].p_idx->ei_block, -VAR_3);
  else
   FUNC_6(&VAR_2[VAR_7].p_idx->ei_block, VAR_3);
  VAR_8 = FUNC_4(VAR_5, VAR_4, VAR_2 + VAR_7);
  if (VAR_8)
   goto out;


  if (VAR_2[VAR_7].p_idx != FUNC_1(VAR_2[VAR_7].p_hdr))
   break;

  VAR_7--;
 }

out:
 return VAR_8;
}
