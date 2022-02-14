
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vme_bridge *VAR_3)
{
 u32 VAR_4 = 0;
 struct tsi148_driver *VAR_5;

 VAR_5 = VAR_3->driver_priv;

 if (!VAR_2) {
  VAR_4 = FUNC_0(VAR_5->base + VAR_0);
  VAR_4 = VAR_4 & VAR_1;
 } else
  VAR_4 = VAR_2;

 return (int)VAR_4;
}
