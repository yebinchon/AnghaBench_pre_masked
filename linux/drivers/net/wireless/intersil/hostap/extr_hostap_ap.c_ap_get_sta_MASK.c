
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {struct sta_info* hnext; int addr; } ;
struct ap_data {struct sta_info** sta_hash; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static struct sta_info* FUNC_2(struct ap_data *VAR_0, u8 *VAR_1)
{
 struct sta_info *VAR_2;

 VAR_2 = VAR_0->sta_hash[FUNC_0(VAR_1)];
 while (VAR_2 != ((void*)0) && !FUNC_1(VAR_2->addr, VAR_1))
  VAR_2 = VAR_2->hnext;
 return VAR_2;
}
