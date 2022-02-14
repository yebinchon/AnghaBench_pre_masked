
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ mchip_mode; int proc_list; int doneq_lock; int doneq; TYPE_1__* grab_buffer; int grab_temp; scalar_t__ grab_fbuffer; int grabq_lock; int grabq; } ;
struct TYPE_3__ {int size; int sequence; void* ts; void* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned char*,int,int *) ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 void* FUNC_2 () ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,scalar_t__,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int ,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_9, void *VAR_10)
{
 u32 VAR_11;
 int VAR_12;
 static int VAR_13;

 VAR_11 = FUNC_8(VAR_5);

 if (VAR_8.mchip_mode != VAR_3 &&
     VAR_8.mchip_mode != VAR_2)
  return VAR_1;

again:
 VAR_11 = FUNC_6();
 if (!(VAR_11 & VAR_4))
  return VAR_0;

 if (VAR_8.mchip_mode == VAR_3) {
  if (FUNC_1(&VAR_8.grabq, (unsigned char *)&VAR_12,
         sizeof(int), &VAR_8.grabq_lock) != sizeof(int)) {
   FUNC_5();
   return VAR_0;
  }
  FUNC_4(VAR_11, VAR_8.grab_fbuffer + VAR_7 * VAR_12,
          FUNC_7() * FUNC_9() * 2);
  VAR_8.grab_buffer[VAR_12].size = FUNC_7() * FUNC_9() * 2;
  VAR_8.grab_buffer[VAR_12].state = VAR_6;
  VAR_8.grab_buffer[VAR_12].ts = FUNC_2();
  VAR_8.grab_buffer[VAR_12].sequence = VAR_13++;
  FUNC_0(&VAR_8.doneq, (unsigned char *)&VAR_12,
    sizeof(int), &VAR_8.doneq_lock);
  FUNC_11(&VAR_8.proc_list);
 } else {
  int VAR_14;
  VAR_14 = FUNC_3(VAR_11, VAR_8.grab_temp, VAR_7);
  if (VAR_14 == -1) {
   FUNC_5();
   goto again;
  }
  if (FUNC_1(&VAR_8.grabq, (unsigned char *)&VAR_12,
         sizeof(int), &VAR_8.grabq_lock) != sizeof(int)) {
   FUNC_5();
   goto again;
  }
  FUNC_10(VAR_8.grab_fbuffer + VAR_7 * VAR_12, VAR_8.grab_temp,
         VAR_14);
  VAR_8.grab_buffer[VAR_12].size = VAR_14;
  VAR_8.grab_buffer[VAR_12].state = VAR_6;
  VAR_8.grab_buffer[VAR_12].ts = FUNC_2();
  VAR_8.grab_buffer[VAR_12].sequence = VAR_13++;
  FUNC_0(&VAR_8.doneq, (unsigned char *)&VAR_12,
    sizeof(int), &VAR_8.doneq_lock);
  FUNC_11(&VAR_8.proc_list);
 }
 FUNC_5();
 goto again;
}
