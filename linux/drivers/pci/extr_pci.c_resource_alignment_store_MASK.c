
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct bus_type *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 char *VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_1);

 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_2);
 FUNC_0(VAR_3);
 VAR_3 = VAR_7;
 FUNC_3(&VAR_2);
 return VAR_6;
}
