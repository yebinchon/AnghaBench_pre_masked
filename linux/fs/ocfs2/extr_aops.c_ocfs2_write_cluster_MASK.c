
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_write_ctxt {int w_num_pages; int ** w_pages; int w_dealloc; int w_handle; int w_di_bh; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_5__ {scalar_t__ ip_blkno; } ;
struct TYPE_4__ {int s_blocksize_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,unsigned long long,int) ;
 int FUNC_5 (int,char*,unsigned long long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,struct inode*,int*,int,int,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,int *) ;
 void* FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct inode*,int,int*,int *,int *) ;
 int FUNC_10 (struct ocfs2_extent_tree*,int ,int ) ;
 int FUNC_11 (struct inode*,struct ocfs2_extent_tree*,int ,int,int,int,struct ocfs2_alloc_context*,int *) ;
 int FUNC_12 (struct inode*,int*,struct ocfs2_write_ctxt*,int *,int,int,unsigned int,unsigned int) ;
 int FUNC_13 (struct inode*,struct ocfs2_write_ctxt*,int,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct address_space *VAR_2,
          u32 *VAR_3, unsigned int VAR_4,
          unsigned int VAR_5,
          unsigned int VAR_6,
          struct ocfs2_alloc_context *VAR_7,
          struct ocfs2_alloc_context *VAR_8,
          struct ocfs2_write_ctxt *VAR_9, u32 VAR_10,
          loff_t VAR_11, unsigned VAR_12)
{
 int VAR_13, VAR_14;
 u64 VAR_15;
 struct inode *VAR_16 = VAR_2->host;
 struct ocfs2_extent_tree VAR_17;
 int VAR_18 = FUNC_8(VAR_16->i_sb, 1);

 if (VAR_4) {
  u32 VAR_19;





  VAR_19 = VAR_10;
  VAR_13 = FUNC_7(FUNC_3(VAR_16->i_sb), VAR_16,
        &VAR_19, 1, !VAR_5,
        VAR_9->w_di_bh, VAR_9->w_handle,
        VAR_7, VAR_8, ((void*)0));
  FUNC_5(VAR_13 == -VAR_0,
    "Inode %llu: EAGAIN return during allocation.\n",
    (unsigned long long)FUNC_2(VAR_16)->ip_blkno);
  if (VAR_13 < 0) {
   FUNC_6(VAR_13);
   goto out;
  }
 } else if (VAR_5) {
  FUNC_10(&VAR_17, FUNC_1(VAR_16),
           VAR_9->w_di_bh);
  VAR_13 = FUNC_11(VAR_16, &VAR_17,
      VAR_9->w_handle, VAR_10, 1, *VAR_3,
      VAR_8, &VAR_9->w_dealloc);
  if (VAR_13 < 0) {
   FUNC_6(VAR_13);
   goto out;
  }
 }





 VAR_13 = FUNC_9(VAR_16, VAR_10, VAR_3, ((void*)0), ((void*)0));
 if (VAR_13 < 0) {
  FUNC_4(VAR_1, "Get physical blkno failed for inode %llu, "
       "at logical cluster %u",
       (unsigned long long)FUNC_2(VAR_16)->ip_blkno, VAR_10);
  goto out;
 }

 FUNC_0(*VAR_3 == 0);

 VAR_15 = FUNC_8(VAR_16->i_sb, *VAR_3);
 if (!VAR_6)
  VAR_15 += (VAR_11 >> VAR_16->i_sb->s_blocksize_bits) & (u64)(VAR_18 - 1);

 for(VAR_14 = 0; VAR_14 < VAR_9->w_num_pages; VAR_14++) {
  int VAR_20;


  if (VAR_9->w_pages[VAR_14] == ((void*)0)) {
   VAR_15++;
   continue;
  }

  VAR_20 = FUNC_12(VAR_16, &VAR_15, VAR_9,
            VAR_9->w_pages[VAR_14], VAR_10,
            VAR_11, VAR_12,
            VAR_6);
  if (VAR_20) {
   FUNC_6(VAR_20);
   if (VAR_13 == 0)
    VAR_13 = VAR_20;
  }
 }




 if (VAR_13 && VAR_4)
  FUNC_13(VAR_16, VAR_9, VAR_11, VAR_12);

out:

 return VAR_13;
}
