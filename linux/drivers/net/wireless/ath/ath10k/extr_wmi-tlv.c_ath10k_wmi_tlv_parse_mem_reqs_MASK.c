
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wmi_svc_rdy_ev_arg {void const** mem_reqs; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (void const**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct ath10k *VAR_3, u16 VAR_4, u16 VAR_5,
         const void *VAR_6, void *VAR_7)
{
 struct wmi_svc_rdy_ev_arg *VAR_8 = VAR_7;
 int VAR_9;

 if (VAR_4 != VAR_2)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8->mem_reqs); VAR_9++) {
  if (!VAR_8->mem_reqs[VAR_9]) {
   VAR_8->mem_reqs[VAR_9] = VAR_6;
   return 0;
  }
 }

 return -VAR_0;
}
