
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int*,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u8 FUNC_2(struct mxl111sf_state *VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5[26];

 FUNC_1("()");

 VAR_5[0] = VAR_2;
 VAR_5[1] = 0x00;

 VAR_5[2] = VAR_0;
 VAR_5[3] = 0x00;
 VAR_5[4] = 0x00;

 VAR_5[5] = VAR_1;

 FUNC_0(VAR_3, 0, VAR_5, VAR_5);

 if (VAR_5[1] & 0x04)
  VAR_4 = 1;

 return VAR_4;
}
