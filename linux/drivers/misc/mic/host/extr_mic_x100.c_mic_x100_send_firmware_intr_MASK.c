
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct mic_mw {int dummy; } ;
struct mic_device {struct mic_mw mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mic_mw*,int,scalar_t__) ;
 int FUNC_1 (struct mic_device*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mic_device *VAR_3)
{
 u32 VAR_4;
 u64 VAR_5 = VAR_1;
 int VAR_6 = VAR_0;
 struct mic_mw *VAR_7 = &VAR_3->mmio;





 VAR_4 = (VAR_6 | (1 << 13));

 FUNC_0(VAR_7, FUNC_1(VAR_3),
         VAR_2 + VAR_5 + 4);


 FUNC_2();
 FUNC_0(VAR_7, VAR_4,
         VAR_2 + VAR_5);
}
