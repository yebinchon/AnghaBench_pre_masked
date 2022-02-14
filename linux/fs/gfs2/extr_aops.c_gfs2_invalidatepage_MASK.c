
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct gfs2_sbd {int dummy; } ;
struct buffer_head {unsigned long b_size; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 struct gfs2_sbd* FUNC_2 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct gfs2_sbd*,struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_2(VAR_1->mapping->host);
 unsigned int VAR_5 = VAR_2 + VAR_3;
 int VAR_6 = (VAR_2 || VAR_3 < VAR_0);
 struct buffer_head *VAR_7, *VAR_8;
 unsigned long VAR_9 = 0;

 FUNC_0(!FUNC_3(VAR_1));
 if (!VAR_6)
  FUNC_1(VAR_1);
 if (!FUNC_6(VAR_1))
  goto out;

 VAR_7 = VAR_8 = FUNC_5(VAR_1);
 do {
  if (VAR_9 + VAR_7->b_size > VAR_5)
   return;

  if (VAR_2 <= VAR_9)
   FUNC_4(VAR_4, VAR_7);
  VAR_9 += VAR_7->b_size;
  VAR_7 = VAR_7->b_this_page;
 } while (VAR_7 != VAR_8);
out:
 if (!VAR_6)
  FUNC_7(VAR_1, 0);
}
