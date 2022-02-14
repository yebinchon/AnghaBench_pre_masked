
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_queue {int in_use_bm; } ;
struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdebug_queue* VAR_4 ;
 int FUNC_3 (char const*,char*,int*) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_4(struct device_driver *VAR_6, const char *VAR_7,
          size_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct sdebug_queue *VAR_13;

 if ((VAR_8 > 0) && (1 == FUNC_3(VAR_7, "%d", &VAR_10)) && (VAR_10 > 0) &&
     (VAR_10 <= VAR_1)) {
  FUNC_1(1);
  VAR_11 = 0;
  for (VAR_9 = 0, VAR_13 = VAR_4; VAR_9 < VAR_5;
       ++VAR_9, ++VAR_13) {
   VAR_12 = FUNC_2(VAR_13->in_use_bm, VAR_1);
   if (VAR_12 > VAR_11)
    VAR_11 = VAR_12;
  }
  VAR_3 = VAR_10;
  if (VAR_11 == VAR_1)
   FUNC_0(&VAR_2, 0);
  else if (VAR_11 >= VAR_10)
   FUNC_0(&VAR_2, VAR_11 + 1);
  else
   FUNC_0(&VAR_2, 0);
  FUNC_1(0);
  return VAR_8;
 }
 return -VAR_0;
}
