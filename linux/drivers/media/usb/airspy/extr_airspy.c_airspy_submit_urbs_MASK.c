
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airspy {int urbs_initialized; int urbs_submitted; int dev; int * urb_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct airspy*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct airspy *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->urbs_initialized; VAR_2++) {
  FUNC_1(VAR_1->dev, "submit urb=%d\n", VAR_2);
  VAR_3 = FUNC_3(VAR_1->urb_list[VAR_2], VAR_0);
  if (VAR_3) {
   FUNC_2(VAR_1->dev, "Could not submit URB no. %d - get them all back\n",
     VAR_2);
   FUNC_0(VAR_1);
   return VAR_3;
  }
  VAR_1->urbs_submitted++;
 }

 return 0;
}
