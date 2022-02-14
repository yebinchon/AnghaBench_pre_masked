
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_nsp*,void*,unsigned int,int) ;
 unsigned int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct nfp_nsp*) ;
 int FUNC_4 (void*,char const*) ;
 unsigned int FUNC_5 (void*,unsigned int) ;
 int VAR_3 ;

int FUNC_6(struct nfp_nsp *VAR_4, void *VAR_5,
       unsigned int VAR_6, const char *VAR_7)
{
 int VAR_8;




 if (FUNC_5(VAR_7, VAR_6) == VAR_6)
  return -VAR_0;

 if (!FUNC_3(VAR_4)) {
  FUNC_4(VAR_5, VAR_7);
  return 0;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_6, VAR_2);

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, 1);
 if (VAR_8) {
  if (VAR_8 == -VAR_1) {
   FUNC_4(VAR_5, VAR_7);
   return 0;
  }

  FUNC_2(VAR_4->cpp, "NSP HWinfo lookup failed: %d\n", VAR_8);
  return VAR_8;
 }

 if (FUNC_5(VAR_5, VAR_6) == VAR_6) {
  FUNC_2(VAR_4->cpp, "NSP HWinfo value not NULL-terminated\n");
  return -VAR_0;
 }

 return 0;
}
