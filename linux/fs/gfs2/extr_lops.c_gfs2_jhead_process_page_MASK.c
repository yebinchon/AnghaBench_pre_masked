
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct gfs2_log_header_host {int dummy; } ;
struct gfs2_jdesc {TYPE_1__* jd_inode; } ;
struct TYPE_2__ {int i_mapping; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct gfs2_jdesc*,struct gfs2_log_header_host*,struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct gfs2_jdesc *VAR_0, unsigned long VAR_1,
        struct gfs2_log_header_host *VAR_2,
        bool *VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_1(VAR_0->jd_inode->i_mapping, VAR_1);
 FUNC_4(VAR_4);

 if (FUNC_0(VAR_4))
  *VAR_3 = 1;

 if (!*VAR_3)
  *VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_4);

 FUNC_3(VAR_4);
 FUNC_3(VAR_4);
}
