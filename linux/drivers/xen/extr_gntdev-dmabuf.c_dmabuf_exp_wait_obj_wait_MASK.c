
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gntdev_dmabuf_wait_obj {int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct gntdev_dmabuf_wait_obj *VAR_1,
        u32 VAR_2)
{
 if (FUNC_1(&VAR_1->completion,
   FUNC_0(VAR_2)) <= 0)
  return -VAR_0;

 return 0;
}
