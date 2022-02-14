
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(const char *VAR_4,
      const struct kernel_param *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_4, 10, &VAR_7);
 if (VAR_6)
  return -VAR_0;

 if (VAR_7 <= 0) {
  FUNC_4("global_max_data_area must be larger than 0.\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_0(VAR_7);
 if (FUNC_1(&VAR_1) > VAR_2)
  FUNC_5(&VAR_3, 0);
 else
  FUNC_2(&VAR_3);

 return 0;
}
