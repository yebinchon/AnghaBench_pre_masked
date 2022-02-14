
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;

 VAR_4 = FUNC_1(VAR_2, 10, &VAR_5);
 if (VAR_4)
  goto exit_win;
 if (VAR_5 > 10 || VAR_5 < 2) {
  FUNC_2("Out of recommended window size %lu, between 2-10\n",
   VAR_5);
  VAR_4 = -VAR_0;
 }

 VAR_1 = FUNC_0(VAR_5, 2ul, 10ul);
 FUNC_3();

exit_win:

 return VAR_4;
}
