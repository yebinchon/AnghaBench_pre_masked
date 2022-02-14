
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct brcmf_flowring_ring {scalar_t__ status; int skblist; } ;
struct brcmf_flowring {struct brcmf_flowring_ring** rings; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

u32 FUNC_1(struct brcmf_flowring *VAR_1, u16 VAR_2)
{
 struct brcmf_flowring_ring *VAR_3;

 VAR_3 = VAR_1->rings[VAR_2];
 if (!VAR_3)
  return 0;

 if (VAR_3->status != VAR_0)
  return 0;

 return FUNC_0(&VAR_3->skblist);
}
