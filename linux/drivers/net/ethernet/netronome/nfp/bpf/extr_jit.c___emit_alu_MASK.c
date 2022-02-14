
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct nfp_prog {int dummy; } ;
typedef enum alu_op { ____Placeholder_alu_op } alu_op ;
typedef enum alu_dst_ab { ____Placeholder_alu_dst_ab } alu_dst_ab ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct nfp_prog*,int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_prog *VAR_10, u16 VAR_11, enum alu_dst_ab VAR_12,
    u16 VAR_13, enum alu_op VAR_14, u16 VAR_15, bool VAR_16, bool VAR_17,
    bool VAR_18, bool VAR_19)
{
 u64 VAR_20;

 VAR_20 = VAR_1 |
  FUNC_0(VAR_0, VAR_13) |
  FUNC_0(VAR_2, VAR_15) |
  FUNC_0(VAR_3, VAR_11) |
  FUNC_0(VAR_8, VAR_16) |
  FUNC_0(VAR_6, VAR_14) |
  FUNC_0(VAR_4, VAR_12) |
  FUNC_0(VAR_9, VAR_17) |
  FUNC_0(VAR_7, VAR_19) |
  FUNC_0(VAR_5, VAR_18);

 FUNC_1(VAR_10, VAR_20);
}
