
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct gigaset_ops {int dummy; } ;
struct gigaset_driver {unsigned int minor; unsigned int minors; int list; TYPE_1__* cs; struct gigaset_ops const* ops; struct module* owner; scalar_t__ blocked; int lock; scalar_t__ have_tty; } ;
struct TYPE_2__ {unsigned int minor_index; int mutex; struct gigaset_ops const* ops; struct gigaset_driver* driver; scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gigaset_driver*,char const*,char const*) ;
 int FUNC_2 (struct gigaset_driver*) ;
 struct gigaset_driver* FUNC_3 (int,int ) ;
 TYPE_1__* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

struct gigaset_driver *FUNC_10(unsigned VAR_3, unsigned VAR_4,
       const char *VAR_5,
       const char *VAR_6,
       const struct gigaset_ops *VAR_7,
       struct module *VAR_8)
{
 struct gigaset_driver *VAR_9;
 unsigned long VAR_10;
 unsigned VAR_11;

 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->have_tty = 0;
 VAR_9->minor = VAR_3;
 VAR_9->minors = VAR_4;
 FUNC_7(&VAR_9->lock);
 VAR_9->blocked = 0;
 VAR_9->ops = VAR_7;
 VAR_9->owner = VAR_8;
 FUNC_0(&VAR_9->list);

 VAR_9->cs = FUNC_4(VAR_4, sizeof(*VAR_9->cs), VAR_0);
 if (!VAR_9->cs)
  goto error;

 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  VAR_9->cs[VAR_11].flags = 0;
  VAR_9->cs[VAR_11].driver = VAR_9;
  VAR_9->cs[VAR_11].ops = VAR_9->ops;
  VAR_9->cs[VAR_11].minor_index = VAR_11;
  FUNC_6(&VAR_9->cs[VAR_11].mutex);
 }

 FUNC_1(VAR_9, VAR_5, VAR_6);

 FUNC_8(&VAR_1, VAR_10);
 FUNC_5(&VAR_9->list, &VAR_2);
 FUNC_9(&VAR_1, VAR_10);

 return VAR_9;

error:
 FUNC_2(VAR_9);
 return ((void*)0);
}
