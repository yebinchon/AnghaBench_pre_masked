
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_uf_buf_post_s {int mh; } ;
struct bfa_uf_s {size_t uf_tag; int qe; } ;
struct bfa_uf_mod_s {int uf_posted_q; int bfa; int * uf_buf_posts; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfi_uf_buf_post_s* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct bfi_uf_buf_post_s*,int *,int) ;

__attribute__((used)) static bfa_status_t
FUNC_5(struct bfa_uf_mod_s *VAR_3, struct bfa_uf_s *VAR_4)
{
 struct bfi_uf_buf_post_s *VAR_5;

 VAR_5 = FUNC_0(VAR_3->bfa, VAR_0);
 if (!VAR_5)
  return VAR_1;

 FUNC_4(VAR_5, &VAR_3->uf_buf_posts[VAR_4->uf_tag],
        sizeof(struct bfi_uf_buf_post_s));
 FUNC_1(VAR_3->bfa, VAR_0, VAR_5->mh);

 FUNC_2(VAR_3->bfa, VAR_4->uf_tag);

 FUNC_3(&VAR_4->qe, &VAR_3->uf_posted_q);
 return VAR_2;
}
