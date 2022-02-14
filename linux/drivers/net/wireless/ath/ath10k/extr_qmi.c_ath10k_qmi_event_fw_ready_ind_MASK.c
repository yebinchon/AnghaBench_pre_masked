
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_qmi {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,int ) ;

__attribute__((used)) static int FUNC_2(struct ath10k_qmi *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;

 FUNC_0(VAR_3, VAR_0, "wifi fw ready event received\n");
 FUNC_1(VAR_3, VAR_1);

 return 0;
}
