
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngene {struct ngene* vin_buf; struct ngene* ain_buf; struct ngene* tsin_buf; struct ngene* tsout_buf; scalar_t__ iomem; } ;


 int FUNC_0 (struct ngene*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ngene*) ;

__attribute__((used)) static void FUNC_3(struct ngene *VAR_0)
{
 if (VAR_0->iomem)
  FUNC_1(VAR_0->iomem);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->tsout_buf);
 FUNC_2(VAR_0->tsin_buf);
 FUNC_2(VAR_0->ain_buf);
 FUNC_2(VAR_0->vin_buf);
 FUNC_2(VAR_0);
}
