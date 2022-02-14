
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_group_desc {int bg_chain; int bg_bits; } ;
struct TYPE_8__ {int i_used; } ;
struct TYPE_9__ {TYPE_3__ bitmap1; } ;
struct ocfs2_chain_list {TYPE_2__* cl_recs; } ;
struct TYPE_6__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {TYPE_4__ id1; TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_10__ {scalar_t__ ip_blkno; } ;
struct TYPE_7__ {int c_free; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int VAR_0 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 unsigned int FUNC_10 (struct ocfs2_chain_list*) ;
 int FUNC_11 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,unsigned int,unsigned int,void (*) (unsigned int,unsigned long*)) ;
 int FUNC_12 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,unsigned int,unsigned int) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_16 (unsigned long long,unsigned long long,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_1,
         struct inode *VAR_2,
         struct buffer_head *VAR_3,
         unsigned int VAR_4,
         u64 VAR_5,
         unsigned int VAR_6,
         void (*VAR_7)(unsigned int VAR_8,
           unsigned long *VAR_9))
{
 int VAR_10 = 0;
 u32 VAR_11;
 struct ocfs2_dinode *VAR_12 = (struct ocfs2_dinode *) VAR_3->b_data;
 struct ocfs2_chain_list *VAR_13 = &VAR_12->id2.i_chain;
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_group_desc *VAR_15;






 FUNC_0(!FUNC_3(VAR_12));
 FUNC_0((VAR_6 + VAR_4) > FUNC_10(VAR_13));

 FUNC_16(
  (unsigned long long)FUNC_2(VAR_2)->ip_blkno,
  (unsigned long long)VAR_5,
  VAR_4, VAR_6);

 VAR_10 = FUNC_15(VAR_2, VAR_12, VAR_5,
          &VAR_14);
 if (VAR_10 < 0) {
  FUNC_9(VAR_10);
  goto bail;
 }
 VAR_15 = (struct ocfs2_group_desc *) VAR_14->b_data;

 FUNC_0((VAR_6 + VAR_4) > FUNC_6(VAR_15->bg_bits));

 VAR_10 = FUNC_11(VAR_1, VAR_2,
           VAR_15, VAR_14,
           VAR_4, VAR_6, VAR_7);
 if (VAR_10 < 0) {
  FUNC_9(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_13(VAR_1, FUNC_1(VAR_2),
      VAR_3, VAR_0);
 if (VAR_10 < 0) {
  FUNC_9(VAR_10);
  FUNC_12(VAR_1, VAR_2, VAR_15, VAR_14,
    VAR_4, VAR_6);
  goto bail;
 }

 FUNC_7(&VAR_13->cl_recs[FUNC_6(VAR_15->bg_chain)].c_free,
       VAR_6);
 VAR_11 = FUNC_8(VAR_12->id1.bitmap1.i_used);
 VAR_12->id1.bitmap1.i_used = FUNC_5(VAR_11 - VAR_6);
 FUNC_14(VAR_1, VAR_3);

bail:
 FUNC_4(VAR_14);

 if (VAR_10)
  FUNC_9(VAR_10);
 return VAR_10;
}
