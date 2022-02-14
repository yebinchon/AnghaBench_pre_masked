
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int fanout; int max_idx_node_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 long long FUNC_0 (long long,int) ;

long long FUNC_1(const struct ubifs_info *VAR_2, long long VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 VAR_6 = VAR_2->fanout > 3 ? VAR_2->fanout >> 1 : 2;
 VAR_5 = VAR_0;
 VAR_4 = VAR_1;
 VAR_4 += (VAR_2->max_idx_node_sz * 3) / (VAR_6 - 1);
 VAR_3 *= VAR_5;
 return FUNC_0(VAR_3, VAR_4);
}
