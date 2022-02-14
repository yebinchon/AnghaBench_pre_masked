
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv_alloc_info {int max_mas; int min_mas; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uwb_rsv_alloc_info*) ;
 scalar_t__ FUNC_1 (struct uwb_rsv_alloc_info*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct uwb_rsv_alloc_info *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_1 / VAR_5;
 int VAR_10 = VAR_4->max_mas / VAR_9;
 int VAR_11 = VAR_4->min_mas / VAR_9;

 if (VAR_4->min_mas % VAR_9)
  VAR_11++;

 if (VAR_11 > VAR_0) {
  return VAR_3;
 }

 if (VAR_10 > VAR_0) {
  VAR_10 = VAR_0;
 }

 for (VAR_8 = VAR_10; VAR_8 >= VAR_11; VAR_8--) {
  if (FUNC_1(VAR_4, VAR_5, 0, VAR_8) == VAR_3)
   continue;
  for (VAR_6 = VAR_8; VAR_6 >= 0; VAR_6--) {
   VAR_7 = VAR_8 - VAR_6;
   if (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7) == VAR_2) {
    FUNC_0(VAR_4);
    return VAR_2;
   }
  }
 }
 return VAR_3;
}
