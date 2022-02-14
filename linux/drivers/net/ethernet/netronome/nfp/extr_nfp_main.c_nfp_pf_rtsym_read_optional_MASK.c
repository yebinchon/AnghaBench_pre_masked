
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_pf {int cpp; int rtbl; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (char*,int,char const*,int ) ;

int FUNC_4(struct nfp_pf *VAR_1, const char *VAR_2,
          unsigned int VAR_3)
{
 char VAR_4[256];
 int VAR_5 = 0;
 u64 VAR_6;

 FUNC_3(VAR_4, sizeof(VAR_4), VAR_2, FUNC_0(VAR_1->cpp));

 VAR_6 = FUNC_2(VAR_1->rtbl, VAR_4, &VAR_5);
 if (VAR_5) {
  if (VAR_5 == -VAR_0)
   return VAR_3;
  FUNC_1(VAR_1->cpp, "Unable to read symbol %s\n", VAR_4);
  return VAR_5;
 }

 return VAR_6;
}
