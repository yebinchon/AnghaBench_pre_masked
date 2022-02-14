
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct b53_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* serdes_map_lane ) (struct b53_device*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct b53_device*,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct b53_device *VAR_1, int VAR_2)
{
 if (!VAR_1->ops->serdes_map_lane)
  return VAR_0;

 return VAR_1->ops->serdes_map_lane(VAR_1, VAR_2);
}
