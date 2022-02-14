
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {int fw_api; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (struct ath6kl*,int ) ;
 int FUNC_4 (struct ath6kl*) ;

int FUNC_5(struct ath6kl *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (VAR_6 == 0) {
  VAR_5->fw_api = 5;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_6 == 0) {
  VAR_5->fw_api = 4;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6 == 0) {
  VAR_5->fw_api = 3;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (VAR_6 == 0) {
  VAR_5->fw_api = 2;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->fw_api = 1;

out:
 FUNC_0(VAR_0, "using fw api %d\n", VAR_5->fw_api);

 return 0;
}
