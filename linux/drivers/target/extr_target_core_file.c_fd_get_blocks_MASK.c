
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ block_size; } ;
struct se_device {TYPE_2__ dev_attrib; } ;
struct inode {int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
struct fd_dev {unsigned long long fd_dev_size; struct file* fd_file; } ;
typedef int sector_t ;
struct TYPE_3__ {struct inode* host; } ;


 struct fd_dev* FUNC_0 (struct se_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 unsigned long long FUNC_3 (struct inode*) ;

__attribute__((used)) static sector_t FUNC_4(struct se_device *VAR_0)
{
 struct fd_dev *VAR_1 = FUNC_0(VAR_0);
 struct file *VAR_2 = VAR_1->fd_file;
 struct inode *VAR_3 = VAR_2->f_mapping->host;
 unsigned long long VAR_4;





 if (FUNC_1(VAR_3->i_mode))
  VAR_4 = FUNC_3(VAR_3);
 else
  VAR_4 = VAR_1->fd_dev_size;

 return FUNC_2(VAR_4 - VAR_0->dev_attrib.block_size,
         VAR_0->dev_attrib.block_size);
}
