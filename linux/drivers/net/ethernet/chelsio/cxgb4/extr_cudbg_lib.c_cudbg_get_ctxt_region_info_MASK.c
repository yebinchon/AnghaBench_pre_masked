
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct cudbg_region_info {int exist; int end; int start; } ;
struct cudbg_meminfo {int avail; } ;
struct cudbg_mem_desc {int limit; int base; } ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct adapter*,struct cudbg_meminfo*) ;
 int FUNC_3 (struct adapter*,struct cudbg_meminfo*,scalar_t__,int ,struct cudbg_mem_desc*) ;
 int FUNC_4 (struct adapter*,struct cudbg_meminfo*,scalar_t__,int *,int*) ;
 int * VAR_7 ;
 int FUNC_5 (struct cudbg_mem_desc*,int ,int) ;
 scalar_t__ FUNC_6 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_8,
          struct cudbg_region_info *VAR_9,
          u8 *VAR_10)
{
 struct cudbg_mem_desc VAR_11;
 struct cudbg_meminfo VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(VAR_8, &VAR_12);
 if (VAR_18)
  return VAR_18;


 for (VAR_13 = VAR_1; VAR_13 <= VAR_3; VAR_13++) {
  VAR_16 = 0;
  FUNC_5(&VAR_11, 0, sizeof(struct cudbg_mem_desc));
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_12.avail); VAR_14++) {
   VAR_18 = FUNC_3(VAR_8, &VAR_12, VAR_14,
        VAR_7[VAR_13],
        &VAR_11);
   if (!VAR_18) {
    VAR_16 = 1;
    VAR_18 = FUNC_4(VAR_8, &VAR_12, VAR_14,
           &VAR_11.base,
           &VAR_11.limit);
    if (VAR_18) {
     VAR_9[VAR_13].exist = 0;
     break;
    }
    VAR_9[VAR_13].exist = 1;
    VAR_9[VAR_13].start = VAR_11.base;
    VAR_9[VAR_13].end = VAR_11.limit;
    VAR_10[VAR_13] = VAR_14;
    break;
   }
  }
  if (!VAR_16)
   VAR_9[VAR_13].exist = 0;
 }


 VAR_15 = FUNC_6(VAR_8, VAR_6);


 VAR_17 = FUNC_1(VAR_15);
 VAR_9[VAR_2].exist = 1;
 VAR_9[VAR_2].end = (VAR_4 >> VAR_17) * VAR_5;




 VAR_9[VAR_0].exist = 1;
 VAR_9[VAR_0].end = VAR_9[VAR_2].end;

 return 0;
}
