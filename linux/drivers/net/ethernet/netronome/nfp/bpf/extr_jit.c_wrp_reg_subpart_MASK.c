
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
typedef enum shf_sc { ____Placeholder_shf_sc } shf_sc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int ,int,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nfp_prog *VAR_2, swreg VAR_3, swreg VAR_4, u8 VAR_5,
  u8 VAR_6)
{
 enum shf_sc VAR_7 = VAR_6 ? VAR_1 : VAR_0;
 u8 VAR_8 = (1 << VAR_5) - 1;

 FUNC_0(VAR_2, VAR_3, VAR_8, VAR_4, VAR_7, VAR_6 * 8, 1);
}
