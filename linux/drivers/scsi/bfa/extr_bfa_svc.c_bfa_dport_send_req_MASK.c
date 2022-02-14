
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_diag_dport_req_s {int req; int mh; void* payload; void* lpcnt; } ;
struct bfa_dport_s {int bfa; int payload; int lpcnt; int reqq_wait; } ;
typedef enum bfi_dport_req { ____Placeholder_bfi_dport_req } bfi_dport_req ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct bfi_diag_dport_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_6(struct bfa_dport_s *VAR_8, enum bfi_dport_req VAR_9)
{
 struct bfi_diag_dport_req_s *VAR_10;




 VAR_10 = FUNC_1(VAR_8->bfa, VAR_1);
 if (!VAR_10) {
  FUNC_3(VAR_8->bfa, VAR_2, &VAR_8->reqq_wait);
  return VAR_0;
 }

 FUNC_4(VAR_10->mh, VAR_7, VAR_4,
      FUNC_0(VAR_8->bfa));
 VAR_10->req = VAR_9;
 if ((VAR_9 == VAR_5) || (VAR_9 == VAR_6)) {
  VAR_10->lpcnt = FUNC_5(VAR_8->lpcnt);
  VAR_10->payload = FUNC_5(VAR_8->payload);
 }




 FUNC_2(VAR_8->bfa, VAR_1, VAR_10->mh);

 return VAR_3;
}
