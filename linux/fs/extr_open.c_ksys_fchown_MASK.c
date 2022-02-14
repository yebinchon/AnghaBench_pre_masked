
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct fd {TYPE_1__* file; } ;
typedef int gid_t ;
struct TYPE_4__ {int f_path; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct fd FUNC_2 (unsigned int) ;
 int FUNC_3 (struct fd) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(unsigned int VAR_1, uid_t VAR_2, gid_t VAR_3)
{
 struct fd VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = -VAR_0;

 if (!VAR_4.file)
  goto out;

 VAR_5 = FUNC_5(VAR_4.file);
 if (VAR_5)
  goto out_fput;
 FUNC_0(VAR_4.file);
 VAR_5 = FUNC_1(&VAR_4.file->f_path, VAR_2, VAR_3);
 FUNC_4(VAR_4.file);
out_fput:
 FUNC_3(VAR_4);
out:
 return VAR_5;
}
