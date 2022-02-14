
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bfi_diag_qtest_req_s {int mh; int * data; } ;
struct TYPE_2__ {int queue; } ;
struct bfa_fcdiag_s {TYPE_1__ qtest; int bfa; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct bfi_diag_qtest_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct bfa_fcdiag_s*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static bfa_status_t
FUNC_5(struct bfa_fcdiag_s *VAR_6)
{
 u32 VAR_7;
 struct bfi_diag_qtest_req_s *VAR_8;

 VAR_8 = FUNC_1(VAR_6->bfa, VAR_6->qtest.queue);
 if (!VAR_8)
  return VAR_0;


 FUNC_4(VAR_8->mh, VAR_4, VAR_2,
  FUNC_0(VAR_6->bfa));

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_8->data[VAR_7] = VAR_5;

 FUNC_3(VAR_6, VAR_6->qtest.queue);

 FUNC_2(VAR_6->bfa, VAR_6->qtest.queue, VAR_8->mh);
 return VAR_1;
}
