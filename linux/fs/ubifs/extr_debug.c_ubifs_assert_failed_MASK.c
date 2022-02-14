
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int assert_action; } ;





 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_info*,char*,char const*,char const*,int) ;
 int FUNC_3 (struct ubifs_info*,int ) ;

void FUNC_4(struct ubifs_info *VAR_1, const char *VAR_2,
    const char *VAR_3, int VAR_4)
{
 FUNC_2(VAR_1, "UBIFS assert failed: %s, in %s:%u", VAR_2, VAR_3, VAR_4);

 switch (VAR_1->assert_action) {
  case 130:
  FUNC_0();
  break;

  case 128:
  FUNC_3(VAR_1, -VAR_0);
  break;

  case 129:
  default:
  FUNC_1();
  break;

 }
}
