
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_mac {int * unicast_addr_hash; int * multicast_addr_hash; int mac_id; int fm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fman_mac *VAR_3)
{
 FUNC_0(VAR_3->fm, VAR_2, VAR_3->mac_id,
        VAR_0);
 FUNC_0(VAR_3->fm, VAR_2, VAR_3->mac_id,
        VAR_1);


 FUNC_1(VAR_3->multicast_addr_hash);
 VAR_3->multicast_addr_hash = ((void*)0);


 FUNC_1(VAR_3->unicast_addr_hash);
 VAR_3->unicast_addr_hash = ((void*)0);
}
