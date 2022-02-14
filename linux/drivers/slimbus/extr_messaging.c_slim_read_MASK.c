
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slim_val_inf {int dummy; } ;
struct slim_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct slim_val_inf*,int ,size_t,int *,int *) ;
 int FUNC_1 (struct slim_device*,struct slim_val_inf*,int ) ;

int FUNC_2(struct slim_device *VAR_1, u32 VAR_2, size_t VAR_3, u8 *VAR_4)
{
 struct slim_val_inf VAR_5;

 FUNC_0(&VAR_5, VAR_2, VAR_3, VAR_4, ((void*)0));

 return FUNC_1(VAR_1, &VAR_5, VAR_0);
}
