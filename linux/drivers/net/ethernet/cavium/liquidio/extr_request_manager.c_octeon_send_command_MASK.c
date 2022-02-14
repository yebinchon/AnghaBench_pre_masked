
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct octeon_instr_queue {scalar_t__ fill_cnt; int post_lock; scalar_t__ allow_soft_cmds; } ;
struct octeon_device {struct octeon_instr_queue** instr_queue; } ;
struct iq_post_status {scalar_t__ status; int index; } ;


 int FUNC_0 (struct octeon_device*,size_t,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct octeon_instr_queue*,int ,void*,size_t) ;
 struct iq_post_status FUNC_2 (struct octeon_instr_queue*,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (struct octeon_device*,struct octeon_instr_queue*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct octeon_device *VAR_6, u32 VAR_7,
      u32 VAR_8, void *VAR_9, void *VAR_10,
      u32 VAR_11, u32 VAR_12)
{
 int VAR_13;
 struct iq_post_status VAR_14;
 struct octeon_instr_queue *VAR_15 = VAR_6->instr_queue[VAR_7];




 if (VAR_15->allow_soft_cmds)
  FUNC_5(&VAR_15->post_lock);

 VAR_14 = FUNC_2(VAR_15, VAR_9);

 if (VAR_14.status != VAR_0) {
  VAR_13 = FUNC_3(VAR_10, VAR_12);
  FUNC_1(VAR_15, VAR_14.index, VAR_10, VAR_12);
  FUNC_0(VAR_6, VAR_7, VAR_3, VAR_11);
  FUNC_0(VAR_6, VAR_7, VAR_5, 1);

  if (VAR_15->fill_cnt >= VAR_2 || VAR_8 ||
      VAR_13 || VAR_14.status == VAR_1)
   FUNC_4(VAR_6, VAR_15);
 } else {
  FUNC_0(VAR_6, VAR_7, VAR_4, 1);
 }

 if (VAR_15->allow_soft_cmds)
  FUNC_6(&VAR_15->post_lock);





 return VAR_14.status;
}
