
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 size_t FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct bus_type *VAR_3, char *VAR_4)
{
 size_t VAR_5 = 0;

 FUNC_1(&VAR_1);
 if (VAR_2)
  VAR_5 = FUNC_0(VAR_4, VAR_0, "%s", VAR_2);
 FUNC_2(&VAR_1);






 if (VAR_5 >= 2 && VAR_4[VAR_5 - 2] != '\n' && VAR_5 < VAR_0 - 1) {
  VAR_4[VAR_5 - 1] = '\n';
  VAR_4[VAR_5++] = 0;
 }

 return VAR_5;
}
