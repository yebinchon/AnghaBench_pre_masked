
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fw_ver; int * wait; } ;
struct snic {int snic_lock; TYPE_1__ fwinfo; int shost; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct snic*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(struct snic *VAR_2)
{
 FUNC_0(VAR_1);
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5 = 3;

 FUNC_2(VAR_2->shost, "Retrieving snic params.\n");
 FUNC_7(&VAR_2->snic_lock, VAR_3);
 FUNC_3(&VAR_2->fwinfo, 0, sizeof(VAR_2->fwinfo));
 VAR_2->fwinfo.wait = &VAR_1;
 FUNC_8(&VAR_2->snic_lock, VAR_3);


 FUNC_5(50);





 do {
  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4)
   return VAR_4;

  FUNC_9(&VAR_1, FUNC_4(2000));
  FUNC_7(&VAR_2->snic_lock, VAR_3);
  VAR_4 = (VAR_2->fwinfo.fw_ver != 0) ? 0 : -VAR_0;
  if (VAR_4)
   FUNC_1(VAR_2->shost,
          "Failed to retrieve snic params,\n");


  if (VAR_4 == 0 || VAR_5 == 1)
   VAR_2->fwinfo.wait = ((void*)0);

  FUNC_8(&VAR_2->snic_lock, VAR_3);
 } while (VAR_4 && --VAR_5);

 return VAR_4;
}
