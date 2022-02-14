
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ocfs2_path {int dummy; } ;
struct ocfs2_merge_ctxt {scalar_t__ c_contig_type; scalar_t__ c_split_covers_rec; scalar_t__ c_has_empty_extent; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct TYPE_7__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,struct ocfs2_path*) ;
 int FUNC_3 (struct ocfs2_extent_rec*) ;
 int FUNC_4 (struct ocfs2_path*,TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_cached_dealloc_ctxt*,int) ;
 int FUNC_5 (struct ocfs2_path*,TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,int) ;
 int FUNC_6 (TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*) ;
 struct ocfs2_extent_list* FUNC_7 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_8(handle_t *VAR_3,
         struct ocfs2_extent_tree *VAR_4,
         struct ocfs2_path *VAR_5,
         int VAR_6,
         struct ocfs2_extent_rec *VAR_7,
         struct ocfs2_cached_dealloc_ctxt *VAR_8,
         struct ocfs2_merge_ctxt *VAR_9)
{
 int VAR_10 = 0;
 struct ocfs2_extent_list *VAR_11 = FUNC_7(VAR_5);
 struct ocfs2_extent_rec *VAR_12 = &VAR_11->l_recs[VAR_6];

 FUNC_0(VAR_9->c_contig_type == VAR_1);

 if (VAR_9->c_split_covers_rec && VAR_9->c_has_empty_extent) {

  VAR_10 = FUNC_2(VAR_3, 0,
    VAR_3->h_buffer_credits,
    VAR_5);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }







  VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }
  VAR_6--;
  VAR_12 = &VAR_11->l_recs[VAR_6];
 }

 if (VAR_9->c_contig_type == VAR_0) {



  FUNC_0(!VAR_9->c_split_covers_rec);
  VAR_10 = FUNC_5(VAR_5, VAR_3, VAR_4, VAR_7,
         VAR_6);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }




  FUNC_0(!FUNC_3(&VAR_11->l_recs[0]));


  VAR_10 = FUNC_2(VAR_3, 0,
     VAR_3->h_buffer_credits,
     VAR_5);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }


  VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }

  VAR_12 = &VAR_11->l_recs[VAR_6];





  VAR_10 = FUNC_4(VAR_5, VAR_3, VAR_4, VAR_12,
        VAR_8, VAR_6);

  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }


  VAR_10 = FUNC_2(VAR_3, 0,
    VAR_3->h_buffer_credits,
    VAR_5);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto out;
  }

  VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_8);




  if (VAR_10)
   FUNC_1(VAR_10);
  VAR_10 = 0;
 } else {







  if (VAR_9->c_contig_type == VAR_2) {
   VAR_10 = FUNC_4(VAR_5, VAR_3, VAR_4,
         VAR_7, VAR_8,
         VAR_6);
   if (VAR_10) {
    FUNC_1(VAR_10);
    goto out;
   }
  } else {
   VAR_10 = FUNC_5(VAR_5, VAR_3,
          VAR_4, VAR_7,
          VAR_6);
   if (VAR_10) {
    FUNC_1(VAR_10);
    goto out;
   }
  }

  if (VAR_9->c_split_covers_rec) {

   VAR_10 = FUNC_2(VAR_3, 0,
     VAR_3->h_buffer_credits,
     VAR_5);
   if (VAR_10) {
    FUNC_1(VAR_10);
    VAR_10 = 0;
    goto out;
   }





   VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_5,
           VAR_8);
   if (VAR_10)
    FUNC_1(VAR_10);
   VAR_10 = 0;
  }
 }

out:
 return VAR_10;
}
