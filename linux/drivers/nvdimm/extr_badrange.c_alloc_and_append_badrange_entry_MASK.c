
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badrange_entry {int dummy; } ;
struct badrange {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct badrange*,struct badrange_entry*,int ,int ) ;
 struct badrange_entry* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct badrange *VAR_1,
  u64 VAR_2, u64 VAR_3, gfp_t VAR_4)
{
 struct badrange_entry *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3);
 return 0;
}
