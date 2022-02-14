
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_pinctrl {int dev; } ;
typedef enum bcm2835_fsel { ____Placeholder_bcm2835_fsel } bcm2835_fsel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int * VAR_2 ;
 int FUNC_2 (struct bcm2835_pinctrl*,int ) ;
 int FUNC_3 (struct bcm2835_pinctrl*,int ,int) ;
 int FUNC_4 (int ,char*,int,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_5(
  struct bcm2835_pinctrl *VAR_3, unsigned VAR_4,
  enum bcm2835_fsel VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_4));
 enum bcm2835_fsel VAR_7 = (VAR_6 >> FUNC_1(VAR_4)) & VAR_1;

 FUNC_4(VAR_3->dev, "read %08x (%u => %s)\n", VAR_6, VAR_4,
   VAR_2[VAR_7]);

 if (VAR_7 == VAR_5)
  return;

 if (VAR_7 != VAR_0 && VAR_5 != VAR_0) {

  VAR_6 &= ~(VAR_1 << FUNC_1(VAR_4));
  VAR_6 |= VAR_0 << FUNC_1(VAR_4);

  FUNC_4(VAR_3->dev, "trans %08x (%u <= %s)\n", VAR_6, VAR_4,
    VAR_2[VAR_0]);
  FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_6);
 }

 VAR_6 &= ~(VAR_1 << FUNC_1(VAR_4));
 VAR_6 |= VAR_5 << FUNC_1(VAR_4);

 FUNC_4(VAR_3->dev, "write %08x (%u <= %s)\n", VAR_6, VAR_4,
   VAR_2[VAR_5]);
 FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_6);
}
