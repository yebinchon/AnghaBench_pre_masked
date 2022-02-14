
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct rtw_dev {TYPE_2__ hci; } ;
struct TYPE_3__ {int (* read32 ) (struct rtw_dev*,int ) ;} ;


 int FUNC_0 (struct rtw_dev*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct rtw_dev *VAR_0, u32 VAR_1)
{
 return VAR_0->hci.ops->read32(VAR_0, VAR_1);
}
