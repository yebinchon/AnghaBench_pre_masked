
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_queue {int in_use_bm; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sdebug_queue* VAR_7 ;
 int FUNC_2 (char const*,char*,int*) ;
 int VAR_8 ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_9, const char *VAR_10,
       size_t VAR_11)
{
 int VAR_12, VAR_13;

 if ((VAR_11 > 0) && (1 == FUNC_2(VAR_10, "%d", &VAR_12)) &&
     (VAR_12 >= 0) && (VAR_12 < (1000 * 1000 * 1000))) {
  VAR_13 = VAR_11;
  if (VAR_6 != VAR_12) {
   int VAR_14, VAR_15;
   struct sdebug_queue *VAR_16;

   FUNC_0(1);
   for (VAR_14 = 0, VAR_16 = VAR_7; VAR_14 < VAR_8;
        ++VAR_14, ++VAR_16) {
    VAR_15 = FUNC_1(VAR_16->in_use_bm,
         VAR_5);
    if (VAR_15 != VAR_5) {
     VAR_13 = -VAR_1;
     break;
    }
   }
   if (VAR_13 > 0) {
    VAR_6 = VAR_12;
    VAR_4 = VAR_12 ? VAR_3
       : VAR_0;
   }
   FUNC_0(0);
  }
  return VAR_13;
 }
 return -VAR_2;
}
