
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct afs_vlserver_list {int dummy; } ;
struct afs_cell {TYPE_1__* net; int name_len; int name; } ;
struct TYPE_2__ {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct afs_vlserver_list* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct afs_vlserver_list*) ;
 int FUNC_2 (struct afs_vlserver_list*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int) ;
 struct afs_vlserver_list* FUNC_5 (struct afs_cell*,char*,int) ;
 struct afs_vlserver_list* FUNC_6 (TYPE_1__*,char*,int,char,int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ,char*,char**,scalar_t__*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,int ) ;

struct afs_vlserver_list *FUNC_11(struct afs_cell *VAR_3, time64_t *VAR_4)
{
 struct afs_vlserver_list *VAR_5;
 char *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_3("%s", VAR_3->name);

 VAR_7 = FUNC_7(VAR_3->net->net, "afsdb", VAR_3->name, VAR_3->name_len,
   "srv=1", &VAR_6, VAR_4, 1);
 if (VAR_7 < 0) {
  FUNC_4(" = %d [dns]", VAR_7);
  return FUNC_0(VAR_7);
 }

 if (*VAR_4 == 0)
  *VAR_4 = FUNC_9() + 60;

 if (VAR_7 > 1 && VAR_6[0] == 0)
  VAR_5 = FUNC_5(VAR_3, VAR_6, VAR_7);
 else
  VAR_5 = FUNC_6(VAR_3->net, VAR_6, VAR_7, ',',
           VAR_2, VAR_0);
 FUNC_8(VAR_6);
 if (FUNC_1(VAR_5) && VAR_5 != FUNC_0(-VAR_1))
  FUNC_10("Failed to parse DNS data %ld\n", FUNC_2(VAR_5));

 return VAR_5;
}
