
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {scalar_t__ unlocked_ioctl; scalar_t__ poll; scalar_t__ write; scalar_t__ read; scalar_t__ llseek; int release; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct file_operations *VAR_6,
    const struct file_operations *VAR_7)
{
 VAR_6->release = VAR_3;
 if (VAR_7->llseek)
  VAR_6->llseek = VAR_0;
 if (VAR_7->read)
  VAR_6->read = VAR_2;
 if (VAR_7->write)
  VAR_6->write = VAR_5;
 if (VAR_7->poll)
  VAR_6->poll = VAR_1;
 if (VAR_7->unlocked_ioctl)
  VAR_6->unlocked_ioctl = VAR_4;
}
