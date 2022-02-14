
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_state {int linux_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct kgdb_state *VAR_7)
{
 FUNC_2(&VAR_5[1], (char *)VAR_3, VAR_1);

 if (VAR_4 && VAR_4 != VAR_2) {
  FUNC_0(VAR_6, -VAR_0);
 } else {
  FUNC_1(VAR_3, VAR_7->linux_regs);
  FUNC_3(VAR_6, "OK");
 }
}
