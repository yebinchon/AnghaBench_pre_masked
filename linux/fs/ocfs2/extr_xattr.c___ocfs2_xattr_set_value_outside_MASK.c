
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ocfs2_xattr_value_root {int xr_list; int xr_clusters; } ;
struct ocfs2_xattr_value_buf {struct ocfs2_xattr_value_root* vb_xv; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_3__ {int s_blocksize; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,void const*,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 void* FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int ,void*,struct buffer_head**,int *) ;
 int FUNC_12 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_2,
        handle_t *VAR_3,
        struct ocfs2_xattr_value_buf *VAR_4,
        const void *VAR_5,
        int VAR_6)
{
 int VAR_7 = 0, VAR_8, VAR_9;
 u16 VAR_10 = VAR_2->i_sb->s_blocksize;
 u32 VAR_11, VAR_12;
 u32 VAR_13 = 0, VAR_14 = FUNC_8(VAR_2->i_sb, 1);
 u32 VAR_15 = FUNC_7(VAR_2->i_sb, VAR_6);
 u64 VAR_16;
 struct buffer_head *VAR_17 = ((void*)0);
 unsigned int VAR_18;
 struct ocfs2_xattr_value_root *VAR_19 = VAR_4->vb_xv;

 FUNC_0(VAR_15 > FUNC_3(VAR_19->xr_clusters));

 while (VAR_13 < VAR_15) {
  VAR_7 = FUNC_12(VAR_2, VAR_13, &VAR_11,
            &VAR_12, &VAR_19->xr_list,
            &VAR_18);
  if (VAR_7) {
   FUNC_6(VAR_7);
   goto out;
  }

  FUNC_0(VAR_18 & VAR_0);

  VAR_16 = FUNC_8(VAR_2->i_sb, VAR_11);

  for (VAR_8 = 0; VAR_8 < VAR_12 * VAR_14; VAR_8++, VAR_16++) {
   VAR_7 = FUNC_11(FUNC_1(VAR_2), VAR_16,
            &VAR_17, ((void*)0));
   if (VAR_7) {
    FUNC_6(VAR_7);
    goto out;
   }

   VAR_7 = FUNC_9(VAR_3,
         FUNC_1(VAR_2),
         VAR_17,
         VAR_1);
   if (VAR_7 < 0) {
    FUNC_6(VAR_7);
    goto out;
   }

   VAR_9 = VAR_6 > VAR_10 ? VAR_10 : VAR_6;
   FUNC_4(VAR_17->b_data, VAR_5, VAR_9);
   VAR_6 -= VAR_9;
   VAR_5 += VAR_9;
   if (VAR_9 < VAR_10)
    FUNC_5(VAR_17->b_data + VAR_9, 0,
           VAR_10 - VAR_9);

   FUNC_10(VAR_3, VAR_17);
   FUNC_2(VAR_17);
   VAR_17 = ((void*)0);





   if (!VAR_6)
    break;
  }
  VAR_13 += VAR_12;
 }
out:
 FUNC_2(VAR_17);

 return VAR_7;
}
