
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int cal_mode; int pre_cal_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int) ;
 int FUNC_2 (struct ath10k*,char*) ;
 int FUNC_3 (struct ath10k*,int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_3->pre_cal_file);
 if (VAR_4 == 0) {
  VAR_3->cal_mode = VAR_2;
  goto success;
 }

 FUNC_1(VAR_3, VAR_0,
     "boot did not find a pre calibration file, try DT next: %d\n",
     VAR_4);

 VAR_4 = FUNC_2(VAR_3, "qcom,ath10k-pre-calibration-data");
 if (VAR_4) {
  FUNC_1(VAR_3, VAR_0,
      "unable to load pre cal data from DT: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_3->cal_mode = VAR_1;

success:
 FUNC_1(VAR_3, VAR_0, "boot using calibration mode %s\n",
     FUNC_0(VAR_3->cal_mode));

 return 0;
}
