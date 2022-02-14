
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acm {TYPE_1__* data; int read_urbs_free; int * read_urbs; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct acm *VAR_2, int VAR_3, gfp_t VAR_4)
{
 int VAR_5;

 if (!FUNC_3(VAR_3, &VAR_2->read_urbs_free))
  return 0;

 VAR_5 = FUNC_4(VAR_2->read_urbs[VAR_3], VAR_4);
 if (VAR_5) {
  if (VAR_5 != -VAR_1 && VAR_5 != -VAR_0) {
   FUNC_0(&VAR_2->data->dev,
    "urb %d failed submission with %d\n",
    VAR_3, VAR_5);
  }
  FUNC_2(VAR_3, &VAR_2->read_urbs_free);
  return VAR_5;
 } else {
  FUNC_1(&VAR_2->data->dev, "submitted urb %d\n", VAR_3);
 }

 return 0;
}
