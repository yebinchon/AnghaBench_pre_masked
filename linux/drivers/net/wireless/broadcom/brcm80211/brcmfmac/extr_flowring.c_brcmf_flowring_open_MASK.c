
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct brcmf_flowring_ring {int status; } ;
struct brcmf_flowring {struct brcmf_flowring_ring** rings; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;

void FUNC_1(struct brcmf_flowring *VAR_1, u16 VAR_2)
{
 struct brcmf_flowring_ring *VAR_3;

 VAR_3 = VAR_1->rings[VAR_2];
 if (!VAR_3) {
  FUNC_0("Ring NULL, for flowid %d\n", VAR_2);
  return;
 }

 VAR_3->status = VAR_0;
}
