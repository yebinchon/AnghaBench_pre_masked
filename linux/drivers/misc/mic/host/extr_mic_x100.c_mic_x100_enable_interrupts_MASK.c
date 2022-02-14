
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mic_mw {int dummy; } ;
struct TYPE_2__ {int num_vectors; } ;
struct mic_device {TYPE_1__ irq_info; struct mic_mw mmio; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mic_mw*,int) ;
 int FUNC_3 (struct mic_mw*,int,int) ;

__attribute__((used)) static void FUNC_4(struct mic_device *VAR_3)
{
 u32 VAR_4;
 struct mic_mw *VAR_5 = &VAR_3->mmio;
 u32 VAR_6 = VAR_0 + VAR_2;
 u32 VAR_7 = VAR_0 + VAR_1;

 VAR_4 = FUNC_2(VAR_5, VAR_6);
 VAR_4 |= FUNC_0(0xf) | FUNC_1(0xff);
 FUNC_3(VAR_5, VAR_4, VAR_6);





 if (VAR_3->irq_info.num_vectors > 1) {
  VAR_4 = FUNC_2(VAR_5, VAR_7);
  VAR_4 |= FUNC_0(0xf) |
   FUNC_1(0xff);
  FUNC_3(VAR_5, VAR_4, VAR_7);
 }
}
