
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int*,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u8 FUNC_2(struct mxl111sf_state *VAR_4)
{
 u8 VAR_5 = 0;
 u8 VAR_6[26];

 FUNC_1("()");

 VAR_6[0] = VAR_3;
 VAR_6[1] = 0x00;

 VAR_6[2] = VAR_1;
 VAR_6[3] = 0x00;
 VAR_6[4] = 0x00;

 VAR_6[5] = VAR_0;
 VAR_6[6] = 0x00;
 VAR_6[7] = 0x00;
 VAR_6[8] = VAR_2;

 FUNC_0(VAR_4, 0, VAR_6, VAR_6);

 if (0x08 == (VAR_6[1] & 0x08))
  VAR_5 = 1;

 if ((VAR_6[5] & 0x02) == 0x02)
  FUNC_1("(buf[5] & 0x02) == 0x02");

 return VAR_5;
}
