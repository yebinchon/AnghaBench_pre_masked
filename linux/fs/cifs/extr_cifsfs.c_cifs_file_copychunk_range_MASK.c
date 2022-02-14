
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_data; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifsFileInfo {int tlink; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_8__ {scalar_t__ time; } ;
struct TYPE_7__ {TYPE_2__* server; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* copychunk_range ) (unsigned int,struct cifsFileInfo*,struct cifsFileInfo*,int ,size_t,int ) ;} ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct file*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*,struct inode*) ;
 int FUNC_6 (unsigned int,struct cifsFileInfo*,struct cifsFileInfo*,int ,size_t,int ) ;
 struct cifs_tcon* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct inode*,struct inode*) ;

ssize_t FUNC_10(unsigned int VAR_5,
    struct file *VAR_6, loff_t VAR_7,
    struct file *VAR_8, loff_t VAR_9,
    size_t VAR_10, unsigned int VAR_11)
{
 struct inode *VAR_12 = FUNC_3(VAR_6);
 struct inode *VAR_13 = FUNC_3(VAR_8);
 struct cifsFileInfo *VAR_14;
 struct cifsFileInfo *VAR_15;
 struct cifs_tcon *VAR_16;
 struct cifs_tcon *VAR_17;
 ssize_t VAR_18;

 FUNC_1(VAR_3, "copychunk range\n");

 if (!VAR_6->private_data || !VAR_8->private_data) {
  VAR_18 = -VAR_0;
  FUNC_1(VAR_4, "missing cifsFileInfo on copy range src file\n");
  goto out;
 }

 VAR_18 = -VAR_2;
 VAR_15 = VAR_8->private_data;
 VAR_14 = VAR_6->private_data;
 VAR_16 = FUNC_7(VAR_14->tlink);
 VAR_17 = FUNC_7(VAR_15->tlink);

 if (VAR_16->ses != VAR_17->ses) {
  FUNC_1(VAR_4, "source and target of copy not on same server\n");
  goto out;
 }

 VAR_18 = -VAR_1;
 if (!VAR_17->ses->server->ops->copychunk_range)
  goto out;






 FUNC_5(VAR_13, VAR_12);

 FUNC_1(VAR_3, "about to flush pages\n");

 FUNC_8(&VAR_13->i_data, 0);

 VAR_18 = FUNC_4(VAR_8);
 if (!VAR_18)
  VAR_18 = VAR_17->ses->server->ops->copychunk_range(VAR_5,
   VAR_14, VAR_15, VAR_7, VAR_10, VAR_9);

 FUNC_2(VAR_6);




 FUNC_0(VAR_13)->time = 0;



 FUNC_9(VAR_12, VAR_13);

out:
 return VAR_18;
}
