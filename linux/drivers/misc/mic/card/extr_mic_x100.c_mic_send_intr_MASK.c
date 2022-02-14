
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_mw {int dummy; } ;
struct mic_device {struct mic_mw mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mic_mw*,int ,scalar_t__) ;
 int FUNC_1 () ;

void FUNC_2(struct mic_device *VAR_4, int VAR_5)
{
 struct mic_mw *VAR_6 = &VAR_4->mmio;

 if (VAR_5 > VAR_0)
  return;

 FUNC_1();
 FUNC_0(VAR_6, VAR_3,
         VAR_1 +
         (VAR_2 + (4 * VAR_5)));
}
