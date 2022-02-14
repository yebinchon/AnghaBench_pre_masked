
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int (* block_read ) (TYPE_1__*,void*,size_t,int ,int ) ;} ;


 int FUNC_0 (TYPE_1__*,void*,size_t,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct b43_wldev *VAR_0, void *VAR_1,
     size_t VAR_2, u16 VAR_3, u8 VAR_4)
{
 VAR_0->dev->block_read(VAR_0->dev, VAR_1, VAR_2, VAR_3, VAR_4);
}
