
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ,int ,unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct nfp_prog *VAR_3, u8 VAR_4, swreg VAR_5,
      u8 VAR_6, u8 VAR_7)
{
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 * 4 < VAR_7; VAR_8++)
  FUNC_3(VAR_3, FUNC_2(VAR_8), FUNC_1(VAR_6 + VAR_8));

 FUNC_0(VAR_3, VAR_2, VAR_1, 0,
   FUNC_1(VAR_4), VAR_5, VAR_7 - 1, VAR_0);

 return 0;
}
