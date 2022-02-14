
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (char*,struct device_node*) ;
 int FUNC_4 (char*,struct device_node*,...) ;

int FUNC_5(struct device_node *VAR_1, u32 *VAR_2)
{
 const u32 *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1, "voltage-ranges", &VAR_4);
 if (!VAR_3) {
  FUNC_3("%pOF: voltage-ranges unspecified\n", VAR_1);
  return 0;
 }
 VAR_4 = VAR_4 / sizeof(*VAR_3) / 2;
 if (!VAR_4) {
  FUNC_4("%pOF: voltage-ranges empty\n", VAR_1);
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  const int VAR_6 = VAR_5 * 2;
  u32 VAR_7;

  VAR_7 = FUNC_1(
    FUNC_0(VAR_3[VAR_6]),
    FUNC_0(VAR_3[VAR_6 + 1]));
  if (!VAR_7) {
   FUNC_4("%pOF: voltage-range #%d is invalid\n",
    VAR_1, VAR_5);
   return -VAR_0;
  }
  *VAR_2 |= VAR_7;
 }

 return 1;
}
