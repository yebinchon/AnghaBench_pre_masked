
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct device*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, u8 *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3, 1);

 if (VAR_4 < 0)
  return -VAR_0;
 FUNC_0(VAR_2, "status = 0x%.2x (%d)\n", VAR_3[0], VAR_3[0]);
 return 0;
}
