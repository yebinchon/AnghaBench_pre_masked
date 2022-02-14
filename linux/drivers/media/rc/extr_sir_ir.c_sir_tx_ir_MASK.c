
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct rc_dev *VAR_0, unsigned int *VAR_1,
       unsigned int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2;) {
  if (VAR_1[VAR_4])
   FUNC_2(VAR_1[VAR_4]);
  VAR_4++;
  if (VAR_4 >= VAR_2)
   break;
  if (VAR_1[VAR_4])
   FUNC_3(VAR_1[VAR_4]);
  VAR_4++;
 }
 FUNC_0(VAR_3);

 return VAR_2;
}
