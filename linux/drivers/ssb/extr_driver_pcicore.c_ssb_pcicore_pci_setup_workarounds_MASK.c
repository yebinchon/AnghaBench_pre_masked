
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_pcicore {struct ssb_device* dev; } ;
struct TYPE_2__ {int revision; } ;
struct ssb_device {TYPE_1__ id; struct ssb_bus* bus; } ;
struct ssb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ssb_pcicore*,int ) ;
 int FUNC_1 (struct ssb_pcicore*,int ,int) ;
 int FUNC_2 (struct ssb_bus*) ;
 int FUNC_3 (struct ssb_device*,int ) ;
 int FUNC_4 (struct ssb_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ssb_pcicore *VAR_8)
{
 struct ssb_device *VAR_9 = VAR_8->dev;
 struct ssb_bus *VAR_10 = VAR_9->bus;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_8, VAR_4);
 VAR_11 |= VAR_7;
 VAR_11 |= VAR_5;
 FUNC_1(VAR_8, VAR_4, VAR_11);

 if (VAR_9->id.revision < 5) {
  VAR_11 = FUNC_3(VAR_9, VAR_0);
  VAR_11 &= ~VAR_3;
  VAR_11 |= 2;
  VAR_11 &= ~VAR_1;
  VAR_11 |= 3 << VAR_2;
  FUNC_4(VAR_9, VAR_0, VAR_11);
  FUNC_2(VAR_10);
 } else if (VAR_9->id.revision >= 11) {
  VAR_11 = FUNC_0(VAR_8, VAR_4);
  VAR_11 |= VAR_6;
  FUNC_1(VAR_8, VAR_4, VAR_11);
 }
}
