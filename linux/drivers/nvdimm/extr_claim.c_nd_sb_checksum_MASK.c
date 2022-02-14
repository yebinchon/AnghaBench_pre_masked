
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nd_pfn_sb {int dummy; } ;
struct nd_gen_sb {int checksum; } ;
struct btt_sb {int dummy; } ;
typedef int __le64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct nd_gen_sb*,int,int) ;

u64 FUNC_2(struct nd_gen_sb *VAR_1)
{
 u64 VAR_2;
 __le64 VAR_3;

 FUNC_0(sizeof(struct btt_sb) != VAR_0);
 FUNC_0(sizeof(struct nd_pfn_sb) != VAR_0);
 FUNC_0(sizeof(struct nd_gen_sb) != VAR_0);

 VAR_3 = VAR_1->checksum;
 VAR_1->checksum = 0;
 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_1), 1);
 VAR_1->checksum = VAR_3;
 return VAR_2;
}
