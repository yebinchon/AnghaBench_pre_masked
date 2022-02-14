
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_queue {int in_use_bm; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sdebug_queue* VAR_5 ;
 int FUNC_2 (char const*,char*,int*) ;
 int VAR_6 ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_7, const char *VAR_8,
      size_t VAR_9)
{
 int VAR_10, VAR_11;

 if (VAR_9 > 0 && FUNC_2(VAR_8, "%d", &VAR_10) == 1) {
  VAR_11 = VAR_9;
  if (VAR_2 != VAR_10) {
   int VAR_12, VAR_13;
   struct sdebug_queue *VAR_14;

   FUNC_0(1);
   for (VAR_12 = 0, VAR_14 = VAR_5; VAR_12 < VAR_6;
        ++VAR_12, ++VAR_14) {
    VAR_13 = FUNC_1(VAR_14->in_use_bm,
         VAR_3);
    if (VAR_13 != VAR_3) {
     VAR_11 = -VAR_0;
     break;
    }
   }
   if (VAR_11 > 0) {
    VAR_2 = VAR_10;
    VAR_4 = 0;
   }
   FUNC_0(0);
  }
  return VAR_11;
 }
 return -VAR_1;
}
