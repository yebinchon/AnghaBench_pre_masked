
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {scalar_t__ (* flush ) (struct nd_region*,struct bio*) ;} ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nd_region*) ;
 scalar_t__ FUNC_1 (struct nd_region*,struct bio*) ;

int FUNC_2(struct nd_region *VAR_1, struct bio *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1->flush)
  VAR_3 = FUNC_0(VAR_1);
 else {
  if (VAR_1->flush(VAR_1, VAR_2))
   VAR_3 = -VAR_0;
 }

 return VAR_3;
}
