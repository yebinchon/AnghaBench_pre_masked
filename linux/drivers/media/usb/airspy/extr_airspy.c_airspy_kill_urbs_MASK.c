
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airspy {int urbs_submitted; int * urb_list; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct airspy *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->urbs_submitted - 1; VAR_1 >= 0; VAR_1--) {
  FUNC_0(VAR_0->dev, "kill urb=%d\n", VAR_1);

  FUNC_1(VAR_0->urb_list[VAR_1]);
 }
 VAR_0->urbs_submitted = 0;

 return 0;
}
