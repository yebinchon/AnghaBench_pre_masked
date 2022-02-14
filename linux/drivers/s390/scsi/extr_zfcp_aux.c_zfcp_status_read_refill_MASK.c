
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {scalar_t__ stat_read_buf_num; int stat_miss; int qdio; } ;


 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct zfcp_adapter*,int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct zfcp_adapter *VAR_0)
{
 while (FUNC_0(&VAR_0->stat_miss, -1, 0))
  if (FUNC_4(VAR_0->qdio)) {
   FUNC_1(&VAR_0->stat_miss);
   if (FUNC_2(&VAR_0->stat_miss) >=
       VAR_0->stat_read_buf_num) {
    FUNC_3(VAR_0, 0, "axsref1");
    return 1;
   }
   break;
  }
 return 0;
}
