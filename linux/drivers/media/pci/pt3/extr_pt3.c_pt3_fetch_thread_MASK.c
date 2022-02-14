
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct pt3_adapter {TYPE_1__* thread; TYPE_2__ dvb_adap; void* num_discard; } ;
typedef int ktime_t ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct pt3_adapter*) ;
 int FUNC_5 (struct pt3_adapter*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void *VAR_6)
{
 struct pt3_adapter *VAR_7 = VAR_6;
 ktime_t VAR_8;
 bool VAR_9;





 FUNC_4(VAR_7);
 VAR_7->num_discard = 4;

 FUNC_0(VAR_7->dvb_adap.device, "PT3: [%s] started\n",
  VAR_7->thread->comm);
 FUNC_7();
 while (!FUNC_2(&VAR_9)) {
  if (VAR_9)
   VAR_7->num_discard = 4;

  FUNC_5(VAR_7);

  VAR_8 = FUNC_3(0, 10 * VAR_1);
  FUNC_6(VAR_5);
  FUNC_1(&VAR_8,
     2 * VAR_1,
     VAR_0);
 }
 FUNC_0(VAR_7->dvb_adap.device, "PT3: [%s] exited\n",
  VAR_7->thread->comm);
 return 0;
}
