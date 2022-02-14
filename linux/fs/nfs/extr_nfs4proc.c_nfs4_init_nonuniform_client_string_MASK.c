
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {char* cl_owner_id; TYPE_1__* cl_rpcclient; } ;
struct TYPE_2__ {char* cl_nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (size_t,int ) ;
 char* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,size_t,char*,char*,char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct nfs_client *VAR_6)
{
 size_t VAR_7;
 char *VAR_8;

 if (VAR_6->cl_owner_id != ((void*)0))
  return 0;

 FUNC_1();
 VAR_7 = 14 +
  FUNC_5(VAR_6->cl_rpcclient->cl_nodename) +
  1 +
  FUNC_5(FUNC_3(VAR_6->cl_rpcclient, VAR_4)) +
  1;
 FUNC_2();
 if (VAR_5[0] != '\0')
  VAR_7 += FUNC_5(VAR_5) + 1;
 if (VAR_7 > VAR_3 + 1)
  return -VAR_0;






 VAR_8 = FUNC_0(VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_1();
 if (VAR_5[0] != '\0')
  FUNC_4(VAR_8, VAR_7, "Linux NFSv4.0 %s/%s/%s",
     VAR_6->cl_rpcclient->cl_nodename,
     VAR_5,
     FUNC_3(VAR_6->cl_rpcclient,
        VAR_4));
 else
  FUNC_4(VAR_8, VAR_7, "Linux NFSv4.0 %s/%s",
     VAR_6->cl_rpcclient->cl_nodename,
     FUNC_3(VAR_6->cl_rpcclient,
        VAR_4));
 FUNC_2();

 VAR_6->cl_owner_id = VAR_8;
 return 0;
}
