
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int vdm_state_machine; int wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct tcpm_port*,int,int const*,int) ;

__attribute__((used)) static void FUNC_5(struct tcpm_port *VAR_3, u32 VAR_4, int VAR_5,
     const u32 *VAR_6, int VAR_7)
{
 u32 VAR_8;

 if (FUNC_2(VAR_7 > VAR_2 - 1))
  VAR_7 = VAR_2 - 1;


 VAR_8 = FUNC_1(VAR_4, ((VAR_4 & VAR_1) == VAR_1) ?
   1 : (FUNC_0(VAR_5) <= VAR_0), VAR_5);
 FUNC_4(VAR_3, VAR_8, VAR_6, VAR_7);

 FUNC_3(VAR_3->wq, &VAR_3->vdm_state_machine, 0);
}
