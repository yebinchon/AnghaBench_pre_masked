
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_ch_state {scalar_t__ level; scalar_t__ idx2; scalar_t__ idx1; scalar_t__ service_counter; scalar_t__ request_counter; } ;



__attribute__((used)) static void FUNC_0(struct int_ch_state *VAR_0)
{
 VAR_0->request_counter = 0;
 VAR_0->service_counter = 0;

 VAR_0->idx1 = 0;
 VAR_0->idx2 = 0;
 VAR_0->level = 0;
}
