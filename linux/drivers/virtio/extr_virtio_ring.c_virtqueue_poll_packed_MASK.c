
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vring_virtqueue {int dummy; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vring_virtqueue*,int,int) ;
 struct vring_virtqueue* FUNC_1 (struct virtqueue*) ;

__attribute__((used)) static bool FUNC_2(struct virtqueue *VAR_1, u16 VAR_2)
{
 struct vring_virtqueue *VAR_3 = FUNC_1(VAR_1);
 bool VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_2 >> VAR_0;
 VAR_5 = VAR_2 & ~(1 << VAR_0);

 return FUNC_0(VAR_3, VAR_5, VAR_4);
}
