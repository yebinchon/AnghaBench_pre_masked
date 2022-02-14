
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_ntp_val {scalar_t__ newval; scalar_t__ oldval; } ;
struct audit_ntp_data {struct audit_ntp_val* vals; } ;
typedef enum audit_ntp_type { ____Placeholder_audit_ntp_type } audit_ntp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char*,char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct audit_ntp_data *VAR_2,
         const char *VAR_3, enum audit_ntp_type VAR_4)
{
 const struct audit_ntp_val *VAR_5 = &VAR_2->vals[VAR_4];

 if (VAR_5->newval == VAR_5->oldval)
  return;

 FUNC_1(FUNC_0(), VAR_1, VAR_0,
    "op=%s old=%lli new=%lli", VAR_3, VAR_5->oldval, VAR_5->newval);
}
