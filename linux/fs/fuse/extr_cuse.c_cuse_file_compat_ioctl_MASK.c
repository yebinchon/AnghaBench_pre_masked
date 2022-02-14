
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file {int fc; } ;
struct file {struct fuse_file* private_data; } ;
struct cuse_conn {scalar_t__ unrestricted_ioctl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct cuse_conn* FUNC_0 (int ) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long,unsigned int) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_2, unsigned int VAR_3,
       unsigned long VAR_4)
{
 struct fuse_file *VAR_5 = VAR_2->private_data;
 struct cuse_conn *VAR_6 = FUNC_0(VAR_5->fc);
 unsigned int VAR_7 = VAR_0;

 if (VAR_6->unrestricted_ioctl)
  VAR_7 |= VAR_1;

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7);
}
