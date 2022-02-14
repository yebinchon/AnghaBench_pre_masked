
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int wide_bus; scalar_t__ low_speed; } ;
struct mmc_card {TYPE_2__* host; TYPE_1__ cccr; } ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_card*,int,int ,int ,int,int*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 if (!(VAR_5->host->caps & VAR_1))
  return 0;

 if (VAR_5->cccr.low_speed && !VAR_5->cccr.wide_bus)
  return 0;

 VAR_6 = FUNC_0(VAR_5, 0, 0, VAR_4, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!(VAR_7 & VAR_3))
  return 0;

 VAR_7 &= ~VAR_3;
 VAR_7 |= VAR_2;

 VAR_6 = FUNC_0(VAR_5, 1, 0, VAR_4, VAR_7, ((void*)0));
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5->host, VAR_0);

 return 0;
}
