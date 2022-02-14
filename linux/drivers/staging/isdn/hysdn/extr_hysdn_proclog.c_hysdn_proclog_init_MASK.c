
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct procdata {int rd_queue; int log_name; int log; } ;
struct TYPE_4__ {void* proclog; int myid; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct procdata* FUNC_1 (int,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int ,int *,TYPE_1__*) ;
 int FUNC_3 (int ,char*,char*,int ) ;

int
FUNC_4(hysdn_card *VAR_7)
{
 struct procdata *VAR_8;



 if ((VAR_8 = FUNC_1(sizeof(struct procdata), VAR_0)) != ((void*)0)) {
  FUNC_3(VAR_8->log_name, "%s%d", VAR_1, VAR_7->myid);
  VAR_8->log = FUNC_2(VAR_8->log_name,
          VAR_2 | VAR_3 | VAR_4, VAR_5,
          &VAR_6, VAR_7);

  FUNC_0(&(VAR_8->rd_queue));

  VAR_7->proclog = (void *) VAR_8;
 }
 return (0);
}
