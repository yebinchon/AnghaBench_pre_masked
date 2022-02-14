
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct smsc911x_data {int dev_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reg_read ) (struct smsc911x_data*,int ) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct smsc911x_data*,int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct smsc911x_data *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->dev_lock, VAR_3);
 VAR_2 = VAR_0->ops->reg_read(VAR_0, VAR_1);
 FUNC_1(&VAR_0->dev_lock, VAR_3);

 return VAR_2;
}
