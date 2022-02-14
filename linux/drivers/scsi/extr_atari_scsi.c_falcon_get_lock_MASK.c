
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int can_queue; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct Scsi_Host*) ;
 int FUNC_4 (int ,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_1)
{
 if (FUNC_0())
  return 1;

 if (FUNC_2(VAR_0) &&
     VAR_1->hostt->can_queue > 1)
  return 1;

 if (FUNC_1())
  return FUNC_4(VAR_0, VAR_1);

 FUNC_3(VAR_0, VAR_1);
 return 1;
}
