
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {scalar_t__ data; TYPE_1__** bh; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct quad_buffer_head *VAR_0)
{
 if (FUNC_2(VAR_0->data != VAR_0->bh[0]->b_data)) {
  FUNC_1(VAR_0->bh[0]->b_data, VAR_0->data + 0 * 512, 512);
  FUNC_1(VAR_0->bh[1]->b_data, VAR_0->data + 1 * 512, 512);
  FUNC_1(VAR_0->bh[2]->b_data, VAR_0->data + 2 * 512, 512);
  FUNC_1(VAR_0->bh[3]->b_data, VAR_0->data + 3 * 512, 512);
 }
 FUNC_0(VAR_0->bh[0]);
 FUNC_0(VAR_0->bh[1]);
 FUNC_0(VAR_0->bh[2]);
 FUNC_0(VAR_0->bh[3]);
}
