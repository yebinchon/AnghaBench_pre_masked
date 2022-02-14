
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_dev {int dev_mutex; struct rtsx_chip* chip; int scanning_done; int delay_wait; } ;
struct rtsx_chip {TYPE_1__* srb; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int result; int (* scsi_done ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 struct Scsi_Host* FUNC_3 (struct rtsx_dev*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct rtsx_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_3(VAR_2);
 struct rtsx_chip *VAR_4 = VAR_2->chip;





 FUNC_0(&VAR_2->dev_mutex);
 FUNC_4(VAR_3);
 FUNC_2(VAR_4, VAR_1);
 FUNC_6(VAR_3);
 FUNC_1(&VAR_2->dev_mutex);
 FUNC_10(&VAR_2->delay_wait);
 FUNC_8(&VAR_2->scanning_done);


 FUNC_9(100);






 FUNC_0(&VAR_2->dev_mutex);
 if (VAR_4->srb) {
  VAR_4->srb->result = VAR_0 << 16;
  FUNC_4(VAR_3);
  VAR_4->srb->scsi_done(VAR_2->chip->srb);
  VAR_4->srb = ((void*)0);
  FUNC_6(VAR_3);
 }
 FUNC_1(&VAR_2->dev_mutex);


 FUNC_5(VAR_3);
}
