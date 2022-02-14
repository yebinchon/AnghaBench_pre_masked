
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame_header {scalar_t__ ct_explan; int ct_cmd; int ct_reason; int fh_seq_cnt; } ;
struct fc_frame {int dummy; } ;
struct fc_disc {unsigned int seq_count; int disc_mutex; } ;
struct fc_ct_hdr {scalar_t__ ct_explan; int ct_cmd; int ct_reason; int fh_seq_cnt; } ;
typedef enum fc_disc_event { ____Placeholder_fc_disc_event } fc_disc_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fc_frame* FUNC_0 (int) ;
 int FUNC_1 (struct fc_disc*,char*,...) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct fc_disc*,int) ;
 int FUNC_5 (struct fc_disc*,struct fc_frame*) ;
 int FUNC_6 (struct fc_disc*,struct fc_frame_header*,unsigned int) ;
 int FUNC_7 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_8 (struct fc_frame*) ;
 int FUNC_9 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_10 (struct fc_frame*,int) ;
 int FUNC_11 (struct fc_frame*) ;
 int FUNC_12 (struct fc_frame*) ;
 scalar_t__ FUNC_13 (struct fc_frame*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 unsigned int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct fc_seq *VAR_9, struct fc_frame *VAR_10,
    void *VAR_11)
{
 struct fc_disc *VAR_12 = VAR_11;
 struct fc_ct_hdr *VAR_13;
 struct fc_frame_header *VAR_14;
 enum fc_disc_event VAR_15 = VAR_1;
 unsigned int VAR_16;
 unsigned int VAR_17;
 int VAR_18 = 0;

 FUNC_14(&VAR_12->disc_mutex);
 FUNC_1(VAR_12, "Received a GPN_FT response\n");

 if (FUNC_2(VAR_10)) {
  FUNC_5(VAR_12, VAR_10);
  FUNC_15(&VAR_12->disc_mutex);
  return;
 }

 FUNC_3(!FUNC_9(VAR_10));
 VAR_14 = FUNC_8(VAR_10);
 VAR_17 = FUNC_12(VAR_10) - sizeof(*VAR_14);
 VAR_16 = FUNC_16(VAR_14->fh_seq_cnt);
 if (FUNC_13(VAR_10) == VAR_7 && VAR_16 == 0 && VAR_12->seq_count == 0) {
  VAR_13 = FUNC_10(VAR_10, sizeof(*VAR_13));
  if (!VAR_13) {
   FUNC_1(VAR_12, "GPN_FT response too short, len %d\n",
        FUNC_12(VAR_10));
   VAR_15 = VAR_0;
  } else if (FUNC_16(VAR_13->ct_cmd) == VAR_3) {


   VAR_17 -= sizeof(*VAR_13);
   VAR_18 = FUNC_6(VAR_12, VAR_13 + 1, VAR_17);
  } else if (FUNC_16(VAR_13->ct_cmd) == VAR_5) {
   FUNC_1(VAR_12, "GPN_FT rejected reason %x exp %x "
        "(check zoning)\n", VAR_13->ct_reason,
        VAR_13->ct_explan);
   VAR_15 = VAR_0;
   if (VAR_13->ct_reason == VAR_6 &&
       VAR_13->ct_explan == VAR_4)
    VAR_15 = VAR_2;
  } else {
   FUNC_1(VAR_12, "GPN_FT unexpected response code "
        "%x\n", FUNC_16(VAR_13->ct_cmd));
   VAR_15 = VAR_0;
  }
 } else if (FUNC_13(VAR_10) == VAR_8 && VAR_16 == VAR_12->seq_count) {
  VAR_18 = FUNC_6(VAR_12, VAR_14 + 1, VAR_17);
 } else {
  FUNC_1(VAR_12, "GPN_FT unexpected frame - out of sequence? "
       "seq_cnt %x expected %x sof %x eof %x\n",
       VAR_16, VAR_12->seq_count, FUNC_13(VAR_10), FUNC_11(VAR_10));
  VAR_15 = VAR_0;
 }
 if (VAR_18)
  FUNC_5(VAR_12, FUNC_0(VAR_18));
 else if (VAR_15 != VAR_1)
  FUNC_4(VAR_12, VAR_15);
 FUNC_7(VAR_10);
 FUNC_15(&VAR_12->disc_mutex);
}
