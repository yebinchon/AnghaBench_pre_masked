
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {char* path; int ino; int dev; int count; int rules; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct audit_watch* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct audit_watch* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct audit_watch *FUNC_5(char *VAR_4)
{
 struct audit_watch *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (FUNC_4(!VAR_5))
  return FUNC_0(-VAR_2);

 FUNC_1(&VAR_5->rules);
 FUNC_3(&VAR_5->count, 1);
 VAR_5->path = VAR_4;
 VAR_5->dev = VAR_0;
 VAR_5->ino = VAR_1;

 return VAR_5;
}
