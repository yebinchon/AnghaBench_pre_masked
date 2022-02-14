
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int FUNC_0 (struct mxl111sf_state*,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mxl111sf_state *VAR_0)
{
 u8 VAR_1 = 0x07;
 int VAR_2, VAR_3;

 FUNC_1("()");

 for (VAR_2 = 3; VAR_2 < 8; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_2, (VAR_1 >> VAR_2) & 0x01);
  if (FUNC_2(VAR_3))
   break;
 }

 return VAR_3;
}
