
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_extent_rec {int e_flags; int e_cpos; scalar_t__ e_leaf_clusters; } ;
struct ocfs2_extent_list {scalar_t__ l_next_free_rec; struct ocfs2_extent_rec* l_recs; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; scalar_t__ h_next_leaf_blk; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,char*,int ,int) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 unsigned int FUNC_9 (int ,unsigned int,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ,unsigned long long) ;
 int FUNC_12 (int ,struct ocfs2_extent_list*,unsigned int,struct buffer_head**) ;
 scalar_t__ FUNC_13 (struct ocfs2_extent_rec*) ;
 int FUNC_14 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_1,
        struct ocfs2_extent_list *VAR_2,
        u32 VAR_3,
        u32 VAR_4,
        u32 VAR_5,
        u32 *VAR_6,
        u32 *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = FUNC_3(VAR_2->l_tree_depth), VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_extent_block *VAR_12 = ((void*)0);
 struct ocfs2_extent_rec *VAR_13;
 unsigned int VAR_14, VAR_15 = 0;
 int VAR_16 = FUNC_10(VAR_1->i_sb);
 int VAR_17;

 FUNC_0(VAR_3 + VAR_4 > VAR_5);

 if (VAR_9 > 0) {
  VAR_8 = FUNC_12(FUNC_1(VAR_1), VAR_2, VAR_3, &VAR_11);
  if (VAR_8) {
   FUNC_7(VAR_8);
   goto out;
  }

  VAR_12 = (struct ocfs2_extent_block *) VAR_11->b_data;
  VAR_2 = &VAR_12->h_list;

  if (VAR_2->l_tree_depth) {
   VAR_8 = FUNC_11(VAR_1->i_sb,
       "Inode %lu has non zero tree depth in leaf block %llu\n",
       VAR_1->i_ino,
       (unsigned long long)VAR_11->b_blocknr);
   goto out;
  }
 }

 *VAR_7 = 0;
 for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_2->l_next_free_rec); VAR_10++) {
  VAR_13 = &VAR_2->l_recs[VAR_10];

  if (FUNC_13(VAR_13)) {
   FUNC_6(VAR_10 != 0, "Inode %lu has empty record in "
     "index %d\n", VAR_1->i_ino, VAR_10);
   continue;
  }

  if (FUNC_4(VAR_13->e_cpos) +
      FUNC_3(VAR_13->e_leaf_clusters) <= VAR_3)
   continue;

  if (*VAR_7 == 0) {




   FUNC_0(!(VAR_13->e_flags & VAR_0));
   *VAR_6 = FUNC_4(VAR_13->e_cpos);
  }





  if ((!(VAR_13->e_flags & VAR_0)) ||
      (*VAR_7 && VAR_15 != FUNC_4(VAR_13->e_cpos)) ||
      (VAR_5 <= FUNC_4(VAR_13->e_cpos)))
   break;

  VAR_17 = FUNC_3(VAR_13->e_leaf_clusters);
  VAR_15 = FUNC_4(VAR_13->e_cpos) + VAR_17;
  if (VAR_15 > VAR_5) {
   VAR_15 = VAR_5;
   VAR_17 = VAR_15 - FUNC_4(VAR_13->e_cpos);
  }







  if (!*VAR_7)
   VAR_14 = VAR_4;
  else
   VAR_14 = (VAR_3 + VAR_4) -
    (*VAR_6 + *VAR_7);
  if (VAR_14 < VAR_16)
   VAR_14 = VAR_16;
  if (VAR_17 <= VAR_16)
   *VAR_7 += VAR_17;
  else if (*VAR_7 || (*VAR_6 == VAR_3)) {







   VAR_14 = FUNC_8(VAR_1->i_sb,
              VAR_14);

   if (VAR_17 < VAR_14)
    *VAR_7 += VAR_17;
   else
    *VAR_7 += VAR_14;
  } else if ((*VAR_6 + VAR_16) >=
      (VAR_3 + VAR_4)) {





   *VAR_7 = VAR_16;
  } else if ((VAR_15 - VAR_3) <= VAR_16) {




   *VAR_6 = VAR_15 - VAR_16;
   *VAR_7 = VAR_16;
  } else if ((VAR_15 - VAR_3) <= VAR_14) {
   *VAR_6 = FUNC_9(VAR_1->i_sb,
          *VAR_6, VAR_3);
   *VAR_7 = VAR_15 - *VAR_6;
  } else {
   *VAR_6 = FUNC_9(VAR_1->i_sb,
          *VAR_6, VAR_3);

   VAR_14 = (VAR_3 + VAR_4) - *VAR_6;
   VAR_14 = FUNC_8(VAR_1->i_sb,
              VAR_14);
   if (*VAR_6 + VAR_14 <= VAR_15)
    *VAR_7 = VAR_14;
   else
    *VAR_7 = VAR_15 - *VAR_6;
  }


  if ((*VAR_6 + *VAR_7) >= (VAR_3 + VAR_4))
   break;





  if (VAR_10 + 1 == FUNC_3(VAR_2->l_next_free_rec) &&
      VAR_12 && VAR_12->h_next_leaf_blk) {
   FUNC_2(VAR_11);
   VAR_11 = ((void*)0);

   VAR_8 = FUNC_14(FUNC_1(VAR_1),
            FUNC_5(VAR_12->h_next_leaf_blk),
            &VAR_11);
   if (VAR_8) {
    FUNC_7(VAR_8);
    goto out;
   }

   VAR_12 = (struct ocfs2_extent_block *) VAR_11->b_data;
   VAR_2 = &VAR_12->h_list;
   VAR_10 = -1;
  }
 }

out:
 FUNC_2(VAR_11);
 return VAR_8;
}
