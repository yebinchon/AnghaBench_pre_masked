
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swreg ;
struct nfp_prog {int error; } ;
typedef enum shf_sc { ____Placeholder_shf_sc } shf_sc ;
typedef enum shf_op { ____Placeholder_shf_op } shf_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int ,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct nfp_prog *VAR_2, swreg VAR_3,
        swreg VAR_4, enum shf_op VAR_5, swreg VAR_6, enum shf_sc VAR_7)
{
 if (VAR_7 == VAR_1) {
  FUNC_1("indirect shift is not allowed on rotation\n");
  VAR_2->error = -VAR_0;
  return;
 }

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 0);
}
