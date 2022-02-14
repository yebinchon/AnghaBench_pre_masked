
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct brcmf_flowring_ring {scalar_t__ status; int skblist; scalar_t__ blocked; } ;
struct brcmf_flowring {struct brcmf_flowring_ring** rings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct brcmf_flowring*,size_t,int) ;
 struct sk_buff* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

struct sk_buff *FUNC_4(struct brcmf_flowring *VAR_3, u16 VAR_4)
{
 struct brcmf_flowring_ring *VAR_5;
 struct sk_buff *VAR_6;

 VAR_5 = VAR_3->rings[VAR_4];
 if (VAR_5->status != VAR_2)
  return ((void*)0);

 VAR_6 = FUNC_2(&VAR_5->skblist);

 if (VAR_5->blocked &&
     (FUNC_3(&VAR_5->skblist) < VAR_0)) {
  FUNC_1(VAR_3, VAR_4, 0);
  FUNC_0(VAR_1, "Flowcontrol: OPEN for ring %d\n", VAR_4);
 }

 return VAR_6;
}
