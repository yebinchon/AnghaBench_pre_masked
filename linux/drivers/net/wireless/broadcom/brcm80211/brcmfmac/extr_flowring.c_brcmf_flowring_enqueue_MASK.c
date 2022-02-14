
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct brcmf_flowring_ring {int skblist; int blocked; } ;
struct brcmf_flowring {struct brcmf_flowring_ring** rings; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct brcmf_flowring*,size_t,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

u32 FUNC_4(struct brcmf_flowring *VAR_3, u16 VAR_4,
      struct sk_buff *VAR_5)
{
 struct brcmf_flowring_ring *VAR_6;

 VAR_6 = VAR_3->rings[VAR_4];

 FUNC_3(&VAR_6->skblist, VAR_5);

 if (!VAR_6->blocked &&
     (FUNC_2(&VAR_6->skblist) > VAR_0)) {
  FUNC_1(VAR_3, VAR_4, 1);
  FUNC_0(VAR_2, "Flowcontrol: BLOCK for ring %d\n", VAR_4);






  if (FUNC_2(&VAR_6->skblist) < VAR_1)
   FUNC_1(VAR_3, VAR_4, 0);
 }
 return FUNC_2(&VAR_6->skblist);
}
