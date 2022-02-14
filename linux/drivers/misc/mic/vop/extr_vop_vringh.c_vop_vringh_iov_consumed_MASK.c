
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vringh_kiov {int i; TYPE_1__* iov; int consumed; } ;
struct TYPE_2__ {scalar_t__ iov_len; } ;



__attribute__((used)) static inline u32 FUNC_0(struct vringh_kiov *VAR_0)
{
 int VAR_1;
 u32 VAR_2 = VAR_0->consumed;

 for (VAR_1 = 0; VAR_1 < VAR_0->i; VAR_1++)
  VAR_2 += VAR_0->iov[VAR_1].iov_len;
 return VAR_2;
}
