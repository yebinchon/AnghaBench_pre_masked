
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,void*,size_t) ;
 int FUNC_1 (struct ath10k*,void**,size_t*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1)
{
 size_t VAR_2;
 void *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_3, &VAR_2);
 if (VAR_4) {
  if (VAR_4 != -VAR_0)
   FUNC_2(VAR_1, "failed to read calibration data from EEPROM: %d\n",
        VAR_4);
  goto out_free;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_1, "failed to download calibration data from EEPROM: %d\n",
       VAR_4);
  goto out_free;
 }

 VAR_4 = 0;

out_free:
 FUNC_3(VAR_3);

 return VAR_4;
}
