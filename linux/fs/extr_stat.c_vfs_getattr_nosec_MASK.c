
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int attributes; int result_mask; } ;
struct inode {TYPE_1__* i_op; } ;
struct TYPE_2__ {int (* getattr ) (struct path const*,struct kstat*,int ,unsigned int) ;} ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct kstat*) ;
 int FUNC_4 (struct kstat*,int ,int) ;
 int FUNC_5 (struct path const*,struct kstat*,int ,unsigned int) ;

int FUNC_6(const struct path *VAR_5, struct kstat *VAR_6,
        u32 VAR_7, unsigned int VAR_8)
{
 struct inode *VAR_9 = FUNC_2(VAR_5->dentry);

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->result_mask |= VAR_4;
 VAR_7 &= VAR_1;
 VAR_8 &= VAR_0;


 if (FUNC_1(VAR_9))
  VAR_6->result_mask &= ~VAR_2;
 if (FUNC_0(VAR_9))
  VAR_6->attributes |= VAR_3;

 if (VAR_9->i_op->getattr)
  return VAR_9->i_op->getattr(VAR_5, VAR_6, VAR_7,
         VAR_8);

 FUNC_3(VAR_9, VAR_6);
 return 0;
}
