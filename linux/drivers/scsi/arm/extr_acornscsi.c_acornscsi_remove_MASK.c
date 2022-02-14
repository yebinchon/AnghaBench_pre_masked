
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct expansion_card {int dummy; } ;
struct Scsi_Host {int irq; scalar_t__ hostdata; } ;
struct TYPE_6__ {int issue; int disconnected; } ;
struct TYPE_5__ {int msgs; } ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ fast; TYPE_2__ queues; TYPE_1__ scsi; } ;
typedef TYPE_3__ AS_Host ;


 scalar_t__ VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct expansion_card*) ;
 int FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (struct expansion_card*,int *) ;
 int FUNC_3 (struct expansion_card*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct expansion_card *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_1);
 AS_Host *VAR_3 = (AS_Host *)VAR_2->hostdata;

 FUNC_2(VAR_1, ((void*)0));
 FUNC_8(VAR_2);




 FUNC_9(0x80, VAR_3->fast + VAR_0);

 FUNC_4(VAR_2->irq, VAR_3);

 FUNC_5(&VAR_3->scsi.msgs);
 FUNC_6(&VAR_3->queues.disconnected);
 FUNC_6(&VAR_3->queues.issue);
 FUNC_3(VAR_1, VAR_3->fast);
 FUNC_3(VAR_1, VAR_3->base);
 FUNC_7(VAR_2);
 FUNC_1(VAR_1);
}
