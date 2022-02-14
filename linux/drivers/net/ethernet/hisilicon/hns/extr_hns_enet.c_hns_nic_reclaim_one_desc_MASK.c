
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {size_t next_to_clean; struct hnae_desc_cb* desc_cb; } ;
struct hnae_desc_cb {scalar_t__ type; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae_ring*,size_t) ;
 int VAR_1 ;
 int FUNC_1 (struct hnae_ring*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct hnae_ring *VAR_2,
         int *VAR_3, int *VAR_4)
{
 struct hnae_desc_cb *VAR_5 = &VAR_2->desc_cb[VAR_2->next_to_clean];

 (*VAR_4) += (VAR_5->type == VAR_0);
 (*VAR_3) += VAR_5->length;

 FUNC_0(VAR_2, VAR_2->next_to_clean);

 FUNC_1(VAR_2, VAR_1);
}
