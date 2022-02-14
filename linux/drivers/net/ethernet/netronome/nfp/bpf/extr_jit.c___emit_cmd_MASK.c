
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct nfp_prog {int dummy; } ;
typedef enum cmd_tgt_map { ____Placeholder_cmd_tgt_map } cmd_tgt_map ;
typedef enum cmd_ctx_swap { ____Placeholder_cmd_ctx_swap } cmd_ctx_swap ;
struct TYPE_2__ {int token; int tgt_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (struct nfp_prog*,int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_prog *VAR_12, enum cmd_tgt_map VAR_13,
    u8 VAR_14, u8 VAR_15, u8 VAR_16, u8 VAR_17, u8 VAR_18, enum cmd_ctx_swap VAR_19,
    bool VAR_20)
{
 u64 VAR_21;

 VAR_21 = FUNC_0(VAR_1, VAR_16) |
  FUNC_0(VAR_4, VAR_19) |
  FUNC_0(VAR_2, VAR_17) |
  FUNC_0(VAR_9, VAR_11[VAR_13].token) |
  FUNC_0(VAR_10, VAR_15) |
  FUNC_0(VAR_3, VAR_18) |
  FUNC_0(VAR_7, VAR_19 != VAR_0) |
  FUNC_0(VAR_8, VAR_11[VAR_13].tgt_cmd) |
  FUNC_0(VAR_5, VAR_20) |
  FUNC_0(VAR_6, VAR_14);

 FUNC_1(VAR_12, VAR_21);
}
