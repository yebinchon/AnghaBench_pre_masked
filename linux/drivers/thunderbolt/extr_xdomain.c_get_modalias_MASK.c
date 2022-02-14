
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_service {char* key; int prtcid; int prtcvers; int prtcrevs; } ;


 int FUNC_0 (char*,size_t,char*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct tb_service *VAR_0, char *VAR_1, size_t VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, "tbsvc:k%sp%08Xv%08Xr%08X", VAR_0->key,
   VAR_0->prtcid, VAR_0->prtcvers, VAR_0->prtcrevs);
}
