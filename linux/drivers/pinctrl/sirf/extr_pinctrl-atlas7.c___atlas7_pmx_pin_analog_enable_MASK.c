
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atlas7_pmx {int dummy; } ;
struct atlas7_pad_config {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct atlas7_pmx*,struct atlas7_pad_config*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct atlas7_pmx *VAR_2,
   struct atlas7_pad_config *VAR_3, u32 VAR_4)
{

 if (VAR_3->type != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, 0);
}
