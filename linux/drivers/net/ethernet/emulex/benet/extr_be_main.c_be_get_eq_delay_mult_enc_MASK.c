
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef int u32 ;
struct be_eq_obj {size_t idx; struct be_adapter* adapter; } ;
struct be_aic_obj {int prev_eqd; scalar_t__ jiffies; } ;
struct be_adapter {int aic_enabled; struct be_aic_obj* aic_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_eq_obj*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct be_eq_obj *VAR_5)
{
 struct be_adapter *VAR_6 = VAR_5->adapter;
 struct be_aic_obj *VAR_7 = &VAR_6->aic_obj[VAR_5->idx];
 ulong VAR_8 = VAR_4;
 int VAR_9;
 u32 VAR_10;

 if (!VAR_6->aic_enabled)
  return 0;

 if (FUNC_1(VAR_8 - VAR_7->jiffies) < 1)
  VAR_9 = VAR_7->prev_eqd;
 else
  VAR_9 = FUNC_0(VAR_5);

 if (VAR_9 > 100)
  VAR_10 = VAR_1;
 else if (VAR_9 > 60)
  VAR_10 = VAR_2;
 else if (VAR_9 > 20)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_0;

 VAR_7->prev_eqd = VAR_9;

 return VAR_10;
}
