
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {scalar_t__ packed_ring; } ;
struct virtqueue {int dummy; } ;
struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*,struct scatterlist**,unsigned int,unsigned int,unsigned int,void*,void*,int ) ;
 int FUNC_2 (struct virtqueue*,struct scatterlist**,unsigned int,unsigned int,unsigned int,void*,void*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct virtqueue *VAR_0,
    struct scatterlist *VAR_1[],
    unsigned int VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4,
    void *VAR_5,
    void *VAR_6,
    gfp_t VAR_7)
{
 struct vring_virtqueue *VAR_8 = FUNC_0(VAR_0);

 return VAR_8->packed_ring ? FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7) :
     FUNC_2(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
