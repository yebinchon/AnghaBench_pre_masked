
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport_container {int dummy; } ;
struct request_queue {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct request_queue* q; } ;


 int FUNC_0 (struct request_queue*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_3(struct transport_container *VAR_0, struct device *VAR_1,
      struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);
 struct request_queue *VAR_4 = FUNC_2(VAR_3)->q;

 FUNC_0(VAR_4);
 return 0;
}
