
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_ext_path {scalar_t__ p_block; TYPE_1__* p_hdr; int * p_idx; } ;
struct TYPE_2__ {int eh_entries; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ext4_ext_path *VAR_0)
{
 FUNC_0(VAR_0->p_idx == ((void*)0));

 if (VAR_0->p_idx < FUNC_1(VAR_0->p_hdr))
  return 0;





 if (FUNC_2(VAR_0->p_hdr->eh_entries) == VAR_0->p_block)
  return 0;
 return 1;
}
