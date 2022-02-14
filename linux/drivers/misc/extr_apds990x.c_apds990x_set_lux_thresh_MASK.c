
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct apds990x_chip {int mutex; int lux_wait_fresh_res; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct apds990x_chip*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct apds990x_chip *VAR_2, u32 *VAR_3,
    const char *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 > VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_2->mutex);
 *VAR_3 = VAR_5;




 if (!VAR_2->lux_wait_fresh_res)
  FUNC_0(VAR_2);
 FUNC_3(&VAR_2->mutex);
 return VAR_6;

}
