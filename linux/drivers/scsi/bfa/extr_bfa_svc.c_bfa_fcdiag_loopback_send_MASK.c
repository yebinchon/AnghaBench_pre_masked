
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_diag_lb_req_s {int mh; int pattern; int loopcnt; int speed; int lb_mode; } ;
struct bfa_fcdiag_s {int bfa; } ;
struct bfa_diag_loopback_s {int pattern; int loopcnt; int speed; int lb_mode; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bfi_diag_lb_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct bfa_fcdiag_s*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static bfa_status_t
FUNC_5(struct bfa_fcdiag_s *VAR_5,
   struct bfa_diag_loopback_s *VAR_6)
{
 struct bfi_diag_lb_req_s *VAR_7;

 VAR_7 = FUNC_1(VAR_5->bfa, VAR_0);
 if (!VAR_7)
  return VAR_1;


 FUNC_4(VAR_7->mh, VAR_4, VAR_3,
  FUNC_0(VAR_5->bfa));

 VAR_7->lb_mode = VAR_6->lb_mode;
 VAR_7->speed = VAR_6->speed;
 VAR_7->loopcnt = VAR_6->loopcnt;
 VAR_7->pattern = VAR_6->pattern;


 FUNC_2(VAR_5->bfa, VAR_0, VAR_7->mh);

 FUNC_3(VAR_5, VAR_6->lb_mode);
 FUNC_3(VAR_5, VAR_6->speed);
 FUNC_3(VAR_5, VAR_6->loopcnt);
 FUNC_3(VAR_5, VAR_6->pattern);
 return VAR_2;
}
