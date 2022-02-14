
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_ll2_stats {int gsi_crcchksm_error; int gsi_unsupported_pkt_typ; int gsi_invalid_pkt_length; int gsi_invalid_hdr; } ;
struct qed_hwfn {int dummy; } ;
struct core_ll2_port_stats {int gsi_crcchksm_error; int gsi_unsupported_pkt_typ; int gsi_invalid_pkt_length; int gsi_invalid_hdr; } ;
typedef int port_stats ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct core_ll2_port_stats*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct core_ll2_port_stats*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_1,
        struct qed_ptt *VAR_2,
        struct qed_ll2_stats *VAR_3)
{
 struct core_ll2_port_stats VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(VAR_1, VAR_2, &VAR_4,
   VAR_0 +
   FUNC_2(FUNC_1(VAR_1)),
   sizeof(VAR_4));

 VAR_3->gsi_invalid_hdr += FUNC_0(VAR_4.gsi_invalid_hdr);
 VAR_3->gsi_invalid_pkt_length +=
     FUNC_0(VAR_4.gsi_invalid_pkt_length);
 VAR_3->gsi_unsupported_pkt_typ +=
     FUNC_0(VAR_4.gsi_unsupported_pkt_typ);
 VAR_3->gsi_crcchksm_error +=
     FUNC_0(VAR_4.gsi_crcchksm_error);
}
