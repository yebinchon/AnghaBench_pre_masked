
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_switch {int dev; TYPE_1__* tb; int dma_port; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ,unsigned int,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void *VAR_0, unsigned int VAR_1, void *VAR_2,
         size_t VAR_3)
{
 struct tb_switch *VAR_4 = VAR_0;
 int VAR_5;

 FUNC_3(&VAR_4->dev);

 if (!FUNC_1(&VAR_4->tb->lock)) {
  VAR_5 = FUNC_6();
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4->dma_port, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->tb->lock);

out:
 FUNC_4(&VAR_4->dev);
 FUNC_5(&VAR_4->dev);

 return VAR_5;
}
