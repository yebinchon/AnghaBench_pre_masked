
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct wilc_conn_info {scalar_t__ resp_ies_len; int resp_ies; int status; } ;
struct assoc_resp {int status_code; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(u8 *VAR_3, u32 VAR_4,
          struct wilc_conn_info *VAR_5)
{
 u8 *VAR_6;
 u16 VAR_7;
 struct assoc_resp *VAR_8 = (struct assoc_resp *)VAR_3;

 VAR_5->status = FUNC_1(VAR_8->status_code);
 if (VAR_5->status == VAR_2) {
  VAR_6 = &VAR_3[sizeof(*VAR_8)];
  VAR_7 = VAR_4 - sizeof(*VAR_8);

  VAR_5->resp_ies = FUNC_0(VAR_6, VAR_7, VAR_1);
  if (!VAR_5->resp_ies)
   return -VAR_0;

  VAR_5->resp_ies_len = VAR_7;
 }

 return 0;
}
