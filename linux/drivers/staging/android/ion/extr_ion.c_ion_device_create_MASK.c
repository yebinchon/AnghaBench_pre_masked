
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int * parent; int * fops; int minor; } ;
struct ion_device {int heaps; int lock; int debug_root; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 struct ion_device* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ion_device*) ;
 struct ion_device* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct ion_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev.minor = VAR_2;
 VAR_5->dev.name = "ion";
 VAR_5->dev.fops = &VAR_4;
 VAR_5->dev.parent = ((void*)0);
 VAR_6 = FUNC_4(&VAR_5->dev);
 if (VAR_6) {
  FUNC_6("ion: failed to register misc device.\n");
  FUNC_2(VAR_5);
  return VAR_6;
 }

 VAR_5->debug_root = FUNC_0("ion", ((void*)0));
 FUNC_1(&VAR_5->lock);
 FUNC_5(&VAR_5->heaps);
 VAR_3 = VAR_5;
 return 0;
}
