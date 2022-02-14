
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unit_id; } ;
struct scsi_info {int dev; int intr_lock; int flags; TYPE_1__ dds; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,long,long) ;
 int FUNC_1 (int *,char*,...) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static long FUNC_8(struct scsi_info *VAR_3)
{
 long VAR_4;
 long VAR_5 = VAR_0;
 int VAR_6 = 0;

 do {
  VAR_4 = FUNC_2(VAR_3->dds.unit_id);
  switch (VAR_4) {
  case 128:
   FUNC_4(&VAR_3->intr_lock);
   VAR_3->flags &= ~VAR_2;
   FUNC_5(&VAR_3->intr_lock);
   break;

  case 136:
  case 129:
   FUNC_1(&VAR_3->dev, "unregister_command_q: error from h_free_crq %ld\n",
    VAR_4);
   VAR_5 = VAR_1;
   break;

  case 137:
  case 131:

   FUNC_7(1000, 2000);
   VAR_6 += 1;
   break;
  case 133:
   FUNC_7(10000, 20000);
   VAR_6 += 10;
   break;
  case 135:
   FUNC_3(100);
   VAR_6 += 100;
   break;
  case 130:
   FUNC_6(1);
   VAR_6 += 1000;
   break;
  case 132:
   FUNC_6(10);
   VAR_6 += 10000;
   break;
  case 134:
   FUNC_6(100);
   VAR_6 += 100000;
   break;
  default:
   FUNC_1(&VAR_3->dev, "unregister_command_q: unknown error %ld from h_free_crq\n",
    VAR_4);
   VAR_5 = VAR_1;
   break;
  }





  if (VAR_6 > 300000 && VAR_4 != 128) {
   VAR_5 = VAR_1;
   FUNC_1(&VAR_3->dev, "Excessive wait for h_free_crq\n");
  }
 } while (VAR_4 != 128 && VAR_5 == VAR_0);

 FUNC_0(&VAR_3->dev, "Freeing CRQ: phyp rc %ld, rc %ld\n", VAR_4, VAR_5);

 return VAR_5;
}
