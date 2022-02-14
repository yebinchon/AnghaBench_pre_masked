
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_dmabuf_wait_obj {int dummy; } ;
struct gntdev_dmabuf_priv {int dummy; } ;
typedef struct gntdev_dmabuf_wait_obj gntdev_dmabuf ;


 scalar_t__ FUNC_0 (struct gntdev_dmabuf_wait_obj*) ;
 int FUNC_1 (struct gntdev_dmabuf_wait_obj*) ;
 int FUNC_2 (struct gntdev_dmabuf_priv*,struct gntdev_dmabuf_wait_obj*) ;
 struct gntdev_dmabuf_wait_obj* FUNC_3 (struct gntdev_dmabuf_priv*,int) ;
 struct gntdev_dmabuf_wait_obj* FUNC_4 (struct gntdev_dmabuf_priv*,struct gntdev_dmabuf_wait_obj*) ;
 int FUNC_5 (struct gntdev_dmabuf_wait_obj*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct gntdev_dmabuf_priv *VAR_0, int VAR_1,
        int VAR_2)
{
 struct gntdev_dmabuf *VAR_3;
 struct gntdev_dmabuf_wait_obj *VAR_4;
 int VAR_5;

 FUNC_6("Will wait for dma-buf with fd %d\n", VAR_1);





 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);






 VAR_4 = FUNC_4(VAR_0, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_5(VAR_4, VAR_2);
 FUNC_2(VAR_0, VAR_4);
 return VAR_5;
}
