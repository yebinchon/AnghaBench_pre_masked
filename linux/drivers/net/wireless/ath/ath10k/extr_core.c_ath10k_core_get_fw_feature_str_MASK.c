
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ath10k_fw_features { ____Placeholder_ath10k_fw_features } ath10k_fw_features ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int* VAR_1 ;
 unsigned int FUNC_3 (char*,size_t,char*,int) ;

__attribute__((used)) static unsigned int FUNC_4(char *VAR_2,
         size_t VAR_3,
         enum ath10k_fw_features VAR_4)
{

 FUNC_1(FUNC_0(VAR_1) !=
       VAR_0);

 if (VAR_4 >= FUNC_0(VAR_1) ||
     FUNC_2(!VAR_1[VAR_4])) {
  return FUNC_3(VAR_2, VAR_3, "bit%d", VAR_4);
 }

 return FUNC_3(VAR_2, VAR_3, "%s", VAR_1[VAR_4]);
}
