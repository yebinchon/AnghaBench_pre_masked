
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int is_le; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vhost_virtqueue*,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct vhost_virtqueue *VAR_1)
{
 VAR_1->is_le = FUNC_0(VAR_1, VAR_0)
  || FUNC_1();
}
