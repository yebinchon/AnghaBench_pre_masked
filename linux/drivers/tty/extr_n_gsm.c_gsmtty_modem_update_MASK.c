
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_dlci {int addr; int gsm; } ;
struct gsm_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gsm_control* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,struct gsm_control*) ;
 int FUNC_2 (struct gsm_dlci*) ;

__attribute__((used)) static int FUNC_3(struct gsm_dlci *VAR_3, u8 VAR_4)
{
 u8 VAR_5[5];
 struct gsm_control *VAR_6;
 int VAR_7 = 2;

 if (VAR_4)
  VAR_7++;

 VAR_5[0] = VAR_7 << 1 | VAR_1;
 VAR_5[1] = VAR_3->addr << 2 | 3;
 VAR_5[2] = FUNC_2(VAR_3) << 1 | VAR_1;
 if (VAR_4)
  VAR_5[3] = VAR_4 << 4 | 2 | VAR_1;
 VAR_6 = FUNC_0(VAR_3->gsm, VAR_0, VAR_5, VAR_7 + 1);
 if (VAR_6 == ((void*)0))
  return -VAR_2;
 return FUNC_1(VAR_3->gsm, VAR_6);
}
