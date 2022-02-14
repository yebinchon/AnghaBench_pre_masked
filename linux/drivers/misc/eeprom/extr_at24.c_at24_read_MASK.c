
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct at24_data {unsigned int byte_len; int lock; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct at24_data*) ;
 int FUNC_1 (struct at24_data*,char*,unsigned int,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, unsigned int VAR_2, void *VAR_3, size_t VAR_4)
{
 struct at24_data *VAR_5;
 struct device *VAR_6;
 char *VAR_7 = VAR_3;
 int VAR_8;

 VAR_5 = VAR_1;
 VAR_6 = FUNC_0(VAR_5);

 if (FUNC_7(!VAR_4))
  return VAR_4;

 if (VAR_2 + VAR_4 > VAR_5->byte_len)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 < 0) {
  FUNC_6(VAR_6);
  return VAR_8;
 }





 FUNC_2(&VAR_5->lock);

 while (VAR_4) {
  VAR_8 = FUNC_1(VAR_5, VAR_7, VAR_2, VAR_4);
  if (VAR_8 < 0) {
   FUNC_3(&VAR_5->lock);
   FUNC_5(VAR_6);
   return VAR_8;
  }
  VAR_7 += VAR_8;
  VAR_2 += VAR_8;
  VAR_4 -= VAR_8;
 }

 FUNC_3(&VAR_5->lock);

 FUNC_5(VAR_6);

 return 0;
}
