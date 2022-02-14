
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; int * desc_cb; } ;


 int FUNC_0 (struct hnae_ring*) ;
 int FUNC_1 (struct hnae_ring*) ;
 scalar_t__ FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hnae_ring *VAR_0)
{
 if (FUNC_2(VAR_0))
  FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_3(VAR_0->desc_cb);
 VAR_0->desc_cb = ((void*)0);
 VAR_0->next_to_clean = 0;
 VAR_0->next_to_use = 0;
}
