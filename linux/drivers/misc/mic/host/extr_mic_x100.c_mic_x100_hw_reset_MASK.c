
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mic_mw {int dummy; } ;
struct mic_device {struct mic_mw mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mic_mw*,int) ;
 int FUNC_2 (struct mic_mw*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mic_device *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_0 + VAR_1;
 struct mic_mw *VAR_5 = &VAR_2->mmio;


 FUNC_0();

 VAR_3 = FUNC_1(VAR_5, VAR_4);
 VAR_3 |= 0x1;
 FUNC_2(VAR_5, VAR_3, VAR_4);




 FUNC_3(1000);
}
