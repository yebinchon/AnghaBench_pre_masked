
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct page {int dummy; } ;
struct TYPE_4__ {unsigned int sb_bsize_shift; int sb_bsize; } ;
struct address_space {int dummy; } ;
struct gfs2_sbd {int sd_vfs; TYPE_2__ sd_sb; struct address_space sd_aspace; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_name; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct page*,int ,int ) ;
 struct page* FUNC_2 (struct address_space*,unsigned long,int) ;
 int FUNC_3 (struct buffer_head*) ;
 struct address_space* FUNC_4 (struct gfs2_glock*) ;
 struct page* FUNC_5 (struct address_space*,unsigned long) ;
 int FUNC_6 (struct buffer_head*,int ,unsigned int) ;
 struct buffer_head* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 () ;

struct buffer_head *FUNC_12(struct gfs2_glock *VAR_3, u64 VAR_4, int VAR_5)
{
 struct address_space *VAR_6 = FUNC_4(VAR_3);
 struct gfs2_sbd *VAR_7 = VAR_3->gl_name.ln_sbd;
 struct page *VAR_8;
 struct buffer_head *VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12;

 if (VAR_6 == ((void*)0))
  VAR_6 = &VAR_7->sd_aspace;

 VAR_10 = VAR_2 - VAR_7->sd_sb.sb_bsize_shift;
 VAR_11 = VAR_4 >> VAR_10;
 VAR_12 = VAR_4 - (VAR_11 << VAR_10);

 if (VAR_5) {
  for (;;) {
   VAR_8 = FUNC_5(VAR_6, VAR_11);
   if (VAR_8)
    break;
   FUNC_11();
  }
 } else {
  VAR_8 = FUNC_2(VAR_6, VAR_11,
      VAR_1|VAR_0);
  if (!VAR_8)
   return ((void*)0);
 }

 if (!FUNC_8(VAR_8))
  FUNC_1(VAR_8, VAR_7->sd_sb.sb_bsize, 0);


 for (VAR_9 = FUNC_7(VAR_8); VAR_12--; VAR_9 = VAR_9->b_this_page)
                  ;
 FUNC_3(VAR_9);

 if (!FUNC_0(VAR_9))
  FUNC_6(VAR_9, VAR_7->sd_vfs, VAR_4);

 FUNC_10(VAR_8);
 FUNC_9(VAR_8);

 return VAR_9;
}
