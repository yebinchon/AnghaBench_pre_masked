
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct TYPE_4__ {char* nodename; char* sysname; } ;
struct TYPE_3__ {char* ModelName; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 char* VAR_1 ;
 int FUNC_2 (char*,size_t,char*,char*) ;

int
FUNC_3(struct lpfc_vport *VAR_2, char *VAR_3,
 size_t VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6;

 FUNC_1(VAR_2->phba, VAR_5, 0);

 VAR_6 = FUNC_2(VAR_3, VAR_4, "Emulex %s", VAR_2->phba->ModelName);
 if (VAR_4 < VAR_6)
  return VAR_6;

 VAR_6 += FUNC_2(VAR_3 + VAR_6, VAR_4 - VAR_6, " FV%s", VAR_5);
 if (VAR_4 < VAR_6)
  return VAR_6;

 VAR_6 += FUNC_2(VAR_3 + VAR_6, VAR_4 - VAR_6, " DV%s.",
        VAR_1);
 if (VAR_4 < VAR_6)
  return VAR_6;

 VAR_6 += FUNC_2(VAR_3 + VAR_6, VAR_4 - VAR_6, " HN:%s.",
        FUNC_0()->nodename);
 if (VAR_4 < VAR_6)
  return VAR_6;


 VAR_6 += FUNC_2(VAR_3 + VAR_6, VAR_4 - VAR_6, " OS:%s",
        FUNC_0()->sysname);
 return VAR_6;
}
