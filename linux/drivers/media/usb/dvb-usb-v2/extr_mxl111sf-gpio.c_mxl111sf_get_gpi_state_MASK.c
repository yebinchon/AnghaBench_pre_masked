
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*,int,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mxl111sf_state *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 FUNC_1("(0x%02x)", VAR_2);

 *VAR_3 = 0;

 switch (VAR_2) {
 case 0:
 case 1:
 case 2:
 case 3:
  VAR_4 = FUNC_0(VAR_1, 0x23, &VAR_5);
  if (FUNC_2(VAR_4))
   goto fail;
  *VAR_3 = (VAR_5 >> (VAR_2 + 4)) & 0x01;
  break;
 case 4:
 case 5:
 case 6:
 case 7:
  VAR_4 = FUNC_0(VAR_1, 0x2f, &VAR_5);
  if (FUNC_2(VAR_4))
   goto fail;
  *VAR_3 = (VAR_5 >> VAR_2) & 0x01;
  break;
 case 8:
 case 9:
 case 10:
  VAR_4 = FUNC_0(VAR_1, 0x22, &VAR_5);
  if (FUNC_2(VAR_4))
   goto fail;
  *VAR_3 = (VAR_5 >> (VAR_2 - 3)) & 0x01;
  break;
 default:
  return -VAR_0;
 }
fail:
 return VAR_4;
}
