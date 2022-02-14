
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_log_header_host {int dummy; } ;
struct gfs2_log_header {int dummy; } ;
struct gfs2_jdesc {int jd_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct gfs2_sbd* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,struct gfs2_log_header const*,unsigned int,struct gfs2_log_header_host*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_jdesc*,unsigned int,struct buffer_head**) ;

__attribute__((used)) static int FUNC_4(struct gfs2_jdesc *VAR_0, unsigned int VAR_1,
     struct gfs2_log_header_host *VAR_2)
{
 struct gfs2_sbd *VAR_3 = FUNC_0(VAR_0->jd_inode);
 struct buffer_head *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, (const struct gfs2_log_header *)VAR_4->b_data,
     VAR_1, VAR_2);
 FUNC_2(VAR_4);

 return VAR_5;
}
