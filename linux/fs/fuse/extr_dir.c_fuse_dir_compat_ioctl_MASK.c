
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_conn {int minor; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {int host; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct file*,unsigned int,unsigned long,int) ;
 struct fuse_conn* FUNC_1 (int ) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_3, unsigned int VAR_4,
       unsigned long VAR_5)
{
 struct fuse_conn *VAR_6 = FUNC_1(VAR_3->f_mapping->host);

 if (VAR_6->minor < 18)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_5,
     VAR_1 | VAR_2);
}
