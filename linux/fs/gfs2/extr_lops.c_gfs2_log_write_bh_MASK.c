
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct buffer_head {int b_size; int b_page; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (struct gfs2_sbd*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gfs2_sbd *VAR_0, struct buffer_head *VAR_1)
{
 FUNC_2(VAR_0, VAR_1->b_page, VAR_1->b_size, FUNC_0(VAR_1),
         FUNC_1(VAR_0));
}
