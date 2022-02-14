
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx {int devno; struct em28xx* dev_next; int name; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct em28xx*) ;
 struct em28xx* FUNC_3 (struct em28xx*,int,int ) ;
 int FUNC_4 (int ,int,char*,int) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct em28xx *VAR_4)
{
 int VAR_5;
 struct em28xx *VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_6), VAR_2);

 if (!VAR_6) {
  VAR_4->dev_next = ((void*)0);
  return -VAR_1;
 }

 do {
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  if (VAR_5 >= VAR_0) {

   FUNC_0(&VAR_4->intf->dev, ": Supports only %i em28xx boards.\n",
     VAR_0);
   FUNC_2(VAR_6);
   VAR_4->dev_next = ((void*)0);
   return -VAR_1;
  }
 } while (FUNC_5(VAR_5, VAR_3));
 VAR_6->devno = VAR_5;
 FUNC_4(VAR_6->name, 28, "em28xx #%d", VAR_5);
 VAR_6->dev_next = ((void*)0);
 VAR_4->dev_next = VAR_6;
 return 0;
}
