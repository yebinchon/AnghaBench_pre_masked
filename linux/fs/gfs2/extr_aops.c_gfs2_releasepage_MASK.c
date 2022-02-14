
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct gfs2_sbd {int sd_ail_lock; } ;
struct gfs2_bufdata {struct buffer_head* bd_bh; int bd_list; scalar_t__ bd_tr; } ;
struct buffer_head {struct buffer_head* b_this_page; struct gfs2_bufdata* b_private; int b_count; } ;
struct address_space {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_sbd*,int) ;
 int VAR_0 ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_sbd*) ;
 struct gfs2_sbd* FUNC_7 (struct address_space*) ;
 int FUNC_8 (int ,struct gfs2_bufdata*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct buffer_head* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct page*) ;

int FUNC_16(struct page *VAR_1, gfp_t VAR_2)
{
 struct address_space *VAR_3 = VAR_1->mapping;
 struct gfs2_sbd *VAR_4 = FUNC_7(VAR_3);
 struct buffer_head *VAR_5, *VAR_6;
 struct gfs2_bufdata *VAR_7;

 if (!FUNC_12(VAR_1))
  return 0;
 FUNC_5(VAR_4);
 FUNC_13(&VAR_4->sd_ail_lock);
 VAR_6 = VAR_5 = FUNC_11(VAR_1);
 do {
  if (FUNC_1(&VAR_5->b_count))
   goto cannot_release;
  VAR_7 = VAR_5->b_private;
  if (VAR_7 && VAR_7->bd_tr)
   goto cannot_release;
  if (FUNC_2(VAR_5) || FUNC_0(FUNC_3(VAR_5)))
   goto cannot_release;
  VAR_5 = VAR_5->b_this_page;
 } while(VAR_5 != VAR_6);
 FUNC_14(&VAR_4->sd_ail_lock);

 VAR_6 = VAR_5 = FUNC_11(VAR_1);
 do {
  VAR_7 = VAR_5->b_private;
  if (VAR_7) {
   FUNC_4(VAR_4, VAR_7->bd_bh == VAR_5);
   if (!FUNC_10(&VAR_7->bd_list))
    FUNC_9(&VAR_7->bd_list);
   VAR_7->bd_bh = ((void*)0);
   VAR_5->b_private = ((void*)0);
   FUNC_8(VAR_0, VAR_7);
  }

  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5 != VAR_6);
 FUNC_6(VAR_4);

 return FUNC_15(VAR_1);

cannot_release:
 FUNC_14(&VAR_4->sd_ail_lock);
 FUNC_6(VAR_4);
 return 0;
}
