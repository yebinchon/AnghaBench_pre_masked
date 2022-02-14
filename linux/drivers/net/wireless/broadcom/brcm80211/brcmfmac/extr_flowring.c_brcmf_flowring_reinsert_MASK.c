
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct brcmf_flowring_ring {int skblist; } ;
struct brcmf_flowring {struct brcmf_flowring_ring** rings; } ;


 int FUNC_0 (int *,struct sk_buff*) ;

void FUNC_1(struct brcmf_flowring *VAR_0, u16 VAR_1,
        struct sk_buff *VAR_2)
{
 struct brcmf_flowring_ring *VAR_3;

 VAR_3 = VAR_0->rings[VAR_1];

 FUNC_0(&VAR_3->skblist, VAR_2);
}
