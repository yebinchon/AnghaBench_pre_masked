
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct vhost_virtqueue*) ;

__attribute__((used)) static bool FUNC_1(struct vhost_virtqueue *VAR_1, size_t VAR_2)
{
 return VAR_2 < VAR_0 &&
        !FUNC_0(VAR_1->dev, VAR_1);
}
