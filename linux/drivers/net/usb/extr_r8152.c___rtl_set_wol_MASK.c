
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_18, u32 VAR_19)
{
 u32 VAR_20;

 FUNC_2(VAR_18, VAR_5, VAR_10, VAR_1);

 VAR_20 = FUNC_1(VAR_18, VAR_5, VAR_8);
 VAR_20 &= ~VAR_3;
 if (VAR_19 & VAR_16)
  VAR_20 |= VAR_3;
 FUNC_3(VAR_18, VAR_5, VAR_8, VAR_20);

 VAR_20 = FUNC_1(VAR_18, VAR_5, VAR_9);
 VAR_20 &= ~(VAR_11 | VAR_0 | VAR_6);
 if (VAR_19 & VAR_17)
  VAR_20 |= VAR_11;
 if (VAR_19 & VAR_13)
  VAR_20 |= VAR_0;
 if (VAR_19 & VAR_15)
  VAR_20 |= VAR_6;
 FUNC_3(VAR_18, VAR_5, VAR_9, VAR_20);

 FUNC_2(VAR_18, VAR_5, VAR_10, VAR_2);

 VAR_20 = FUNC_1(VAR_18, VAR_5, VAR_7);
 VAR_20 &= ~VAR_4;
 if (VAR_19 & VAR_14)
  VAR_20 |= VAR_4;
 FUNC_3(VAR_18, VAR_5, VAR_7, VAR_20);

 if (VAR_19 & VAR_12)
  FUNC_0(&VAR_18->udev->dev, 1);
 else
  FUNC_0(&VAR_18->udev->dev, 0);
}
