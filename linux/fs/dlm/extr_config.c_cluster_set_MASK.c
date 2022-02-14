
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_cluster {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dlm_cluster *VAR_3, unsigned int *VAR_4,
      int *VAR_5, int VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 VAR_10 = FUNC_1(VAR_7, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_6 && !VAR_9)
  return -VAR_1;

 *VAR_4 = VAR_9;
 *VAR_5 = VAR_9;

 return VAR_8;
}
