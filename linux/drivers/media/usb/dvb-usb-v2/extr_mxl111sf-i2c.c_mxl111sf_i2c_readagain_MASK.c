
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mxl111sf_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct mxl111sf_state*) ;
 int FUNC_1 (struct mxl111sf_state*) ;
 int FUNC_2 (struct mxl111sf_state*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct mxl111sf_state *VAR_0,
      u8 VAR_1, u8 *VAR_2)
{
 u8 VAR_3[26];
 u8 VAR_4[24];
 u8 VAR_5 = 0;
 u8 VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_3("read %d bytes", VAR_1);

 while ((VAR_6 == 0) && (VAR_5++ < 5))
  VAR_6 = FUNC_0(VAR_0);

 VAR_3[0] = 0xDD;
 VAR_3[1] = 0x00;

 for (VAR_5 = 2; VAR_5 < 26; VAR_5++)
  VAR_3[VAR_5] = 0xFE;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3[2+(VAR_5*3)] = 0x0C;
  VAR_3[3+(VAR_5*3)] = 0x00;
  VAR_3[4+(VAR_5*3)] = 0x00;
 }

 FUNC_2(VAR_0, 0, VAR_3, VAR_4);


 if (FUNC_1(VAR_0) == 1) {
  FUNC_3("error!");
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_2[VAR_5] = VAR_4[(VAR_5*3)+1];
   FUNC_3("%02x\t %02x",
    VAR_4[(VAR_5*3)+1],
    VAR_4[(VAR_5*3)+2]);
  }

  VAR_7 = 1;
 }

 return VAR_7;
}
