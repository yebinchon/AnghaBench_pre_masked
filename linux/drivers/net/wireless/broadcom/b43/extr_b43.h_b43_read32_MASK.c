
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int (* read32 ) (TYPE_1__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct b43_wldev *VAR_0, u16 VAR_1)
{
 return VAR_0->dev->read32(VAR_0->dev, VAR_1);
}
