
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atp_unit {int dummy; } ;


 int FUNC_0 (struct atp_unit*,int,int) ;
 int FUNC_1 (struct atp_unit*,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct atp_unit *VAR_0, u8 VAR_1, u8 VAR_2)
{
 FUNC_1(VAR_0, VAR_1, 0, VAR_2 | 0x08);
 FUNC_1(VAR_0, VAR_1, 0x18, 0);
 while ((FUNC_0(VAR_0, VAR_1, 0x1f) & 0x80) == 0)
  FUNC_2(1);
 FUNC_0(VAR_0, VAR_1, 0x17);
 FUNC_1(VAR_0, VAR_1, 1, 8);
 FUNC_1(VAR_0, VAR_1, 2, 0x7f);
 FUNC_1(VAR_0, VAR_1, 0x11, 0x20);
}
