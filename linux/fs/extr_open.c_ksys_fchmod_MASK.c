
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct fd {TYPE_1__* file; } ;
struct TYPE_2__ {int f_path; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 struct fd FUNC_2 (unsigned int) ;
 int FUNC_3 (struct fd) ;

int FUNC_4(unsigned int VAR_1, umode_t VAR_2)
{
 struct fd VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = -VAR_0;

 if (VAR_3.file) {
  FUNC_0(VAR_3.file);
  VAR_4 = FUNC_1(&VAR_3.file->f_path, VAR_2);
  FUNC_3(VAR_3);
 }
 return VAR_4;
}
