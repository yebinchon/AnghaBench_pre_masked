
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct uwb_dev_addr {int* data; } ;


 scalar_t__ FUNC_0 (struct uwb_rc*,struct uwb_dev_addr*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_dev_addr*) ;

int FUNC_3(struct uwb_rc *VAR_0)
{
 struct uwb_dev_addr VAR_1;

 do {
  FUNC_1(VAR_1.data, sizeof(VAR_1.data));
 } while (VAR_1.data[0] == 0x00 || VAR_1.data[0] == 0xff
   || FUNC_0(VAR_0, &VAR_1));

 return FUNC_2(VAR_0, &VAR_1);
}
