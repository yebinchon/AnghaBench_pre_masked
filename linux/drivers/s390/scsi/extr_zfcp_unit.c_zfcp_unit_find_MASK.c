
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zfcp_unit {int dummy; } ;
struct zfcp_port {int unit_list_lock; } ;


 struct zfcp_unit* FUNC_0 (struct zfcp_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct zfcp_unit *FUNC_3(struct zfcp_port *VAR_0, u64 VAR_1)
{
 struct zfcp_unit *VAR_2;

 FUNC_1(&VAR_0->unit_list_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->unit_list_lock);
 return VAR_2;
}
