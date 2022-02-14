
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct iavf_tx_context_desc {int type_cmd_tso_mss; void* rsvd; void* l2tag2; int tunneling_params; } ;
struct iavf_ring {int next_to_use; int count; } ;


 struct iavf_tx_context_desc* FUNC_0 (struct iavf_ring*,int) ;
 scalar_t__ const VAR_0 ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_4(struct iavf_ring *VAR_1,
          const u64 VAR_2,
          const u32 VAR_3, const u32 VAR_4)
{
 struct iavf_tx_context_desc *VAR_5;
 int VAR_6 = VAR_1->next_to_use;

 if ((VAR_2 == VAR_0) &&
     !VAR_3 && !VAR_4)
  return;


 VAR_5 = FUNC_0(VAR_1, VAR_6);

 VAR_6++;
 VAR_1->next_to_use = (VAR_6 < VAR_1->count) ? VAR_6 : 0;


 VAR_5->tunneling_params = FUNC_2(VAR_3);
 VAR_5->l2tag2 = FUNC_1(VAR_4);
 VAR_5->rsvd = FUNC_1(0);
 VAR_5->type_cmd_tso_mss = FUNC_3(VAR_2);
}
