
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct bfi_phy_write_rsp_s {int status; } ;
struct bfi_phy_stats_rsp_s {int status; } ;
struct bfi_phy_read_rsp_s {int length; int status; } ;
struct bfi_phy_query_rsp_s {int status; } ;
struct TYPE_2__ {int msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfa_phy_stats_s {int status; } ;
struct bfa_phy_s {int ubuf; int status; int residue; int offset; int cbarg; int (* cbfn ) (int ,int) ;int op_busy; scalar_t__ dbuf_kva; } ;
struct bfa_phy_attr_s {int status; int length; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct bfa_phy_s*) ;
 int FUNC_5 (struct bfa_phy_s*) ;
 int FUNC_6 (struct bfa_phy_s*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;

void
FUNC_12(void *VAR_1, struct bfi_mbmsg_s *VAR_2)
{
 struct bfa_phy_s *VAR_3 = VAR_1;
 u32 VAR_4;

 union {
  struct bfi_phy_query_rsp_s *query;
  struct bfi_phy_stats_rsp_s *stats;
  struct bfi_phy_write_rsp_s *write;
  struct bfi_phy_read_rsp_s *read;
  struct bfi_mbmsg_s *msg;
 } VAR_5;

 VAR_5.msg = VAR_2;
 FUNC_6(VAR_3, VAR_2->mh.msg_id);

 if (!VAR_3->op_busy) {

  FUNC_6(VAR_3, 0x9999);
  return;
 }

 switch (VAR_2->mh.msg_id) {
 case 131:
  VAR_4 = FUNC_2(VAR_5.query->status);
  FUNC_6(VAR_3, VAR_4);

  if (VAR_4 == VAR_0) {
   struct bfa_phy_attr_s *VAR_6 =
    (struct bfa_phy_attr_s *) VAR_3->ubuf;
   FUNC_3((u32 *)VAR_6, (u32 *)VAR_3->dbuf_kva,
     sizeof(struct bfa_phy_attr_s));
   FUNC_6(VAR_3, VAR_6->status);
   FUNC_6(VAR_3, VAR_6->length);
  }

  VAR_3->status = VAR_4;
  VAR_3->op_busy = 0;
  if (VAR_3->cbfn)
   VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_5.stats->status);
  FUNC_6(VAR_3, VAR_4);

  if (VAR_4 == VAR_0) {
   struct bfa_phy_stats_s *VAR_7 =
    (struct bfa_phy_stats_s *) VAR_3->ubuf;
   FUNC_3((u32 *)VAR_7, (u32 *)VAR_3->dbuf_kva,
    sizeof(struct bfa_phy_stats_s));
   FUNC_6(VAR_3, VAR_7->status);
  }

  VAR_3->status = VAR_4;
  VAR_3->op_busy = 0;
  if (VAR_3->cbfn)
   VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_5.write->status);
  FUNC_6(VAR_3, VAR_4);

  if (VAR_4 != VAR_0 || VAR_3->residue == 0) {
   VAR_3->status = VAR_4;
   VAR_3->op_busy = 0;
   if (VAR_3->cbfn)
    VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
  } else {
   FUNC_6(VAR_3, VAR_3->offset);
   FUNC_5(VAR_3);
  }
  break;
 case 130:
  VAR_4 = FUNC_2(VAR_5.read->status);
  FUNC_6(VAR_3, VAR_4);

  if (VAR_4 != VAR_0) {
   VAR_3->status = VAR_4;
   VAR_3->op_busy = 0;
   if (VAR_3->cbfn)
    VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
  } else {
   u32 VAR_8 = FUNC_2(VAR_5.read->length);
   u16 *VAR_9 = (u16 *)(VAR_3->ubuf + VAR_3->offset);
   u16 *VAR_10 = (u16 *)VAR_3->dbuf_kva;
   int VAR_11, VAR_12 = VAR_8 >> 1;

   FUNC_6(VAR_3, VAR_3->offset);
   FUNC_6(VAR_3, VAR_8);

   for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    VAR_9[VAR_11] = FUNC_1(VAR_10[VAR_11]);

   VAR_3->residue -= VAR_8;
   VAR_3->offset += VAR_8;

   if (VAR_3->residue == 0) {
    VAR_3->status = VAR_4;
    VAR_3->op_busy = 0;
    if (VAR_3->cbfn)
     VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
   } else
    FUNC_4(VAR_3);
  }
  break;
 default:
  FUNC_0(1);
 }
}
