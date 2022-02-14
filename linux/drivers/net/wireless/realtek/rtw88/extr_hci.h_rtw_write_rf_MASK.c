
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtw_dev {int rf_lock; TYPE_2__* chip; } ;
typedef enum rtw_rf_path { ____Placeholder_rtw_rf_path } rtw_rf_path ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write_rf ) (struct rtw_dev*,int,int ,int ,int ) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct rtw_dev*,int,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct rtw_dev *VAR_0, enum rtw_rf_path VAR_1,
      u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(&VAR_0->rf_lock, VAR_5);
 VAR_0->chip->ops->write_rf(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_0->rf_lock, VAR_5);
}
