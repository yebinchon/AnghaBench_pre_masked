
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int loff_t ;
struct TYPE_4__ {long (* fallocate ) (struct file*,struct cifs_tcon*,int,int ,int ) ;} ;
struct TYPE_3__ {struct TCP_Server_Info* server; } ;


 struct cifs_sb_info* FUNC_0 (struct file*) ;
 long VAR_0 ;
 struct cifs_tcon* FUNC_1 (struct cifs_sb_info*) ;
 long FUNC_2 (struct file*,struct cifs_tcon*,int,int ,int ) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_1, int VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 struct cifs_sb_info *VAR_5 = FUNC_0(VAR_1);
 struct cifs_tcon *VAR_6 = FUNC_1(VAR_5);
 struct TCP_Server_Info *VAR_7 = VAR_6->ses->server;

 if (VAR_7->ops->fallocate)
  return VAR_7->ops->fallocate(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
