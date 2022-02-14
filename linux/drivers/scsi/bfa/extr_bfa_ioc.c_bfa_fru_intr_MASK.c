
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfi_fru_rsp_s {int length; int status; } ;
struct bfa_fru_s {int residue; int status; int offset; int ubuf; int cbarg; int (* cbfn ) (int ,int) ;int op_busy; int dbuf_kva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fru_s*,int ) ;
 int FUNC_3 (struct bfa_fru_s*,int ) ;
 int FUNC_4 (struct bfa_fru_s*,int) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

void
FUNC_9(void *VAR_5, struct bfi_mbmsg_s *VAR_6)
{
 struct bfa_fru_s *VAR_7 = VAR_5;
 struct bfi_fru_rsp_s *VAR_8 = (struct bfi_fru_rsp_s *)VAR_6;
 u32 VAR_9;

 FUNC_4(VAR_7, VAR_6->mh.msg_id);

 if (!VAR_7->op_busy) {



  FUNC_4(VAR_7, 0x9999);
  return;
 }

 switch (VAR_6->mh.msg_id) {
 case 130:
 case 128:
  VAR_9 = FUNC_1(VAR_8->status);
  FUNC_4(VAR_7, VAR_9);

  if (VAR_9 != VAR_0 || VAR_7->residue == 0) {
   VAR_7->status = VAR_9;
   VAR_7->op_busy = 0;
   if (VAR_7->cbfn)
    VAR_7->cbfn(VAR_7->cbarg, VAR_7->status);
  } else {
   FUNC_4(VAR_7, VAR_7->offset);
   if (VAR_6->mh.msg_id == 130)
    FUNC_3(VAR_7,
     VAR_2);
   else
    FUNC_3(VAR_7,
     VAR_4);
  }
  break;
 case 131:
 case 129:
  VAR_9 = FUNC_1(VAR_8->status);
  FUNC_4(VAR_7, VAR_9);

  if (VAR_9 != VAR_0) {
   VAR_7->status = VAR_9;
   VAR_7->op_busy = 0;
   if (VAR_7->cbfn)
    VAR_7->cbfn(VAR_7->cbarg, VAR_7->status);
  } else {
   u32 VAR_10 = FUNC_1(VAR_8->length);

   FUNC_4(VAR_7, VAR_7->offset);
   FUNC_4(VAR_7, VAR_10);

   FUNC_5(VAR_7->ubuf + VAR_7->offset, VAR_7->dbuf_kva, VAR_10);
   VAR_7->residue -= VAR_10;
   VAR_7->offset += VAR_10;

   if (VAR_7->residue == 0) {
    VAR_7->status = VAR_9;
    VAR_7->op_busy = 0;
    if (VAR_7->cbfn)
     VAR_7->cbfn(VAR_7->cbarg, VAR_7->status);
   } else {
    if (VAR_6->mh.msg_id == 131)
     FUNC_2(VAR_7,
      VAR_1);
    else
     FUNC_2(VAR_7,
      VAR_3);
   }
  }
  break;
 default:
  FUNC_0(1);
 }
}
