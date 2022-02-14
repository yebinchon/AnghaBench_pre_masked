
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dummy; } ;
struct inode {int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
struct fd_dev {int fbd_flags; char* fd_dev_name; struct file* fd_prot_file; struct file* fd_file; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct file* FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct se_device *VAR_8)
{
 struct fd_dev *VAR_9 = FUNC_0(VAR_8);
 struct file *VAR_10, *VAR_11 = VAR_9->fd_file;
 struct inode *VAR_12;
 int VAR_13, VAR_14 = VAR_7 | VAR_4 | VAR_6 | VAR_5;
 char VAR_15[VAR_3];

 if (!VAR_11) {
  FUNC_5("Unable to locate fd_dev->fd_file\n");
  return -VAR_0;
 }

 VAR_12 = VAR_11->f_mapping->host;
 if (FUNC_3(VAR_12->i_mode)) {
  FUNC_5("FILEIO Protection emulation only supported on"
         " !S_ISBLK\n");
  return -VAR_1;
 }

 if (VAR_9->fbd_flags & VAR_2)
  VAR_14 &= ~VAR_5;

 FUNC_6(VAR_15, VAR_3, "%s.protection",
   VAR_9->fd_dev_name);

 VAR_10 = FUNC_4(VAR_15, VAR_14, 0600);
 if (FUNC_1(VAR_10)) {
  FUNC_5("filp_open(%s) failed\n", VAR_15);
  VAR_13 = FUNC_2(VAR_10);
  return VAR_13;
 }
 VAR_9->fd_prot_file = VAR_10;

 return 0;
}
