
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sfp_mem_s {int dummy; } ;
struct bfi_sfp_rsp_s {int status; int state; } ;
struct bfi_mbmsg_s {int dummy; } ;
struct bfa_sfp_s {int lock; int data_valid; scalar_t__ state; scalar_t__ status; int memtype; int state_query_lock; int dbuf_kva; scalar_t__ sfpmem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bfa_sfp_s*) ;
 int FUNC_1 (struct bfa_sfp_s*) ;
 int FUNC_2 (struct bfa_sfp_s*,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_sfp_s *VAR_5, struct bfi_mbmsg_s *VAR_6)
{
 struct bfi_sfp_rsp_s *VAR_7 = (struct bfi_sfp_rsp_s *) VAR_6;

 if (!VAR_5->lock) {



  FUNC_2(VAR_5, VAR_5->lock);
  return;
 }

 FUNC_2(VAR_5, VAR_7->status);
 if (VAR_7->status == VAR_2) {
  VAR_5->data_valid = 1;
  if (VAR_5->state == VAR_1)
   VAR_5->status = VAR_2;
  else if (VAR_5->state == VAR_0)
   VAR_5->status = VAR_3;
  else
   FUNC_2(VAR_5, VAR_5->state);
 } else {
  VAR_5->data_valid = 0;
  VAR_5->status = VAR_7->status;

 }

 FUNC_2(VAR_5, VAR_5->memtype);
 if (VAR_5->memtype == VAR_4) {
  FUNC_2(VAR_5, VAR_5->data_valid);
  if (VAR_5->data_valid) {
   u32 VAR_8 = sizeof(struct sfp_mem_s);
   u8 *VAR_9 = (u8 *)(VAR_5->sfpmem);
   FUNC_3(VAR_9, VAR_5->dbuf_kva, VAR_8);
  }



  FUNC_0(VAR_5);
 } else
  VAR_5->lock = 0;

 FUNC_2(VAR_5, VAR_5->state_query_lock);
 if (VAR_5->state_query_lock) {
  VAR_5->state = VAR_7->state;

  FUNC_1(VAR_5);
 }
}
