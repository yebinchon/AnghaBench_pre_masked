
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rzn1_pinctrl {TYPE_2__* lev2; TYPE_1__* lev1; int dev; } ;
struct TYPE_4__ {int * conf; } ;
struct TYPE_3__ {int * conf; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rzn1_pinctrl*,int,int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct rzn1_pinctrl *VAR_15, unsigned int VAR_16,
    u32 VAR_17, u8 VAR_18)
{
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;


 if (VAR_17 >= VAR_6 &&
     VAR_17 <= VAR_9) {
  int VAR_23;
  u32 VAR_24;

  if (VAR_17 <= VAR_10)
   VAR_23 = 0;
  else
   VAR_23 = 1;


  if (VAR_17 <= VAR_7) {
   VAR_24 = VAR_17 - VAR_6;
   VAR_17 = VAR_1;
  } else if (VAR_17 <= VAR_5) {
   VAR_24 = VAR_17 - VAR_4;
   VAR_17 = VAR_2;
  } else if (VAR_17 <= VAR_11) {
   VAR_24 = VAR_17 - VAR_10;
   VAR_17 = VAR_1;
  } else {
   VAR_24 = VAR_17 - VAR_8;
   VAR_17 = VAR_2;
  }
  FUNC_3(VAR_15, VAR_23, VAR_24);
 }


 if (VAR_16 >= FUNC_0(VAR_15->lev1->conf) ||
     VAR_17 >= VAR_6)
  return -VAR_0;

 VAR_21 = FUNC_2(&VAR_15->lev1->conf[VAR_16]);
 VAR_19 = VAR_21;
 VAR_22 = FUNC_2(&VAR_15->lev2->conf[VAR_16]);
 VAR_20 = VAR_22;

 FUNC_1(VAR_15->dev, "setting func for pin %u to %u\n", VAR_16, VAR_17);

 VAR_21 &= ~(VAR_14 << VAR_12);

 if (VAR_17 < VAR_3) {
  VAR_21 |= (VAR_17 << VAR_12);
 } else {
  VAR_21 |= (VAR_13 << VAR_12);

  VAR_22 = VAR_17 - VAR_3;
 }


 if (VAR_21 != VAR_19 || VAR_22 != VAR_20) {
  FUNC_4(VAR_21, &VAR_15->lev1->conf[VAR_16]);
  FUNC_4(VAR_22, &VAR_15->lev2->conf[VAR_16]);
 }

 return 0;
}
