
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sas_rphy {struct request_queue* q; int dev; } ;
struct request_queue {int dummy; } ;
struct Scsi_Host {int host_no; int shost_gendev; TYPE_2__* hostt; int transportt; } ;
typedef int name ;
struct TYPE_8__ {struct request_queue* q; } ;
struct TYPE_7__ {TYPE_1__* f; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int smp_handler; } ;


 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 struct request_queue* FUNC_2 (int *,char*,int ,int *,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,char*,int) ;
 TYPE_4__* FUNC_6 (struct Scsi_Host*) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct Scsi_Host *VAR_1, struct sas_rphy *VAR_2)
{
 struct request_queue *VAR_3;

 if (!FUNC_7(VAR_1->transportt)->f->smp_handler) {
  FUNC_4("%s can't handle SMP requests\n", VAR_1->hostt->name);
  return 0;
 }

 if (VAR_2) {
  VAR_3 = FUNC_2(&VAR_2->dev, FUNC_3(&VAR_2->dev),
    VAR_0, ((void*)0), 0);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
  VAR_2->q = VAR_3;
 } else {
  char VAR_4[20];

  FUNC_5(VAR_4, sizeof(VAR_4), "sas_host%d", VAR_1->host_no);
  VAR_3 = FUNC_2(&VAR_1->shost_gendev, VAR_4,
    VAR_0, ((void*)0), 0);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
  FUNC_6(VAR_1)->q = VAR_3;
 }

 return 0;
}
