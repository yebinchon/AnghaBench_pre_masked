
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap_store {int state; int last_allocated_ptr; int last_allocated_key; int data; } ;
struct TYPE_2__ {int u_data; } ;
struct nilfs_bmap {int b_state; int b_last_allocated_ptr; int b_last_allocated_key; TYPE_1__ b_u; } ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(const struct nilfs_bmap *VAR_0,
       struct nilfs_bmap_store *VAR_1)
{
 FUNC_0(VAR_1->data, VAR_0->b_u.u_data, sizeof(VAR_1->data));
 VAR_1->last_allocated_key = VAR_0->b_last_allocated_key;
 VAR_1->last_allocated_ptr = VAR_0->b_last_allocated_ptr;
 VAR_1->state = VAR_0->b_state;
}
