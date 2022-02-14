
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file {int fc; } ;
struct file {struct fuse_file* private_data; } ;
struct cuse_conn {scalar_t__ unrestricted_ioctl; } ;


 unsigned int VAR_0 ;
 struct cuse_conn* FUNC_0 (int ) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long,unsigned int) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned int VAR_2,
       unsigned long VAR_3)
{
 struct fuse_file *VAR_4 = VAR_1->private_data;
 struct cuse_conn *VAR_5 = FUNC_0(VAR_4->fc);
 unsigned int VAR_6 = 0;

 if (VAR_5->unrestricted_ioctl)
  VAR_6 |= VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
}
