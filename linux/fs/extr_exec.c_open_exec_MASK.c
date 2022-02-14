
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filename {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct file* FUNC_0 (struct filename*) ;
 int FUNC_1 (struct filename*) ;
 struct file* FUNC_2 (int ,struct filename*,int ) ;
 struct filename* FUNC_3 (char const*) ;
 int FUNC_4 (struct filename*) ;

struct file *FUNC_5(const char *VAR_1)
{
 struct filename *VAR_2 = FUNC_3(VAR_1);
 struct file *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2)) {
  VAR_3 = FUNC_2(VAR_0, VAR_2, 0);
  FUNC_4(VAR_2);
 }
 return VAR_3;
}
