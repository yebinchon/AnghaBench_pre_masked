
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; TYPE_1__* ops; } ;
struct mmc_card {struct mmc_host* host; } ;
struct TYPE_2__ {int (* select_drive_strength ) (struct mmc_card*,unsigned int,int,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mmc_card*,unsigned int,int,int,int*) ;

int FUNC_1(struct mmc_card *VAR_7, unsigned int VAR_8,
         int VAR_9, int *VAR_10)
{
 struct mmc_host *VAR_11 = VAR_7->host;
 int VAR_12 = VAR_4;

 *VAR_10 = 0;

 if (!VAR_11->ops->select_drive_strength)
  return 0;


 if (VAR_11->caps & VAR_0)
  VAR_12 |= VAR_3;

 if (VAR_11->caps & VAR_1)
  VAR_12 |= VAR_5;

 if (VAR_11->caps & VAR_2)
  VAR_12 |= VAR_6;







 return VAR_11->ops->select_drive_strength(VAR_7, VAR_8,
      VAR_12,
      VAR_9,
      VAR_10);
}
