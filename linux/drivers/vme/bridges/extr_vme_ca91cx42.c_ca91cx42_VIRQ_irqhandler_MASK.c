
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct ca91cx42_driver* driver_priv; } ;
struct ca91cx42_driver {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vme_bridge*,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct vme_bridge *VAR_1,
 int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 struct ca91cx42_driver *VAR_6;

 VAR_6 = VAR_1->driver_priv;


 for (VAR_4 = 7; VAR_4 > 0; VAR_4--) {
  if (VAR_2 & (1 << VAR_4)) {
   VAR_3 = FUNC_0(VAR_6->base +
    VAR_0[VAR_4]) & 0xff;

   FUNC_1(VAR_1, VAR_4, VAR_3);

   VAR_5 |= (1 << VAR_4);
  }
 }

 return VAR_5;
}
