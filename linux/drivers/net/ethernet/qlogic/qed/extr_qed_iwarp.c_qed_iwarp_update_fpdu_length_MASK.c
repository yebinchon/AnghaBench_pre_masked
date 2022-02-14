
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_iwarp_fpdu {int fpdu_length; int mpa_frag_len; int incomplete_bytes; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_2,
        struct qed_iwarp_fpdu *VAR_3, u8 *VAR_4)
{
 u16 VAR_5;


 if (VAR_3->incomplete_bytes == VAR_0) {

  VAR_5 = VAR_3->fpdu_length | *VAR_4;
  VAR_3->fpdu_length = FUNC_1(VAR_5);

  VAR_3->mpa_frag_len = 1;
  VAR_3->incomplete_bytes = VAR_3->fpdu_length - 1;
  FUNC_0(VAR_2,
      VAR_1,
      "MPA_ALIGN: Partial header mpa_len=%x fpdu_length=%x incomplete_bytes=%x\n",
      VAR_5, VAR_3->fpdu_length, VAR_3->incomplete_bytes);
 }
}
