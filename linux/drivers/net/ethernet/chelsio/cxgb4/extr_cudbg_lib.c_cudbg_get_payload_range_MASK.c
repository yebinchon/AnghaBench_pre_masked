
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cudbg_region_info {int exist; int end; int start; } ;
struct cudbg_meminfo {int dummy; } ;
struct cudbg_mem_desc {int limit; int base; int member_0; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct cudbg_meminfo*) ;
 int FUNC_1 (struct adapter*,struct cudbg_meminfo*,int ,char const*,struct cudbg_mem_desc*) ;
 int FUNC_2 (struct adapter*,struct cudbg_meminfo*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_0, u8 VAR_1,
       const char *VAR_2,
       struct cudbg_region_info *VAR_3)
{
 struct cudbg_mem_desc VAR_4 = { 0 };
 struct cudbg_meminfo VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_0, &VAR_5, VAR_1, VAR_2,
      &VAR_4);
 if (VAR_6) {
  VAR_3->exist = 0;
  return 0;
 }

 VAR_3->exist = 1;
 VAR_3->start = VAR_4.base;
 VAR_3->end = VAR_4.limit;

 return FUNC_2(VAR_0, &VAR_5, VAR_1,
          &VAR_3->start, &VAR_3->end);
}
