
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  FUNC_0("Enable notch filter\n");
  FUNC_2(VAR_2, VAR_1+1, FUNC_1(VAR_2, VAR_1+1) | VAR_0);
 } else {
  FUNC_0("Disable notch filter\n");
  FUNC_2(VAR_2, VAR_1+1, FUNC_1(VAR_2, VAR_1+1) & ~VAR_0);
 }
}
