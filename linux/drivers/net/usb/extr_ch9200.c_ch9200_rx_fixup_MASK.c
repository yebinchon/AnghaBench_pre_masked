
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* udev; } ;
struct sk_buff {int len; int* data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 VAR_3 = 64;

 if (FUNC_2(VAR_1->len < VAR_3)) {
  FUNC_0(&VAR_0->udev->dev, "unexpected tiny rx frame\n");
  return 0;
 }

 VAR_2 = (VAR_1->data[VAR_1->len - 16] | VAR_1->data[VAR_1->len - 15] << 8);
 FUNC_1(VAR_1, VAR_2);

 return 1;
}
