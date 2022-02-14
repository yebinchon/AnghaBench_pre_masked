
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct htc_target {int dummy; } ;
struct ath6kl_htc_credit_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct htc_target*,struct ath6kl_htc_credit_info*,int *,int) ;
 int FUNC_1 (struct ath6kl_htc_credit_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct htc_target *VAR_5,
          struct ath6kl_htc_credit_info *VAR_6)
{
 u16 VAR_7[5];

 FUNC_1(VAR_6, 0, sizeof(struct ath6kl_htc_credit_info));

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_4;
 VAR_7[2] = VAR_3;
 VAR_7[3] = VAR_1;
 VAR_7[4] = VAR_2;


 FUNC_0(VAR_5, VAR_6, VAR_7, 5);

 return 0;
}
