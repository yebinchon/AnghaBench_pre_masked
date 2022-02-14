
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct tb_switch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct tb_switch*,scalar_t__*) ;
 int FUNC_2 (struct tb_switch*,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (struct tb_switch*,char*,scalar_t__,scalar_t__) ;

int FUNC_4(struct tb_switch *VAR_2, u64 *VAR_3)
{
 u8 VAR_4[9];
 u16 VAR_5;
 u8 VAR_6;
 int VAR_7 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 == 0)
  return -VAR_1;


 VAR_7 = FUNC_2(VAR_2, VAR_5, VAR_4, 9);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_0(VAR_4 + 1, 8);
 if (VAR_6 != VAR_4[0]) {
  FUNC_3(VAR_2, "uid crc8 mismatch (expected: %#x, got: %#x)\n",
    VAR_4[0], VAR_6);
  return -VAR_0;
 }

 *VAR_3 = *(u64 *)(VAR_4+1);
 return 0;
}
