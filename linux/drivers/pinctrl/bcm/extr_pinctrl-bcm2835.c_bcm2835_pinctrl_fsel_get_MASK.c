
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_pinctrl {int dev; } ;
typedef enum bcm2835_fsel { ____Placeholder_bcm2835_fsel } bcm2835_fsel ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int * VAR_1 ;
 int FUNC_2 (struct bcm2835_pinctrl*,int ) ;
 int FUNC_3 (int ,char*,int,unsigned int,int ) ;

__attribute__((used)) static inline enum bcm2835_fsel FUNC_4(
  struct bcm2835_pinctrl *VAR_2, unsigned VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_3));
 enum bcm2835_fsel VAR_5 = (VAR_4 >> FUNC_1(VAR_3)) & VAR_0;

 FUNC_3(VAR_2->dev, "get %08x (%u => %s)\n", VAR_4, VAR_3,
   VAR_1[VAR_5]);

 return VAR_5;
}
