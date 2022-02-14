
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_cmd_info {int state; int uas_tag; } ;
struct scsi_cmnd {int SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,struct scsi_cmnd*,char*,char const*,int,int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct scsi_cmnd *VAR_13, const char *VAR_14,
         int VAR_15)
{
 struct uas_cmd_info *VAR_16 = (void *)&VAR_13->SCp;
 struct uas_cmd_info *VAR_17 = (void *)&VAR_13->SCp;

 FUNC_0(VAR_8, VAR_13,
      "%s %d uas-tag %d inflight:%s%s%s%s%s%s%s%s%s%s%s%s ",
      VAR_14, VAR_15, VAR_17->uas_tag,
      (VAR_16->state & VAR_12) ? " s-st" : "",
      (VAR_16->state & VAR_1) ? " a-in" : "",
      (VAR_16->state & VAR_10) ? " s-in" : "",
      (VAR_16->state & VAR_2) ? " a-out" : "",
      (VAR_16->state & VAR_11) ? " s-out" : "",
      (VAR_16->state & VAR_0) ? " a-cmd" : "",
      (VAR_16->state & VAR_9) ? " s-cmd" : "",
      (VAR_16->state & VAR_4) ? " CMD" : "",
      (VAR_16->state & VAR_5) ? " IN" : "",
      (VAR_16->state & VAR_6) ? " OUT" : "",
      (VAR_16->state & VAR_3) ? " abort" : "",
      (VAR_16->state & VAR_7) ? " work" : "");
 FUNC_1(VAR_13);
}
