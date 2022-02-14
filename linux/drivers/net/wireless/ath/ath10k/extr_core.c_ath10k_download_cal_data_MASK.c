
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int cal_mode; int cal_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*,int) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,int ) ;
 int FUNC_7 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == 0)
  return 0;

 FUNC_2(VAR_5, VAR_4,
     "pre cal download procedure failed, try cal file: %d\n",
     VAR_6);

 VAR_6 = FUNC_6(VAR_5, VAR_5->cal_file);
 if (VAR_6 == 0) {
  VAR_5->cal_mode = VAR_2;
  goto done;
 }

 FUNC_2(VAR_5, VAR_4,
     "boot did not find a calibration file, try DT next: %d\n",
     VAR_6);

 VAR_6 = FUNC_4(VAR_5, "qcom,ath10k-calibration-data");
 if (VAR_6 == 0) {
  VAR_5->cal_mode = VAR_0;
  goto done;
 }

 FUNC_2(VAR_5, VAR_4,
     "boot did not find DT entry, try target EEPROM next: %d\n",
     VAR_6);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 == 0) {
  VAR_5->cal_mode = VAR_1;
  goto done;
 }

 FUNC_2(VAR_5, VAR_4,
     "boot did not find target EEPROM entry, try OTP next: %d\n",
     VAR_6);

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_7(VAR_5, "failed to run otp: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5->cal_mode = VAR_3;

done:
 FUNC_2(VAR_5, VAR_4, "boot using calibration mode %s\n",
     FUNC_0(VAR_5->cal_mode));
 return 0;
}
