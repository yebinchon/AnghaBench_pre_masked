
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mic_mw {int dummy; } ;
struct mic_device {struct mic_mw mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int,unsigned long*) ;
 unsigned long FUNC_2 (struct mic_mw*,scalar_t__) ;
 int FUNC_3 (struct mic_mw*,unsigned long,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct mic_device *VAR_2,
    int VAR_3, int VAR_4, bool VAR_5)
{
 unsigned long VAR_6;
 struct mic_mw *VAR_7 = &VAR_2->mmio;
 u32 VAR_8 = VAR_0 +
  VAR_1 + VAR_3 * 4;

 VAR_6 = FUNC_2(VAR_7, VAR_8);
 if (VAR_5)
  FUNC_1(VAR_4, &VAR_6);
 else
  FUNC_0(VAR_4, &VAR_6);
 FUNC_3(VAR_7, VAR_6, VAR_8);
}
