
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct wil6210_priv*,char*,scalar_t__) ;
 int FUNC_1 (int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct wil6210_priv *VAR_2, u8 VAR_3,
        u8 VAR_4, u8 *VAR_5)
{
 if (!VAR_3) {
  *VAR_5 = 0;
  return 0;
 } else if (VAR_3 == VAR_1) {

  switch (VAR_4) {
  case 128:
   return FUNC_1(9, VAR_5);
  case 130:
   return FUNC_1(10, VAR_5);
  case 129:
   return FUNC_1(11, VAR_5);
  default:
   FUNC_0(VAR_2, "Unsupported edmg channel bitmap 0x%x\n",
    VAR_4);
   return -VAR_0;
  }
 } else {
  FUNC_0(VAR_2, "Unsupported EDMG BW configuration %d\n",
   VAR_3);
  return -VAR_0;
 }
}
