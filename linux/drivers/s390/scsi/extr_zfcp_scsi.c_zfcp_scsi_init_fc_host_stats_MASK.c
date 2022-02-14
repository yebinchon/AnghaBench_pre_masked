
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {struct fc_host_statistics* fc_stats; } ;
struct fc_host_statistics {int dummy; } ;


 int VAR_0 ;
 struct fc_host_statistics* FUNC_0 (int,int ) ;
 int FUNC_1 (struct fc_host_statistics*,int ,int) ;

__attribute__((used)) static struct fc_host_statistics*
FUNC_2(struct zfcp_adapter *VAR_1)
{
 struct fc_host_statistics *VAR_2;

 if (!VAR_1->fc_stats) {
  VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
  if (!VAR_2)
   return ((void*)0);
  VAR_1->fc_stats = VAR_2;
 }
 FUNC_1(VAR_1->fc_stats, 0, sizeof(*VAR_1->fc_stats));
 return VAR_1->fc_stats;
}
