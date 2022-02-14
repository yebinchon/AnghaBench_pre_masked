
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int * iflist; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct brcmf_pub *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  if (VAR_3 == 1)
   continue;
  if (!VAR_2->iflist[VAR_3])
   return VAR_3;
 }

 return -VAR_1;
}
