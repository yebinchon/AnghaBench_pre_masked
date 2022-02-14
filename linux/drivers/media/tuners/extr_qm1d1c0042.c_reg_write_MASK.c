
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf ;
typedef int u8 ;
struct qm1d1c0042_state {int i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct qm1d1c0042_state *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[2] = { VAR_2, VAR_3 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->i2c, VAR_4, sizeof(VAR_4));
 if (VAR_5 >= 0 && VAR_5 < sizeof(VAR_4))
  VAR_5 = -VAR_0;
 return (VAR_5 == sizeof(VAR_4)) ? 0 : VAR_5;
}
