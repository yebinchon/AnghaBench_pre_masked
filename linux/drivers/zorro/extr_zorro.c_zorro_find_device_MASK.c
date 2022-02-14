
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zorro_id ;
struct zorro_dev {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 struct zorro_dev* VAR_1 ;
 int VAR_2 ;

struct zorro_dev *FUNC_0(zorro_id VAR_3, struct zorro_dev *VAR_4)
{
 struct zorro_dev *VAR_5;

 if (!VAR_2)
  return ((void*)0);

 for (VAR_5 = VAR_4 ? VAR_4+1 : &VAR_1[0];
      VAR_5 < VAR_1+VAR_2;
      VAR_5++)
  if (VAR_3 == VAR_0 || VAR_3 == VAR_5->id)
   return VAR_5;
 return ((void*)0);
}
