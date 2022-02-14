
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubiblock {scalar_t__ refcnt; int dev_mutex; int * desc; } ;
struct gendisk {struct ubiblock* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct ubiblock *VAR_2 = VAR_0->private_data;

 FUNC_0(&VAR_2->dev_mutex);
 VAR_2->refcnt--;
 if (VAR_2->refcnt == 0) {
  FUNC_2(VAR_2->desc);
  VAR_2->desc = ((void*)0);
 }
 FUNC_1(&VAR_2->dev_mutex);
}
