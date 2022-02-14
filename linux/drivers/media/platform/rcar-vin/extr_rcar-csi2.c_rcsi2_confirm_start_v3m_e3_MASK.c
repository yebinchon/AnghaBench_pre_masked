
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_csi2 {int dummy; } ;
struct phtw_value {int data; int code; } ;


 int FUNC_0 (struct rcar_csi2*,struct phtw_value const*) ;

__attribute__((used)) static int FUNC_1(struct rcar_csi2 *VAR_0)
{
 static const struct phtw_value VAR_1[] = {
  { .data = 0xee, .code = 0x34 },
  { .data = 0xee, .code = 0x44 },
  { .data = 0xee, .code = 0x54 },
  { .data = 0xee, .code = 0x84 },
  { .data = 0xee, .code = 0x94 },
  { },
 };

 return FUNC_0(VAR_0, VAR_1);
}
