
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airspy {int urbs_initialized; scalar_t__* urb_list; int dev; } ;


 int FUNC_0 (struct airspy*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct airspy *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 for (VAR_1 = VAR_0->urbs_initialized - 1; VAR_1 >= 0; VAR_1--) {
  if (VAR_0->urb_list[VAR_1]) {
   FUNC_1(VAR_0->dev, "free urb=%d\n", VAR_1);

   FUNC_2(VAR_0->urb_list[VAR_1]);
  }
 }
 VAR_0->urbs_initialized = 0;

 return 0;
}
