
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;
typedef enum rf_radio_path { ____Placeholder_rf_radio_path } rf_radio_path ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0, enum rf_radio_path VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (VAR_2 == 0xfe) {
  FUNC_0(50);
 } else if (VAR_2 == 0xfd) {
  FUNC_0(5);
 } else if (VAR_2 == 0xfc) {
  FUNC_0(1);
 } else if (VAR_2 == 0xfb) {
  FUNC_2(50);
 } else if (VAR_2 == 0xfa) {
  FUNC_2(5);
 } else if (VAR_2 == 0xf9) {
  FUNC_2(1);
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(1);
 }
}
