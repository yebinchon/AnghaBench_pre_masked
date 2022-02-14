
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {scalar_t__ vdm_state; int vdo_retry; int vdm_state_machine; int wq; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tcpm_port*,int const*,int,int*) ;
 int FUNC_6 (struct tcpm_port*,int,int*,int) ;

__attribute__((used)) static void FUNC_7(struct tcpm_port *VAR_7,
        const __le32 *VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 u32 VAR_11[8] = { };
 u32 VAR_12 = FUNC_2(VAR_8[0]);

 if (VAR_7->vdm_state == VAR_3) {

  if (FUNC_0(VAR_12) == VAR_1) {
   VAR_7->vdm_state = VAR_5;
   VAR_7->vdo_retry = (VAR_12 & ~VAR_6) |
    VAR_0;
   FUNC_3(VAR_7->wq, &VAR_7->vdm_state_machine,
      FUNC_4(VAR_2));
   return;
  }
  VAR_7->vdm_state = VAR_4;
 }

 if (FUNC_1(VAR_12))
  VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_11);

 if (VAR_10 > 0) {
  FUNC_6(VAR_7, VAR_11[0], &VAR_11[1], VAR_10 - 1);
  FUNC_3(VAR_7->wq, &VAR_7->vdm_state_machine, 0);
 }
}
