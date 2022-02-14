
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_lpss {scalar_t__ type; scalar_t__ priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_lpss const*) ;
 int FUNC_1 (struct intel_lpss const*) ;
 int FUNC_2 (struct intel_lpss const*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const struct intel_lpss *VAR_4)
{
 u32 VAR_5 = VAR_3;


 FUNC_3(0, VAR_4->priv + VAR_1);

 FUNC_0(VAR_4);

 FUNC_2(VAR_4);

 if (!FUNC_1(VAR_4))
  return;


 if (VAR_4->type == VAR_0)
  FUNC_3(VAR_5, VAR_4->priv + VAR_2);
}
