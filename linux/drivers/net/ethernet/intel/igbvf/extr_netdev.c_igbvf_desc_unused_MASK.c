
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igbvf_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; int count; } ;



__attribute__((used)) static int FUNC_0(struct igbvf_ring *VAR_0)
{
 if (VAR_0->next_to_clean > VAR_0->next_to_use)
  return VAR_0->next_to_clean - VAR_0->next_to_use - 1;

 return VAR_0->count + VAR_0->next_to_clean - VAR_0->next_to_use - 1;
}
