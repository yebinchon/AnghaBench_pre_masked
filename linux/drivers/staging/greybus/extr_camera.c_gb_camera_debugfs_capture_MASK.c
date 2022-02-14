
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct gb_camera*,unsigned int,unsigned int,unsigned int,int ,int *) ;
 int FUNC_1 (char*,int,unsigned int*) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct gb_camera *VAR_1,
      char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 char *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_2(&VAR_2, ";");
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_7, 10, &VAR_4);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_7 = FUNC_2(&VAR_2, ";");
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_7, 16, &VAR_5);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_7 = FUNC_2(&VAR_2, ";");
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_7, 10, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_4, VAR_5, VAR_6, 0,
    ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_3;
}
