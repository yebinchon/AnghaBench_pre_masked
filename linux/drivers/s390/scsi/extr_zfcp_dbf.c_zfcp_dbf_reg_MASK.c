
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_info {int dummy; } ;
typedef struct debug_info debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct debug_info* FUNC_0 (char const*,int,int,int) ;
 int FUNC_1 (struct debug_info*,int *) ;
 int FUNC_2 (struct debug_info*,int ) ;

__attribute__((used)) static debug_info_t *FUNC_3(const char *VAR_2, int VAR_3, int VAR_4)
{
 struct debug_info *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, 1, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(VAR_5, &VAR_1);
 FUNC_2(VAR_5, VAR_0);

 return VAR_5;
}
