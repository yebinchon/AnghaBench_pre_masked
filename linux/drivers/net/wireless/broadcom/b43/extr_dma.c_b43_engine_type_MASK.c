
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;
struct TYPE_2__ {int bus_type; int sdev; int bdev; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct b43_wldev*,scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static enum b43_dmatype FUNC_5(struct b43_wldev *VAR_9)
{
 u32 VAR_10;
 u16 VAR_11;

 switch (VAR_9->dev->bus_type) {
 }

 VAR_11 = FUNC_0(0, 0);
 FUNC_2(VAR_9, VAR_11 + VAR_1, VAR_0);
 VAR_10 = FUNC_1(VAR_9, VAR_11 + VAR_1);
 if (VAR_10 & VAR_0)
  return VAR_3;
 return VAR_2;
}
