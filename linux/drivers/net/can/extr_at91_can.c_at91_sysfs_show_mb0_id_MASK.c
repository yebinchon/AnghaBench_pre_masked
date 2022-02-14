
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct at91_priv {int mb0_id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct at91_priv* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct at91_priv *VAR_5 = FUNC_0(FUNC_2(VAR_2));

 if (VAR_5->mb0_id & VAR_0)
  return FUNC_1(VAR_4, VAR_1, "0x%08x\n", VAR_5->mb0_id);
 else
  return FUNC_1(VAR_4, VAR_1, "0x%03x\n", VAR_5->mb0_id);
}
