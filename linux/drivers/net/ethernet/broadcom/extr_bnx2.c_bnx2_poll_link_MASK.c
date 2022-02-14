
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct status_block {int status_attn_bits; int status_attn_bits_ack; } ;
struct TYPE_2__ {struct status_block* msi; } ;
struct bnx2_napi {TYPE_1__ status_blk; } ;
struct bnx2 {int hc_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2*,struct bnx2_napi*) ;

__attribute__((used)) static void FUNC_3(struct bnx2 *VAR_3, struct bnx2_napi *VAR_4)
{
 struct status_block *VAR_5 = VAR_4->status_blk.msi;
 u32 VAR_6 = VAR_5->status_attn_bits;
 u32 VAR_7 = VAR_5->status_attn_bits_ack;

 if ((VAR_6 & VAR_2) !=
     (VAR_7 & VAR_2)) {

  FUNC_2(VAR_3, VAR_4);




  FUNC_1(VAR_3, VAR_0,
   VAR_3->hc_cmd | VAR_1);
  FUNC_0(VAR_3, VAR_0);
 }
}
