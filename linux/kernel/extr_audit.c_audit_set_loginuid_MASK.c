
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kuid_t ;
struct TYPE_4__ {unsigned int sessionid; int loginuid; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int,int) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(kuid_t VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_0;
 kuid_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_1);
 VAR_4 = FUNC_2(VAR_1);

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7)
  goto out;


 if (FUNC_5(VAR_3)) {
  VAR_5 = (unsigned int)FUNC_0(&VAR_2);
  if (FUNC_6(VAR_5 == VAR_0))
   VAR_5 = (unsigned int)FUNC_0(&VAR_2);
 }

 VAR_1->sessionid = VAR_5;
 VAR_1->loginuid = VAR_3;
out:
 FUNC_3(VAR_6, VAR_3, VAR_4, VAR_5, VAR_7);
 return VAR_7;
}
