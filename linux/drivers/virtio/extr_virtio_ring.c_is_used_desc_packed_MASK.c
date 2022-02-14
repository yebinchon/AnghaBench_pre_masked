
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_5__ {TYPE_1__* desc; } ;
struct TYPE_6__ {TYPE_2__ vring; } ;
struct vring_virtqueue {TYPE_3__ packed; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct vring_virtqueue *VAR_2,
           u16 VAR_3, bool VAR_4)
{
 bool VAR_5, VAR_6;
 u16 VAR_7;

 VAR_7 = FUNC_0(VAR_2->packed.vring.desc[VAR_3].flags);
 VAR_5 = !!(VAR_7 & (1 << VAR_0));
 VAR_6 = !!(VAR_7 & (1 << VAR_1));

 return VAR_5 == VAR_6 && VAR_6 == VAR_4;
}
