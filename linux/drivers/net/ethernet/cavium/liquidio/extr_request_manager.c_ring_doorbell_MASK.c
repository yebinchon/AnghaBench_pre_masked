
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_instr_queue {int last_db_time; scalar_t__ fill_cnt; int doorbell_reg; } ;
struct octeon_device {int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct octeon_device *VAR_2, struct octeon_instr_queue *VAR_3)
{
 if (FUNC_0(&VAR_2->status) == VAR_0) {
  FUNC_1(VAR_3->fill_cnt, VAR_3->doorbell_reg);

  VAR_3->fill_cnt = 0;
  VAR_3->last_db_time = VAR_1;
  return;
 }
}
