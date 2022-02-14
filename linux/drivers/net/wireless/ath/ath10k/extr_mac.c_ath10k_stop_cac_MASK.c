
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dev_flags; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_2)
{
 FUNC_3(&VAR_2->conf_mutex);


 if (!FUNC_4(VAR_0, &VAR_2->dev_flags))
  return 0;

 FUNC_2(VAR_0, &VAR_2->dev_flags);
 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_1, "mac cac finished\n");

 return 0;
}
