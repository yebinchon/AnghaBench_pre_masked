
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct open_flags {int dummy; } ;
struct filename {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct open_flags*) ;
 struct file* FUNC_2 (int ,struct filename*,struct open_flags*) ;

struct file *FUNC_3(struct filename *VAR_1, int VAR_2, umode_t VAR_3)
{
 struct open_flags VAR_4;
 int VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_4);
 return VAR_5 ? FUNC_0(VAR_5) : FUNC_2(VAR_0, VAR_1, &VAR_4);
}
