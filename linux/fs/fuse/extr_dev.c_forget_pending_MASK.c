
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; } ;
struct fuse_iqueue {TYPE_1__ forget_list_head; } ;



__attribute__((used)) static int FUNC_0(struct fuse_iqueue *VAR_0)
{
 return VAR_0->forget_list_head.next != ((void*)0);
}
