
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_io_sq {int next_to_comp; int tail; int q_depth; } ;



__attribute__((used)) static inline int FUNC_0(struct ena_com_io_sq *VAR_0)
{
 u16 VAR_1, VAR_2, VAR_3;

 VAR_2 = VAR_0->next_to_comp;
 VAR_1 = VAR_0->tail;
 VAR_3 = VAR_1 - VAR_2;

 return VAR_0->q_depth - 1 - VAR_3;
}
