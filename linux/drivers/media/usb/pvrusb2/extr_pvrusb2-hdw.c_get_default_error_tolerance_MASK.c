
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int unit_number; } ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct pvr2_hdw *VAR_2)
{
 int VAR_3 = VAR_2->unit_number;
 int VAR_4 = 0;
 if ((VAR_3 >= 0) && (VAR_3 < VAR_0)) {
  VAR_4 = VAR_1[VAR_3];
 }
 return VAR_4;
}
