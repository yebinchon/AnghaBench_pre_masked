
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_tlv_swba_parse {int tim_done; int noa_done; void const* ev; } ;
struct ath10k {int dummy; } ;




 int FUNC_0 (struct ath10k*,void const*,int,int ,struct wmi_tlv_swba_parse*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_2, u16 VAR_3, u16 VAR_4,
         const void *VAR_5, void *VAR_6)
{
 struct wmi_tlv_swba_parse *VAR_7 = VAR_6;
 int VAR_8;

 switch (VAR_3) {
 case 128:
  VAR_7->ev = VAR_5;
  break;
 case 129:
  if (!VAR_7->tim_done) {
   VAR_7->tim_done = 1;
   VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_4,
        VAR_1,
        VAR_7);
   if (VAR_8)
    return VAR_8;
  } else if (!VAR_7->noa_done) {
   VAR_7->noa_done = 1;
   VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_4,
        VAR_0,
        VAR_7);
   if (VAR_8)
    return VAR_8;
  }
  break;
 default:
  break;
 }
 return 0;
}
