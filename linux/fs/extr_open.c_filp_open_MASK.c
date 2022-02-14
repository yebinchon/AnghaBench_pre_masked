
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct filename {int dummy; } ;
struct file {int dummy; } ;


 struct file* FUNC_0 (struct filename*) ;
 int FUNC_1 (struct filename*) ;
 struct file* FUNC_2 (struct filename*,int,int ) ;
 struct filename* FUNC_3 (char const*) ;
 int FUNC_4 (struct filename*) ;

struct file *FUNC_5(const char *VAR_0, int VAR_1, umode_t VAR_2)
{
 struct filename *VAR_3 = FUNC_3(VAR_0);
 struct file *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
  FUNC_4(VAR_3);
 }
 return VAR_4;
}
