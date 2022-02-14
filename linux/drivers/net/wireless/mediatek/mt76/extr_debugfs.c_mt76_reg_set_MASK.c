
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mt76_dev {int debugfs_reg; TYPE_1__* bus; } ;
struct TYPE_2__ {int (* wr ) (struct mt76_dev*,int ,int ) ;} ;


 int FUNC_0 (struct mt76_dev*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, u64 VAR_1)
{
 struct mt76_dev *VAR_2 = VAR_0;

 VAR_2->bus->wr(VAR_2, VAR_2->debugfs_reg, VAR_1);
 return 0;
}
