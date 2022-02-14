
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct nfp_prog {int error; } ;
typedef enum shf_sc { ____Placeholder_shf_sc } shf_sc ;
typedef enum shf_op { ____Placeholder_shf_op } shf_op ;
typedef enum alu_dst_ab { ____Placeholder_alu_dst_ab } alu_dst_ab ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct nfp_prog*,int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_prog *VAR_15, u16 VAR_16, enum alu_dst_ab VAR_17,
    enum shf_sc VAR_18, u8 VAR_19,
    u16 VAR_20, enum shf_op VAR_21, u16 VAR_22, bool VAR_23, bool VAR_24, bool VAR_25,
    bool VAR_26, bool VAR_27)
{
 u64 VAR_28;

 if (!FUNC_0(VAR_10, VAR_19)) {
  VAR_15->error = -VAR_0;
  return;
 }
 if (VAR_18 == VAR_14 && VAR_19)
  VAR_19 = 32 - VAR_19;

 VAR_28 = VAR_2 |
  FUNC_1(VAR_1, VAR_20) |
  FUNC_1(VAR_9, VAR_18) |
  FUNC_1(VAR_3, VAR_22) |
  FUNC_1(VAR_7, VAR_23) |
  FUNC_1(VAR_12, VAR_24) |
  FUNC_1(VAR_4, VAR_16) |
  FUNC_1(VAR_10, VAR_19) |
  FUNC_1(VAR_8, VAR_21) |
  FUNC_1(VAR_5, VAR_17) |
  FUNC_1(VAR_13, VAR_25) |
  FUNC_1(VAR_11, VAR_27) |
  FUNC_1(VAR_6, VAR_26);

 FUNC_2(VAR_15, VAR_28);
}
