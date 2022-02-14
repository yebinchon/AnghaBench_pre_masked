
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {void* priv; } ;
typedef unsigned long resource_size_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (void*) ;
 unsigned long FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, void **VAR_5, resource_size_t *VAR_6)
{
 *VAR_5 = VAR_1->priv + VAR_2;
 *VAR_4 = VAR_3;

 if (VAR_6) {

  unsigned long VAR_7 = FUNC_1(*VAR_5);
  void *VAR_8 = *VAR_5 - VAR_7;
  unsigned long VAR_9, VAR_10 = FUNC_2(VAR_8);

  *VAR_6 = FUNC_0(VAR_10) + VAR_7;
  VAR_3 += VAR_7;
  while (VAR_3 > VAR_0) {
   VAR_3 -= VAR_0;
   VAR_8 += VAR_0;
   VAR_10++;
   VAR_9 = FUNC_2(VAR_8);
   if (VAR_9 != VAR_10) {
    *VAR_4 = VAR_8 - *VAR_5;
    break;
   }
  }
 }

 return 0;
}
