
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netvsc_device {scalar_t__ recv_completion_cnt; } ;
struct multi_recv_comp {scalar_t__ next; scalar_t__ first; } ;



__attribute__((used)) static void FUNC_0(const struct netvsc_device *VAR_0,
     const struct multi_recv_comp *VAR_1,
     u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = VAR_0->recv_completion_cnt;

 if (VAR_1->next >= VAR_1->first)
  *VAR_2 = VAR_1->next - VAR_1->first;
 else
  *VAR_2 = (VAR_4 - VAR_1->first) + VAR_1->next;

 *VAR_3 = VAR_4 - *VAR_2 - 1;
}
