
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_wmm_params_arg {int dummy; } ;
struct wmi_wmm_params {int dummy; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct wmi_wmm_params*,struct wmi_wmm_params_arg const*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1,
        const struct wmi_wmm_params_arg *VAR_2)
{
 struct wmi_wmm_params *VAR_3;
 struct wmi_tlv *VAR_4;

 VAR_4 = VAR_1;
 VAR_4->tag = FUNC_0(VAR_0);
 VAR_4->len = FUNC_0(sizeof(*VAR_3));
 VAR_3 = (void *)VAR_4->value;
 FUNC_1(VAR_3, VAR_2);

 return VAR_1 + sizeof(*VAR_4) + sizeof(*VAR_3);
}
