
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct octeon_instr_queue {size_t last_db_time; size_t db_timeout; int instr_pending; } ;
struct octeon_device {struct octeon_instr_queue** instr_queue; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,struct octeon_instr_queue*) ;
 int FUNC_2 (struct octeon_device*,struct octeon_instr_queue*,int ) ;
 int FUNC_3 (size_t,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct octeon_device *VAR_1, u64 VAR_2)
{
 struct octeon_instr_queue *VAR_3;
 u64 VAR_4;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->instr_queue[VAR_2];
 if (!VAR_3)
  return;


 if (!FUNC_0(&VAR_3->instr_pending))
  return;

 VAR_4 = VAR_3->last_db_time + VAR_3->db_timeout;
 if (!FUNC_3(VAR_0, (unsigned long)VAR_4))
  return;
 VAR_3->last_db_time = VAR_0;


 FUNC_2(VAR_1, VAR_3, 0);

 FUNC_1(((void*)0), VAR_3);
}
