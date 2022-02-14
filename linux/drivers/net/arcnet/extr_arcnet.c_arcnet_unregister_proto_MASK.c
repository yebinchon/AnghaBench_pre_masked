
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ArcProto {int dummy; } ;


 struct ArcProto* VAR_0 ;
 struct ArcProto* VAR_1 ;
 struct ArcProto** VAR_2 ;
 struct ArcProto VAR_3 ;
 struct ArcProto* VAR_4 ;

void FUNC_0(struct ArcProto *VAR_5)
{
 int VAR_6;

 if (VAR_1 == VAR_5)
  VAR_1 = &VAR_3;
 if (VAR_0 == VAR_5)
  VAR_0 = VAR_1;
 if (VAR_4 == VAR_5)
  VAR_4 = VAR_1;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
  if (VAR_2[VAR_6] == VAR_5)
   VAR_2[VAR_6] = VAR_1;
 }
}
