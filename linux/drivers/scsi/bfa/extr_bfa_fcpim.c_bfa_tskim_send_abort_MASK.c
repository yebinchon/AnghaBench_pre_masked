
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_tskim_abortreq_s {int mh; int tsk_tag; } ;
struct bfa_tskim_s {int bfa; int tsk_tag; struct bfa_itnim_s* itnim; } ;
struct bfa_itnim_s {int reqq; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct bfi_tskim_abortreq_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_tskim_s *VAR_4)
{
 struct bfa_itnim_s *VAR_5 = VAR_4->itnim;
 struct bfi_tskim_abortreq_s *VAR_6;




 VAR_6 = FUNC_1(VAR_4->bfa, VAR_5->reqq);
 if (!VAR_6)
  return VAR_0;




 FUNC_3(VAR_6->mh, VAR_2, VAR_3,
   FUNC_0(VAR_4->bfa));

 VAR_6->tsk_tag = FUNC_4(VAR_4->tsk_tag);




 FUNC_2(VAR_4->bfa, VAR_5->reqq, VAR_6->mh);
 return VAR_1;
}
