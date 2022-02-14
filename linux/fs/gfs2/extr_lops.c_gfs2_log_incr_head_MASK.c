
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {scalar_t__ sd_log_flush_head; scalar_t__ sd_log_tail; scalar_t__ sd_log_head; TYPE_1__* sd_jdesc; } ;
struct TYPE_2__ {scalar_t__ jd_blocks; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct gfs2_sbd *VAR_0)
{
 FUNC_0((VAR_0->sd_log_flush_head == VAR_0->sd_log_tail) &&
        (VAR_0->sd_log_flush_head != VAR_0->sd_log_head));

 if (++VAR_0->sd_log_flush_head == VAR_0->sd_jdesc->jd_blocks)
  VAR_0->sd_log_flush_head = 0;
}
