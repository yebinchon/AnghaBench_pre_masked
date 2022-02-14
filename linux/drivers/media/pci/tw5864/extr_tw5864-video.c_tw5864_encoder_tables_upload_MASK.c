
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw5864_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct tw5864_dev *VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_2, 0x1);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_0((VAR_3 + VAR_9 * 4),
     VAR_5[VAR_9]);
 }
 FUNC_0(VAR_2, 0x0);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_0((VAR_1 + VAR_9 * 4),
     VAR_6[VAR_9]);
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_0((VAR_1 + VAR_9 * 4),
     VAR_7[VAR_9]);
 }
}
