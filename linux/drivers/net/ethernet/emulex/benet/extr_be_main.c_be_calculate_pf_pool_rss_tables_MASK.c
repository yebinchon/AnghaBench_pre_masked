
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct be_port_resources {int nic_pfs; int max_vfs; int member_0; } ;
struct TYPE_2__ {int max_rss_tables; } ;
struct be_adapter {TYPE_1__ pool_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*,int *,struct be_port_resources*,int ,int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_3)
{
 struct be_port_resources VAR_4 = {0};
 u8 VAR_5;
 u16 VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, ((void*)0), &VAR_4, VAR_2,
      VAR_1, 0);

 VAR_5 = VAR_0 - VAR_4.nic_pfs;




 VAR_3->pool_res.max_rss_tables =
  VAR_6 * VAR_5 / VAR_4.max_vfs;
}
