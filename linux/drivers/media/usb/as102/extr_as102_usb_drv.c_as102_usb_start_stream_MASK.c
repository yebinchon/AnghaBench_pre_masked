
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as102_dev_t {int * stream_urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct as102_dev_t*,int ) ;
 int FUNC_1 (struct as102_dev_t*) ;

__attribute__((used)) static int FUNC_2(struct as102_dev_t *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_1->stream_urb[VAR_2]);
  if (VAR_3) {
   FUNC_1(VAR_1);
   return VAR_3;
  }
 }

 return 0;
}
