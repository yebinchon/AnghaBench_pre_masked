
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int pos; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct rbsp*) ;
 int FUNC_2 (struct rbsp*) ;
 int FUNC_3 (struct rbsp*) ;
 int FUNC_4 (struct rbsp*,unsigned int*) ;
 int FUNC_5 (struct rbsp*,int,unsigned int*) ;
 int FUNC_6 (struct rbsp*,void*,size_t,int *) ;
 int VAR_2 ;

ssize_t FUNC_7(const struct device *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct rbsp VAR_6;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = VAR_1;

 if (!VAR_4)
  return -VAR_0;

 FUNC_6(&VAR_6, VAR_4, VAR_5, &VAR_2);

 FUNC_3(&VAR_6);

 FUNC_4(&VAR_6, &VAR_7);
 FUNC_5(&VAR_6, 2, &VAR_8);
 FUNC_5(&VAR_6, 5, &VAR_9);

 FUNC_2(&VAR_6);

 FUNC_1(&VAR_6);

 return FUNC_0(VAR_6.pos, 8);
}
