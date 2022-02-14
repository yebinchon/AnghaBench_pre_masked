
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_mport {TYPE_2__* inb_msg; TYPE_1__* ops; int * riores; } ;
struct resource {int dummy; } ;
struct TYPE_4__ {void (* mcback ) (struct rio_mport*,void*,int,int) ;struct resource* res; } ;
struct TYPE_3__ {int (* open_inb_mbox ) (struct rio_mport*,void*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (int *,struct resource*) ;
 int FUNC_4 (struct resource*,int,int) ;
 int FUNC_5 (struct rio_mport*,void*,int,int) ;

int FUNC_6(struct rio_mport *VAR_4,
    void *VAR_5,
    int VAR_6,
    int VAR_7,
    void (*VAR_8) (struct rio_mport * VAR_9, void *VAR_10, int VAR_11,
           int VAR_12))
{
 int VAR_13 = -VAR_1;
 struct resource *VAR_14;

 if (!VAR_4->ops->open_inb_mbox)
  goto out;

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_2);
 if (VAR_14) {
  FUNC_4(VAR_14, VAR_6, VAR_6);


  VAR_13 = FUNC_3(&VAR_4->riores[VAR_3],
          VAR_14);
  if (VAR_13 < 0) {
   FUNC_0(VAR_14);
   goto out;
  }

  VAR_4->inb_msg[VAR_6].res = VAR_14;


  VAR_4->inb_msg[VAR_6].mcback = VAR_8;

  VAR_13 = VAR_4->ops->open_inb_mbox(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_13) {
   VAR_4->inb_msg[VAR_6].mcback = ((void*)0);
   VAR_4->inb_msg[VAR_6].res = ((void*)0);
   FUNC_2(VAR_14);
   FUNC_0(VAR_14);
  }
 } else
  VAR_13 = -VAR_0;

      out:
 return VAR_13;
}
