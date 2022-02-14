
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct ksz_switch {void** other_addr; } ;
struct ksz_hw {struct ksz_switch* ksz_switch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ksz_hw*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_1)
{
 int VAR_2;
 u16 VAR_3[3];
 struct ksz_switch *VAR_4 = VAR_1->ksz_switch;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  VAR_3[VAR_2] = FUNC_0(VAR_1, VAR_2 + VAR_0);
 if ((VAR_3[0] || VAR_3[1] || VAR_3[2]) && VAR_3[0] != 0xffff) {
  VAR_4->other_addr[5] = (u8) VAR_3[0];
  VAR_4->other_addr[4] = (u8)(VAR_3[0] >> 8);
  VAR_4->other_addr[3] = (u8) VAR_3[1];
  VAR_4->other_addr[2] = (u8)(VAR_3[1] >> 8);
  VAR_4->other_addr[1] = (u8) VAR_3[2];
  VAR_4->other_addr[0] = (u8)(VAR_3[2] >> 8);
 }
}
