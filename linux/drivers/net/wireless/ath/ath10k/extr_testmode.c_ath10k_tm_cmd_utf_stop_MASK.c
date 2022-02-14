
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ath10k {scalar_t__ state; int conf_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_3, struct nlattr *VAR_4[])
{
 int VAR_5;

 FUNC_1(VAR_3, VAR_0, "testmode cmd utf stop\n");

 FUNC_3(&VAR_3->conf_mutex);

 if (VAR_3->state != VAR_1) {
  VAR_5 = -VAR_2;
  goto out;
 }

 FUNC_0(VAR_3);

 VAR_5 = 0;

 FUNC_2(VAR_3, "UTF firmware stopped\n");

out:
 FUNC_4(&VAR_3->conf_mutex);
 return VAR_5;
}
