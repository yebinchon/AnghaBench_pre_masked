
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus; } ;
struct ath10k {void* cal_file; int dev; TYPE_1__ hif; void* pre_cal_file; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int ,char*) ;
 void* FUNC_4 (struct ath10k*,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_2)
{
 char VAR_3[100];


 FUNC_6(VAR_3, sizeof(VAR_3), "pre-cal-%s-%s.bin",
    FUNC_2(VAR_2->hif.bus), FUNC_5(VAR_2->dev));

 VAR_2->pre_cal_file = FUNC_4(VAR_2, VAR_1, VAR_3);
 if (!FUNC_0(VAR_2->pre_cal_file))
  goto success;


 FUNC_6(VAR_3, sizeof(VAR_3), "cal-%s-%s.bin",
    FUNC_2(VAR_2->hif.bus), FUNC_5(VAR_2->dev));

 VAR_2->cal_file = FUNC_4(VAR_2, VAR_1, VAR_3);
 if (FUNC_0(VAR_2->cal_file))

  return FUNC_1(VAR_2->cal_file);
success:
 FUNC_3(VAR_2, VAR_0, "found calibration file %s/%s\n",
     VAR_1, VAR_3);

 return 0;
}
