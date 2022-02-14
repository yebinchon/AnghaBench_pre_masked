
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct brcmf_msgbuf {int txflow_work; int txflow_wq; struct brcmf_commonring** flowrings; int flow_map; } ;
struct brcmf_commonring {int outstanding_tx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct brcmf_msgbuf *VAR_1, u32 VAR_2,
     bool VAR_3)
{
 struct brcmf_commonring *VAR_4;

 FUNC_2(VAR_2, VAR_1->flow_map);
 VAR_4 = VAR_1->flowrings[VAR_2];
 if ((VAR_3) || (FUNC_0(&VAR_4->outstanding_tx) <
   VAR_0))
  FUNC_1(VAR_1->txflow_wq, &VAR_1->txflow_work);

 return 0;
}
