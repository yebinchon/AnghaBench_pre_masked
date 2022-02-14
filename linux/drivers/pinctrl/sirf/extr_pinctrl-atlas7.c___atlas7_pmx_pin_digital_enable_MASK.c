
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atlas7_pmx {int dummy; } ;
struct atlas7_pad_config {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct atlas7_pmx*,struct atlas7_pad_config*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct atlas7_pmx *VAR_1,
   struct atlas7_pad_config *VAR_2, u32 VAR_3)
{

 if (VAR_2->type != VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, 1);
}
