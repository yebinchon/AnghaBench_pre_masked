
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xz_dec {int dummy; } ;
struct xz_buf {int dummy; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct xz_dec*,struct xz_buf*) ;

__attribute__((used)) static int FUNC_2(struct xz_dec *VAR_2, struct xz_buf *VAR_3,
     bool *VAR_4)
{
 enum xz_ret VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 switch (VAR_5) {
 case 128:
  *VAR_4 = 1;
  return 0;
 case 130:
  *VAR_4 = 0;
  return 0;
 case 131:
  FUNC_0("xz no memory\n");
  return -VAR_1;
 case 134:
  FUNC_0("xz file corrupted\n");
  return -VAR_0;
 case 133:
  FUNC_0("xz format not found\n");
  return -VAR_0;
 case 129:
  FUNC_0("unsupported xz option\n");
  return -VAR_0;
 case 132:
  FUNC_0("xz dictionary too small\n");
  return -VAR_0;
 default:
  FUNC_0("xz error %d\n", VAR_5);
  return -VAR_0;
 }
}
