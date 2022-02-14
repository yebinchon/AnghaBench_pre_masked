
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_iwarp_fpdu {int fpdu_length; scalar_t__ incomplete_bytes; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_iwarp_mpa_pkt_type { ____Placeholder_qed_iwarp_mpa_pkt_type } qed_iwarp_mpa_pkt_type ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int * VAR_5 ;

__attribute__((used)) static enum qed_iwarp_mpa_pkt_type
FUNC_3(struct qed_hwfn *VAR_6,
         struct qed_iwarp_fpdu *VAR_7,
         u16 VAR_8, u8 *VAR_9)
{
 enum qed_iwarp_mpa_pkt_type VAR_10;
 u16 VAR_11;

 if (VAR_7->incomplete_bytes) {
  VAR_10 = VAR_3;
  goto out;
 }




 if (VAR_8 == 1) {
  VAR_7->fpdu_length = *VAR_9 << VAR_0;
  VAR_10 = VAR_2;
  goto out;
 }

 VAR_11 = FUNC_2(*((u16 *)(VAR_9)));
 VAR_7->fpdu_length = FUNC_1(VAR_11);

 if (VAR_7->fpdu_length <= VAR_8)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_2;

out:
 FUNC_0(VAR_6, VAR_4,
     "MPA_ALIGN: %s: fpdu_length=0x%x tcp_payload_len:0x%x\n",
     VAR_5[VAR_10], VAR_7->fpdu_length, VAR_8);

 return VAR_10;
}
