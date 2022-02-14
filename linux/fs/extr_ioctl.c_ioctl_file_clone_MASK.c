
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {scalar_t__ mnt; } ;
struct file {TYPE_2__ f_path; } ;
struct fd {TYPE_3__* file; } ;
typedef int loff_t ;
struct TYPE_4__ {scalar_t__ mnt; } ;
struct TYPE_6__ {TYPE_1__ f_path; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd FUNC_0 (unsigned long) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (TYPE_3__*,int,struct file*,int,int,int ) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_3, unsigned long VAR_4,
        u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct fd VAR_8 = FUNC_0(VAR_4);
 loff_t VAR_9;
 int VAR_10;

 if (!VAR_8.file)
  return -VAR_0;
 VAR_10 = -VAR_2;
 if (VAR_8.file->f_path.mnt != VAR_3->f_path.mnt)
  goto fdput;
 VAR_9 = FUNC_2(VAR_8.file, VAR_5, VAR_3, VAR_7,
          VAR_6, 0);
 if (VAR_9 < 0)
  VAR_10 = VAR_9;
 else if (VAR_6 && VAR_9 != VAR_6)
  VAR_10 = -VAR_1;
 else
  VAR_10 = 0;
fdput:
 FUNC_1(VAR_8);
 return VAR_10;
}
