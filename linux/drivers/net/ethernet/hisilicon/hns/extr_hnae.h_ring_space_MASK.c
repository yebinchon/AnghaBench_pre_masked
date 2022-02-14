
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int desc_num; int next_to_use; int next_to_clean; } ;


 int FUNC_0 (struct hnae_ring*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct hnae_ring *VAR_0)
{
 return VAR_0->desc_num -
  FUNC_0(VAR_0, VAR_0->next_to_clean, VAR_0->next_to_use) - 1;
}
