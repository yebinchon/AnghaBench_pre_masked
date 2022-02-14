
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_log_header_host {int dummy; } ;
struct gfs2_jdesc {scalar_t__ jd_replayed_blocks; scalar_t__ jd_found_blocks; } ;



__attribute__((used)) static void FUNC_0(struct gfs2_jdesc *VAR_0,
          struct gfs2_log_header_host *VAR_1, int VAR_2)
{
 if (VAR_2 != 0)
  return;

 VAR_0->jd_found_blocks = 0;
 VAR_0->jd_replayed_blocks = 0;
}
