
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio {int dummy; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (struct dio*) ;
 int FUNC_1 (struct dio*,struct bio*) ;

__attribute__((used)) static void FUNC_2(struct dio *VAR_0)
{
 struct bio *VAR_1;
 do {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1)
   FUNC_1(VAR_0, VAR_1);
 } while (VAR_1);
}
