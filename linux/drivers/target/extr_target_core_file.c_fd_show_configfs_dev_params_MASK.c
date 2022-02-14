
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct fd_dev {int fd_dev_id; char* fd_dev_name; int fbd_flags; int fd_dev_size; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct se_device *VAR_2, char *VAR_3)
{
 struct fd_dev *VAR_4 = FUNC_0(VAR_2);
 ssize_t VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3 + VAR_5, "TCM FILEIO ID: %u", VAR_4->fd_dev_id);
 VAR_5 += FUNC_1(VAR_3 + VAR_5, "        File: %s  Size: %llu  Mode: %s Async: %d\n",
  VAR_4->fd_dev_name, VAR_4->fd_dev_size,
  (VAR_4->fbd_flags & VAR_1) ?
  "Buffered-WCE" : "O_DSYNC",
  !!(VAR_4->fbd_flags & VAR_0));
 return VAR_5;
}
