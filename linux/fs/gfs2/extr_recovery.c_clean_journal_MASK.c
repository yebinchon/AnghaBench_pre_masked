
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ ls_jid; } ;
struct gfs2_sbd {int sd_log_flush_head; TYPE_1__ sd_lockstruct; } ;
struct gfs2_log_header_host {scalar_t__ lh_sequence; int lh_blkno; } ;
struct gfs2_jdesc {scalar_t__ jd_jid; int jd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gfs2_jdesc*,int *) ;
 int FUNC_2 (struct gfs2_sbd*,struct gfs2_jdesc*,scalar_t__,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct gfs2_jdesc *VAR_6,
     struct gfs2_log_header_host *VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(VAR_6->jd_inode);
 u32 VAR_9 = VAR_7->lh_blkno;

 FUNC_1(VAR_6, &VAR_9);
 if (VAR_6->jd_jid == VAR_8->sd_lockstruct.ls_jid)
  VAR_8->sd_log_flush_head = VAR_9;
 FUNC_2(VAR_8, VAR_6, VAR_7->lh_sequence + 1, 0, VAR_9,
         VAR_1 | VAR_0,
         VAR_4 | VAR_2 | VAR_3 | VAR_5);
}
