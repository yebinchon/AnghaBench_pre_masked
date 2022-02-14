
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct nfp_prog {int dummy; } ;
typedef enum br_mask { ____Placeholder_br_mask } br_mask ;
typedef enum br_ev_pip { ____Placeholder_br_ev_pip } br_ev_pip ;
typedef enum br_ctx_signal_state { ____Placeholder_br_ctx_signal_state } br_ctx_signal_state ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfp_prog*,int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_prog *VAR_7, enum br_mask VAR_8, enum br_ev_pip VAR_9,
   enum br_ctx_signal_state VAR_10, u16 VAR_11, u8 VAR_12)
{
 u16 VAR_13, VAR_14;
 u64 VAR_15;

 VAR_13 = VAR_11 & (VAR_1 >> FUNC_1(VAR_1));
 VAR_14 = VAR_11 != VAR_13;

 VAR_15 = VAR_2 |
  FUNC_0(VAR_6, VAR_8) |
  FUNC_0(VAR_5, VAR_9) |
  FUNC_0(VAR_3, VAR_10) |
  FUNC_0(VAR_4, VAR_12) |
  FUNC_0(VAR_1, VAR_13) |
  FUNC_0(VAR_0, VAR_14);

 FUNC_2(VAR_7, VAR_15);
}
