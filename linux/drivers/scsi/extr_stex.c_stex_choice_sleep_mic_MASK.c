
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_hba {int msi_lock; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct st_hba *VAR_3, pm_message_t VAR_4)
{
 switch (VAR_4.event) {
 case 128:
  return VAR_1;
 case 129:
  VAR_3->msi_lock = 0;
  return VAR_2;
 default:
  return VAR_0;
 }
}
