
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {TYPE_1__* hw; } ;
struct TYPE_2__ {scalar_t__* di; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct brcms_c_info *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->hw->di); VAR_1++)
  if (VAR_0->hw->di[VAR_1])
   VAR_2 += FUNC_1(VAR_0->hw->di[VAR_1]);
 return VAR_2;
}
