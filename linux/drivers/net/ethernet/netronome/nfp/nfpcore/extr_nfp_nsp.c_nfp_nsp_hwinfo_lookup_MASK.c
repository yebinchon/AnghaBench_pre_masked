
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_nsp*,void*,unsigned int,int) ;
 unsigned int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (void*,unsigned int) ;
 int VAR_2 ;

int FUNC_4(struct nfp_nsp *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_5, VAR_1);

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, 0);
 if (VAR_6)
  return VAR_6;

 if (FUNC_3(VAR_4, VAR_5) == VAR_5) {
  FUNC_2(VAR_3->cpp, "NSP HWinfo value not NULL-terminated\n");
  return -VAR_0;
 }

 return 0;
}
