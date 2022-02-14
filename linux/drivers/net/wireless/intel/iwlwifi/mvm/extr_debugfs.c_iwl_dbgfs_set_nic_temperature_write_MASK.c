
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int temperature_test; int temperature; int mutex; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 scalar_t__ FUNC_3 (char*,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct iwl_mvm *VAR_5,
         char *VAR_6, size_t VAR_7,
         loff_t *VAR_8)
{
 int VAR_9;

 if (!FUNC_1(VAR_5) && !VAR_5->temperature_test)
  return -VAR_1;

 if (FUNC_3(VAR_6, 10, &VAR_9))
  return -VAR_0;

 if ((VAR_9 > VAR_3 &&
      VAR_9 != VAR_2) ||
     VAR_9 < VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_5->mutex);
 if (VAR_9 == VAR_2) {
  if (!VAR_5->temperature_test)
   goto out;

  VAR_5->temperature_test = 0;




  VAR_5->temperature = 0;
 } else {
  VAR_5->temperature_test = 1;
  VAR_5->temperature = VAR_9;
 }
 FUNC_0(VAR_5, "%sabling debug set temperature (temp = %d)\n",
         VAR_5->temperature_test ? "En" : "Dis" ,
         VAR_5->temperature);

 FUNC_2(VAR_5);

out:
 FUNC_5(&VAR_5->mutex);

 return VAR_7;
}
