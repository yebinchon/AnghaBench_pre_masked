
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {struct adapter* i_private; } ;
struct fw_devlog_e {scalar_t__ timestamp; int seqno; } ;
struct file {int dummy; } ;
struct devlog_params {scalar_t__ start; int size; int memtype; } ;
struct devlog_info {int nentries; unsigned int first; struct fw_devlog_e* log; } ;
struct TYPE_2__ {int drv_memwin; struct devlog_params devlog; } ;
struct adapter {int win0_lock; TYPE_1__ params; } ;
typedef int __u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct devlog_info* FUNC_0 (struct file*,int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*,int ,int ,scalar_t__,int,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 struct adapter *VAR_6 = VAR_4->i_private;
 struct devlog_params *VAR_7 = &VAR_6->params.devlog;
 struct devlog_info *VAR_8;
 unsigned int VAR_9;
 u32 VAR_10;
 int VAR_11;



 if (VAR_7->start == 0)
  return -VAR_1;




 VAR_8 = FUNC_0(VAR_5, &VAR_3,
       sizeof(*VAR_8) + VAR_7->size);
 if (!VAR_8)
  return -VAR_0;



 VAR_8->nentries = (VAR_7->size / sizeof(struct fw_devlog_e));
 VAR_8->first = 0;
 FUNC_3(&VAR_6->win0_lock);
 VAR_11 = FUNC_5(VAR_6, VAR_6->params.drv_memwin, VAR_7->memtype,
      VAR_7->start, VAR_7->size, (__be32 *)VAR_8->log,
      VAR_2);
 FUNC_4(&VAR_6->win0_lock);
 if (VAR_11) {
  FUNC_2(VAR_4, VAR_5);
  return VAR_11;
 }




 for (VAR_10 = ~((u32)0), VAR_9 = 0; VAR_9 < VAR_8->nentries; VAR_9++) {
  struct fw_devlog_e *VAR_12 = &VAR_8->log[VAR_9];
  __u32 VAR_13;

  if (VAR_12->timestamp == 0)
   continue;

  VAR_13 = FUNC_1(VAR_12->seqno);
  if (VAR_13 < VAR_10) {
   VAR_10 = VAR_13;
   VAR_8->first = VAR_9;
  }
 }
 return 0;
}
