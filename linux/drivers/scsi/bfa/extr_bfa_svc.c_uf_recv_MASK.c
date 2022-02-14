
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
typedef size_t u16 ;
struct fchs_s {int dummy; } ;
struct bfi_uf_frm_rcvd_s {size_t buf_tag; int frm_len; int xfr_len; } ;
struct bfa_uf_s {int data_len; int hcb_qe; int * data_ptr; int qe; int pb_len; } ;
struct bfa_uf_mod_s {struct bfa_uf_s* uf_list; } ;
struct bfa_uf_buf_s {int * d; } ;
struct bfa_s {scalar_t__ fcs; int plog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_uf_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_uf_s*,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct bfa_s*,int *,int (*) (struct bfa_uf_s*,int ),struct bfa_uf_s*) ;
 scalar_t__ FUNC_5 (struct bfa_uf_mod_s*,size_t,int ) ;
 int FUNC_6 (int ,int ,int ,int,struct fchs_s*) ;
 int FUNC_7 (int ,int ,int ,int,struct fchs_s*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bfa_s *VAR_3, struct bfi_uf_frm_rcvd_s *VAR_4)
{
 struct bfa_uf_mod_s *VAR_5 = FUNC_0(VAR_3);
 u16 VAR_6 = VAR_4->buf_tag;
 struct bfa_uf_s *VAR_7 = &VAR_5->uf_list[VAR_6];
 struct bfa_uf_buf_s *VAR_8;
 uint8_t *VAR_9;
 struct fchs_s *VAR_10;

 VAR_8 = (struct bfa_uf_buf_s *)
   FUNC_5(VAR_5, VAR_6, VAR_7->pb_len);
 VAR_9 = &VAR_8->d[0];

 VAR_4->frm_len = FUNC_3(VAR_4->frm_len);
 VAR_4->xfr_len = FUNC_3(VAR_4->xfr_len);

 VAR_10 = (struct fchs_s *)VAR_8;

 FUNC_8(&VAR_7->qe);

 VAR_7->data_ptr = VAR_9;
 VAR_7->data_len = VAR_4->xfr_len;

 FUNC_1(VAR_7->data_len < sizeof(struct fchs_s));

 if (VAR_7->data_len == sizeof(struct fchs_s)) {
  FUNC_6(VAR_3->plog, VAR_1, VAR_0,
          VAR_7->data_len, (struct fchs_s *)VAR_9);
 } else {
  u32 VAR_11 = *((u32 *) (VAR_9 + sizeof(struct fchs_s)));
  FUNC_7(VAR_3->plog, VAR_1,
          VAR_0, VAR_7->data_len,
          (struct fchs_s *)VAR_9, VAR_11);
 }

 if (VAR_3->fcs)
  FUNC_2(VAR_7, VAR_2);
 else
  FUNC_4(VAR_3, &VAR_7->hcb_qe, FUNC_2, VAR_7);
}
