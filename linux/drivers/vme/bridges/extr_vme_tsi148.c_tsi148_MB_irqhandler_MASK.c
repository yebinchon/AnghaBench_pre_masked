
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct vme_bridge *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;
 struct tsi148_driver *VAR_8;

 VAR_8 = VAR_3->driver_priv;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_4 & VAR_2[VAR_5]) {
   VAR_6 = FUNC_1(VAR_8->base + VAR_0[VAR_5]);
   FUNC_0(VAR_3->parent, "VME Mailbox %d received"
    ": 0x%x\n", VAR_5, VAR_6);
   VAR_7 |= VAR_1[VAR_5];
  }
 }

 return VAR_7;
}
