
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_rfkill {scalar_t__ type; struct samsung_laptop* samsung; } ;
struct samsung_laptop {int dummy; } ;
struct sabi_data {int* data; } ;
struct rfkill {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rfkill*,int) ;
 int FUNC_1 (struct samsung_laptop*,struct sabi_data*) ;

__attribute__((used)) static void FUNC_2(struct rfkill *VAR_4, void *VAR_5)
{
 struct samsung_rfkill *VAR_6 = VAR_5;
 struct samsung_laptop *VAR_7 = VAR_6->samsung;
 struct sabi_data VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  return ;

 if (VAR_6->type == VAR_1)
  VAR_9 = VAR_8.data[VAR_3];
 else if (VAR_6->type == VAR_0)
  VAR_9 = VAR_8.data[VAR_2];
 else
  return ;

 FUNC_0(VAR_4, !VAR_9);
}
