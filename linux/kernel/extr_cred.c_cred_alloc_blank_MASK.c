
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int magic; int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 struct cred* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct cred*,int ) ;

struct cred *FUNC_4(void)
{
 struct cred *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->usage, 1);




 if (FUNC_3(VAR_3, VAR_1) < 0)
  goto error;

 return VAR_3;

error:
 FUNC_0(VAR_3);
 return ((void*)0);
}
