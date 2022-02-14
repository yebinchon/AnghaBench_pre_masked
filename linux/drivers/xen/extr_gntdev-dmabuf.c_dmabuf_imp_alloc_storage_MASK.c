
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * refs; } ;
struct TYPE_4__ {TYPE_1__ imp; } ;
struct gntdev_dmabuf {int nr_pages; TYPE_2__ u; void* pages; } ;


 int VAR_0 ;
 struct gntdev_dmabuf* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gntdev_dmabuf*) ;
 void* FUNC_2 (int,int,int ) ;
 struct gntdev_dmabuf* FUNC_3 (int,int ) ;

__attribute__((used)) static struct gntdev_dmabuf *FUNC_4(int VAR_3)
{
 struct gntdev_dmabuf *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto fail_no_free;

 VAR_4->u.imp.refs = FUNC_2(VAR_3,
         sizeof(VAR_4->u.imp.refs[0]),
         VAR_1);
 if (!VAR_4->u.imp.refs)
  goto fail;

 VAR_4->pages = FUNC_2(VAR_3,
           sizeof(VAR_4->pages[0]),
           VAR_1);
 if (!VAR_4->pages)
  goto fail;

 VAR_4->nr_pages = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_4->u.imp.refs[VAR_5] = VAR_2;

 return VAR_4;

fail:
 FUNC_1(VAR_4);
fail_no_free:
 return FUNC_0(-VAR_0);
}
