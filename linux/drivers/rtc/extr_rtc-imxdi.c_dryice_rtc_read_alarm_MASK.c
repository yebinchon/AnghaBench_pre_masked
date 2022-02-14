
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct imxdi_dev {int write_mutex; scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct imxdi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct imxdi_dev *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8;

 VAR_8 = FUNC_3(VAR_7->ioaddr + VAR_0);
 FUNC_4(VAR_8, &VAR_6->time);


 VAR_6->enabled = (FUNC_3(VAR_7->ioaddr + VAR_1) & VAR_2) != 0;


 FUNC_1(&VAR_7->write_mutex);


 VAR_6->pending = (FUNC_3(VAR_7->ioaddr + VAR_3) & VAR_4) != 0;

 FUNC_2(&VAR_7->write_mutex);

 return 0;
}
