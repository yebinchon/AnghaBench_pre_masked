
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {int lock; } ;
struct pm8001_device {scalar_t__ running_req; int dev_type; int device_id; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
struct TYPE_2__ {int (* dereg_dev_req ) (struct pm8001_hba_info*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct pm8001_device*,struct domain_device*,int,int ) ;
 struct pm8001_hba_info* FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct pm8001_device*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct pm8001_hba_info*,int ) ;

__attribute__((used)) static void FUNC_9(struct domain_device *VAR_1)
{
 unsigned long VAR_2 = 0;
 struct pm8001_hba_info *VAR_3;
 struct pm8001_device *VAR_4 = VAR_1->lldd_dev;

 VAR_3 = FUNC_3(VAR_1);
 FUNC_6(&VAR_3->lock, VAR_2);
 if (VAR_4) {
  u32 VAR_5 = VAR_4->device_id;

  FUNC_0(VAR_3,
   FUNC_5("found dev[%d:%x] is gone.\n",
   VAR_4->device_id, VAR_4->dev_type));
  if (VAR_4->running_req) {
   FUNC_7(&VAR_3->lock, VAR_2);
   FUNC_2(VAR_3, VAR_4 ,
    VAR_1, 1, 0);
   while (VAR_4->running_req)
    FUNC_1(20);
   FUNC_6(&VAR_3->lock, VAR_2);
  }
  VAR_0->dereg_dev_req(VAR_3, VAR_5);
  FUNC_4(VAR_4);
 } else {
  FUNC_0(VAR_3,
   FUNC_5("Found dev has gone.\n"));
 }
 VAR_1->lldd_dev = ((void*)0);
 FUNC_7(&VAR_3->lock, VAR_2);
}
