
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt {char* hdl_info; scalar_t__ bar1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct cobalt *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->hdl_info[VAR_4] =
   FUNC_0(VAR_3->bar1 + VAR_0 + VAR_4);
 VAR_3->hdl_info[VAR_1 - 1] = '\0';
 if (FUNC_1(VAR_3->hdl_info, VAR_2))
  return 0;

 return 1;
}
