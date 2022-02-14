
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {size_t* if2bss; struct brcmf_if** iflist; } ;
struct brcmf_if {int dummy; } ;
typedef size_t s32 ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;

struct brcmf_if *FUNC_1(struct brcmf_pub *VAR_1, int VAR_2)
{
 struct brcmf_if *VAR_3;
 s32 VAR_4;

 if (VAR_2 < 0 || VAR_2 >= VAR_0) {
  FUNC_0(VAR_1, "ifidx %d out of range\n", VAR_2);
  return ((void*)0);
 }

 VAR_3 = ((void*)0);
 VAR_4 = VAR_1->if2bss[VAR_2];
 if (VAR_4 >= 0)
  VAR_3 = VAR_1->iflist[VAR_4];

 return VAR_3;
}
