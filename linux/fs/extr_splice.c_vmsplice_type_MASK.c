
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* file; } ;
struct TYPE_2__ {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fd) ;

__attribute__((used)) static int FUNC_1(struct fd VAR_5, int *VAR_6)
{
 if (!VAR_5.file)
  return -VAR_0;
 if (VAR_5.file->f_mode & VAR_2) {
  *VAR_6 = VAR_4;
 } else if (VAR_5.file->f_mode & VAR_1) {
  *VAR_6 = VAR_3;
 } else {
  FUNC_0(VAR_5);
  return -VAR_0;
 }
 return 0;
}
