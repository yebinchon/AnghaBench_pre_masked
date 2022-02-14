
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_mac {int * unicast_addr_hash; int * multicast_addr_hash; int mac_id; int fm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fman_mac *VAR_2)
{
 FUNC_0(VAR_2->fm, VAR_1, VAR_2->mac_id,
        VAR_0);


 FUNC_1(VAR_2->multicast_addr_hash);
 VAR_2->multicast_addr_hash = ((void*)0);


 FUNC_1(VAR_2->unicast_addr_hash);
 VAR_2->unicast_addr_hash = ((void*)0);
}
