
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ksz_port_mib {size_t cnt_ptr; size_t mib_start; int * counter; int dropped; } ;
struct ksz_hw {size_t mib_cnt; struct ksz_port_mib* port_mib; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (struct ksz_hw*,int,size_t,int *) ;
 int FUNC_2 (struct ksz_hw*,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_2, int VAR_3)
{
 struct ksz_port_mib *VAR_4 = &VAR_2->port_mib[VAR_3];

 VAR_4->cnt_ptr = 0;
 if (VAR_4->mib_start < VAR_0)
  do {
   FUNC_1(VAR_2, VAR_3, VAR_4->cnt_ptr,
    &VAR_4->counter[VAR_4->cnt_ptr]);
   ++VAR_4->cnt_ptr;
  } while (VAR_4->cnt_ptr < VAR_0);
 if (VAR_2->mib_cnt > VAR_0)
  FUNC_2(VAR_2, VAR_3, VAR_4->dropped,
   &VAR_4->counter[VAR_0]);
 FUNC_0((void *) VAR_4->counter, 0, sizeof(u64) * VAR_1);
 VAR_4->cnt_ptr = 0;
}
