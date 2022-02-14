
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct nfp_prog {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfp_prog*,int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_prog *VAR_8, u16 VAR_9, u16 VAR_10, u16 VAR_11, u8 VAR_12,
       bool VAR_13, bool VAR_14)
{
 u16 VAR_15, VAR_16;
 u64 VAR_17;

 VAR_15 = VAR_11 & (VAR_1 >> FUNC_1(VAR_1));
 VAR_16 = VAR_11 != VAR_15;

 VAR_17 = VAR_3 |
  FUNC_0(VAR_2, VAR_9) |
  FUNC_0(VAR_5, VAR_10) |
  FUNC_0(VAR_4, VAR_13) |
  FUNC_0(VAR_6, VAR_12) |
  FUNC_0(VAR_1, VAR_15) |
  FUNC_0(VAR_0, VAR_16) |
  FUNC_0(VAR_7, VAR_14);

 FUNC_2(VAR_8, VAR_17);
}
