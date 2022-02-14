
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {struct kim_data_s* kim_data; } ;
struct kim_data_s {int dummy; } ;


 int FUNC_0 (struct kim_data_s*,unsigned char const*,long) ;

void FUNC_1(void *VAR_0, const unsigned char *VAR_1, long VAR_2)
{
 struct st_data_s *VAR_3 = (struct st_data_s *)VAR_0;
 struct kim_data_s *VAR_4 = VAR_3->kim_data;




 FUNC_0(VAR_4, VAR_1, VAR_2);
 return;
}
