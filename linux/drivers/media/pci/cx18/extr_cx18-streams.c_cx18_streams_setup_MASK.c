
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int * streams; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cx18*,int ) ;

int FUNC_3(struct cx18 *VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 < 0)
   break;


  VAR_3 = FUNC_1(&VAR_1->streams[VAR_2]);
  if (VAR_3 < 0)
   break;
 }
 if (VAR_2 == VAR_0)
  return 0;


 FUNC_2(VAR_1, 0);
 return VAR_3;
}
