
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_csi2 {int dummy; } ;
struct phtw_value {int data; int code; } ;


 int VAR_0 ;
 int FUNC_0 (struct rcar_csi2*,int,int) ;
 int FUNC_1 (struct rcar_csi2*,struct phtw_value const*) ;
 int FUNC_2 (struct rcar_csi2*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rcar_csi2 *VAR_1,
     unsigned int VAR_2)
{
 static const struct phtw_value VAR_3[] = {
  { .data = 0xcc, .code = 0xe2 },
  { .data = 0x01, .code = 0xe3 },
  { .data = 0x11, .code = 0xe4 },
  { .data = 0x01, .code = 0xe5 },
  { .data = 0x10, .code = 0x04 },
  { },
 };

 static const struct phtw_value VAR_4[] = {
  { .data = 0x38, .code = 0x08 },
  { .data = 0x01, .code = 0x00 },
  { .data = 0x4b, .code = 0xac },
  { .data = 0x03, .code = 0x00 },
  { .data = 0x80, .code = 0x07 },
  { },
 };

 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_2 != 0 && VAR_2 <= 250) {
  VAR_5 = FUNC_0(VAR_1, 0x39, 0x05);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_0,
         0xf1);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_1(VAR_1, VAR_4);
}
