
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* otp; char* dir; } ;
struct TYPE_3__ {TYPE_2__ fw; } ;
struct ath6kl {int fw_otp_len; int * fw_otp; TYPE_1__ hw; } ;
typedef int filename ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct ath6kl*,char*,int **,int *) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_1)
{
 char VAR_2[100];
 int VAR_3;

 if (VAR_1->fw_otp != ((void*)0))
  return 0;

 if (VAR_1->hw.fw.otp == ((void*)0)) {
  FUNC_0(VAR_0,
      "no OTP file configured for this hw\n");
  return 0;
 }

 FUNC_3(VAR_2, sizeof(VAR_2), "%s/%s",
   VAR_1->hw.fw.dir, VAR_1->hw.fw.otp);

 VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_1->fw_otp,
       &VAR_1->fw_otp_len);
 if (VAR_3) {
  FUNC_1("Failed to get OTP file %s: %d\n",
      VAR_2, VAR_3);
  return VAR_3;
 }

 return 0;
}
