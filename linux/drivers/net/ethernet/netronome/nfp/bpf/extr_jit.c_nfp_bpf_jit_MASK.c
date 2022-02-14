
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {int n_translated; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_prog*) ;
 int FUNC_1 (struct nfp_prog*) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (char*,int,int ) ;

int FUNC_5(struct nfp_prog *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_4("Translation failed with error %d (translated: %u)\n",
         VAR_2, VAR_1->n_translated);
  return -VAR_0;
 }

 FUNC_1(VAR_1);

 return VAR_2;
}
