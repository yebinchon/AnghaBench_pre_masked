
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct fuse_pqueue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* fud; } ;
struct TYPE_3__ {struct fuse_pqueue pq; } ;


 TYPE_2__* FUNC_0 (struct virtqueue*) ;

__attribute__((used)) static inline struct fuse_pqueue *FUNC_1(struct virtqueue *VAR_0)
{
 return &FUNC_0(VAR_0)->fud->pq;
}
