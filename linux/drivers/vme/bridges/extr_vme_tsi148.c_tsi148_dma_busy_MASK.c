
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vme_bridge *VAR_3, int VAR_4)
{
 u32 VAR_5;
 struct tsi148_driver *VAR_6;

 VAR_6 = VAR_3->driver_priv;

 VAR_5 = FUNC_0(VAR_6->base + VAR_0[VAR_4] +
  VAR_2);

 if (VAR_5 & VAR_1)
  return 0;
 else
  return 1;

}
