
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xd_info {scalar_t__ cleanup_counter; } ;
struct sd_info {scalar_t__ cleanup_counter; } ;
struct rtsx_dev {int polling_exit; int dev_mutex; TYPE_1__* pci; struct rtsx_chip* chip; } ;
struct ms_info {scalar_t__ cleanup_counter; } ;
struct rtsx_chip {struct ms_info ms_card; struct xd_info xd_card; struct sd_info sd_card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct rtsx_chip*,int ) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(void *VAR_4)
{
 struct rtsx_dev *VAR_5 = VAR_4;
 struct rtsx_chip *VAR_6 = VAR_5->chip;
 struct sd_info *VAR_7 = &VAR_6->sd_card;
 struct xd_info *VAR_8 = &VAR_6->xd_card;
 struct ms_info *VAR_9 = &VAR_6->ms_card;

 VAR_7->cleanup_counter = 0;
 VAR_8->cleanup_counter = 0;
 VAR_9->cleanup_counter = 0;


 FUNC_10((VAR_3 + 5) * 1000);

 for (;;) {
  FUNC_9(VAR_2);
  FUNC_8(FUNC_2(VAR_0));


  FUNC_4(&VAR_5->dev_mutex);


  if (FUNC_6(VAR_6, VAR_1)) {
   FUNC_1(&VAR_5->pci->dev, "-- rtsx-polling exiting\n");
   FUNC_5(&VAR_5->dev_mutex);
   break;
  }

  FUNC_5(&VAR_5->dev_mutex);

  FUNC_3(VAR_6);


  FUNC_4(&VAR_5->dev_mutex);

  FUNC_7(VAR_6);


  FUNC_5(&VAR_5->dev_mutex);
 }

 FUNC_0(&VAR_5->polling_exit, 0);
}
