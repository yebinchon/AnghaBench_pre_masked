
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u64 ;
struct ba_lun_info {int * lun_alloc_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct ba_lun_info *VAR_1, u64 VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;

 VAR_3 = VAR_2 / VAR_0;
 VAR_4 = VAR_2 % VAR_0;

 if (FUNC_0(VAR_4, (ulong *)&VAR_1->lun_alloc_map[VAR_3]))
  return -1;

 return 0;
}
