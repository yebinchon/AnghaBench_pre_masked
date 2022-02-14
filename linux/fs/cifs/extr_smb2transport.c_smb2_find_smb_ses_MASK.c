
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_ses {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 struct cifs_ses* FUNC_0 (struct TCP_Server_Info*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct cifs_ses *
FUNC_3(struct TCP_Server_Info *VAR_1, __u64 VAR_2)
{
 struct cifs_ses *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0);

 return VAR_3;
}
