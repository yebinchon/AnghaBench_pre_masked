
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kstat {int dummy; } ;
struct fd {TYPE_1__* file; } ;
struct TYPE_2__ {int f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct fd FUNC_0 (unsigned int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (int *,struct kstat*,int ,unsigned int) ;

int FUNC_3(unsigned int VAR_3, struct kstat *VAR_4,
   u32 VAR_5, unsigned int VAR_6)
{
 struct fd VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_6 & ~VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7.file) {
  VAR_8 = FUNC_2(&VAR_7.file->f_path, VAR_4,
        VAR_5, VAR_6);
  FUNC_1(VAR_7);
 }
 return VAR_8;
}
