
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_var_header {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,struct st_var_header*,int ) ;
 struct st_var_header* FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void FUNC_3(char *VAR_3,
        int *VAR_4, int VAR_5)
{
 struct st_var_header *VAR_6;

 if (VAR_2 && VAR_4) {
  VAR_6 = FUNC_2(VAR_3);
  if (VAR_6) {
   FUNC_1(VAR_4[VAR_5],
     VAR_6, VAR_1);
   FUNC_1(0, VAR_6, VAR_0);
   FUNC_0("%s reset to default value\n", VAR_6->name);
  }
 }
}
