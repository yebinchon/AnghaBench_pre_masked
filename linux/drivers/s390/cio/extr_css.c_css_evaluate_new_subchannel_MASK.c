
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct schib {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct subchannel_id,struct schib*) ;
 int FUNC_1 (struct subchannel_id,struct schib*) ;

__attribute__((used)) static int FUNC_2(struct subchannel_id VAR_2, int VAR_3)
{
 struct schib VAR_4;
 int VAR_5;

 if (!VAR_3) {

  return -VAR_0;
 }






 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5)
  return (VAR_5 == 3) ? -VAR_1 : VAR_5;

 return FUNC_0(VAR_2, &VAR_4);
}
