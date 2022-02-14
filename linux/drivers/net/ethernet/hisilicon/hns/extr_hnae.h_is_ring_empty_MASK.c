
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;


 int FUNC_0 (struct hnae_ring*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct hnae_ring *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->next_to_use);
 FUNC_0(VAR_0, VAR_0->next_to_clean);

 return VAR_0->next_to_use == VAR_0->next_to_clean;
}
