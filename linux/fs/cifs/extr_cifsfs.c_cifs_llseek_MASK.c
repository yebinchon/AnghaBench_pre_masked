
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {TYPE_4__* i_mapping; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifsFileInfo {scalar_t__ tlink; } ;
typedef int loff_t ;
struct TYPE_12__ {scalar_t__ time; } ;
struct TYPE_11__ {scalar_t__ nrpages; } ;
struct TYPE_10__ {TYPE_2__* server; } ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {int (* llseek ) (struct file*,struct cifs_tcon*,int,int) ;} ;


 int FUNC_0 (TYPE_6__*) ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct file*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct file*,int,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (struct file*,struct cifs_tcon*,int,int) ;
 struct cifs_tcon* FUNC_8 (scalar_t__) ;

__attribute__((used)) static loff_t FUNC_9(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct cifsFileInfo *VAR_5 = VAR_2->private_data;
 struct cifs_tcon *VAR_6;





 if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
  int VAR_7;
  struct inode *VAR_8 = FUNC_3(VAR_2);





  if (!FUNC_0(FUNC_1(VAR_8)) && VAR_8->i_mapping &&
      VAR_8->i_mapping->nrpages != 0) {
   VAR_7 = FUNC_4(VAR_8->i_mapping);
   if (VAR_7) {
    FUNC_6(VAR_8->i_mapping, VAR_7);
    return VAR_7;
   }
  }





  FUNC_1(VAR_8)->time = 0;

  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7 < 0)
   return (loff_t)VAR_7;
 }
 if (VAR_5 && VAR_5->tlink) {
  VAR_6 = FUNC_8(VAR_5->tlink);
  if (VAR_6->ses->server->ops->llseek)
   return VAR_6->ses->server->ops->llseek(VAR_2, VAR_6,
             VAR_3, VAR_4);
 }
 return FUNC_5(VAR_2, VAR_3, VAR_4);
}
