
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pxa_camera_dev {unsigned long ciclk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pxa_camera_dev *VAR_1,
         unsigned long VAR_2)
{

 u32 VAR_3 = VAR_1->ciclk / VAR_2 + 1;

 FUNC_0(VAR_3, VAR_1->base + VAR_0);
}
