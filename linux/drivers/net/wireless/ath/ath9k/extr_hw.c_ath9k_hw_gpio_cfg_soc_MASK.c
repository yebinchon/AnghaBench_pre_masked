
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gpio_requested; } ;
struct ath_hw {TYPE_1__ caps; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char const*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_2, u32 VAR_3, bool VAR_4,
      const char *VAR_5)
{
 if (VAR_2->caps.gpio_requested & FUNC_0(VAR_3))
  return;


 FUNC_1(VAR_3);

 if (FUNC_2(VAR_3, VAR_4 ? VAR_1 : VAR_0, VAR_5))
  return;

 VAR_2->caps.gpio_requested |= FUNC_0(VAR_3);
}
