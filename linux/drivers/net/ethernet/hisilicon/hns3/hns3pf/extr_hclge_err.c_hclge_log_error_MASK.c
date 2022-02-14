
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_hw_error {int int_msk; scalar_t__ reset_level; scalar_t__ msg; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,char*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, char *VAR_2,
       const struct hclge_hw_error *VAR_3,
       u32 VAR_4, unsigned long *VAR_5)
{
 while (VAR_3->msg) {
  if (VAR_3->int_msk & VAR_4) {
   FUNC_0(VAR_1, "%s %s found [error status=0x%x]\n",
    VAR_2, VAR_3->msg, VAR_4);
   if (VAR_3->reset_level &&
       VAR_3->reset_level != VAR_0)
    FUNC_1(VAR_3->reset_level, VAR_5);
  }
  VAR_3++;
 }
}
