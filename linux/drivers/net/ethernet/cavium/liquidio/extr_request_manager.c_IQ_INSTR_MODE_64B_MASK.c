
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_instr_queue {int iqcmd_64B; } ;
struct octeon_device {scalar_t__* instr_queue; } ;



__attribute__((used)) static inline int FUNC_0(struct octeon_device *VAR_0, int VAR_1)
{
 struct octeon_instr_queue *VAR_2 =
     (struct octeon_instr_queue *)VAR_0->instr_queue[VAR_1];
 return VAR_2->iqcmd_64B;
}
