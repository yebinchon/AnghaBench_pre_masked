
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* udc_name; } ;
struct TYPE_3__ {TYPE_2__ gadget_driver; } ;
struct gadget_info {int lock; TYPE_1__ composite; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 struct gadget_info* FUNC_5 (struct config_item*) ;
 int FUNC_6 (struct gadget_info*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static ssize_t FUNC_8(struct config_item *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct gadget_info *VAR_6 = FUNC_5(VAR_3);
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 if (VAR_7[VAR_5 - 1] == '\n')
  VAR_7[VAR_5 - 1] = '\0';

 FUNC_2(&VAR_6->lock);

 if (!FUNC_4(VAR_7)) {
  VAR_8 = FUNC_6(VAR_6);
  if (VAR_8)
   goto err;
  FUNC_0(VAR_7);
 } else {
  if (VAR_6->composite.gadget_driver.udc_name) {
   VAR_8 = -VAR_0;
   goto err;
  }
  VAR_6->composite.gadget_driver.udc_name = VAR_7;
  VAR_8 = FUNC_7(&VAR_6->composite.gadget_driver);
  if (VAR_8) {
   VAR_6->composite.gadget_driver.udc_name = ((void*)0);
   goto err;
  }
 }
 FUNC_3(&VAR_6->lock);
 return VAR_5;
err:
 FUNC_0(VAR_7);
 FUNC_3(&VAR_6->lock);
 return VAR_8;
}
