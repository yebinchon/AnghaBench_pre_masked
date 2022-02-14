
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int addr; struct sta_info* hnext; } ;
struct ap_data {struct sta_info** sta_hash; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ap_data *VAR_0, struct sta_info *VAR_1)
{
 VAR_1->hnext = VAR_0->sta_hash[FUNC_0(VAR_1->addr)];
 VAR_0->sta_hash[FUNC_0(VAR_1->addr)] = VAR_1;
}
