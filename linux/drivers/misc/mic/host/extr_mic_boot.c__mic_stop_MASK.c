
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {int dma_mbdev; int scdev; int vpdev; } ;
struct cosm_device {int dummy; } ;


 struct mic_device* FUNC_0 (struct cosm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mic_device*) ;
 int FUNC_3 (struct mic_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cosm_device *VAR_0, bool VAR_1)
{
 struct mic_device *VAR_2 = FUNC_0(VAR_0);






 FUNC_5(VAR_2->vpdev);
 FUNC_4(VAR_2->scdev);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2->dma_mbdev);
 FUNC_2(VAR_2);
}
