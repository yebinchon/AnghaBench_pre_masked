
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_port_mib {size_t mib_start; size_t cnt_ptr; int * counter; int dropped; } ;
struct ksz_hw {size_t mib_cnt; struct ksz_port_mib* port_mib; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ksz_hw*,int,size_t,int *) ;
 int FUNC_1 (struct ksz_hw*,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct ksz_hw *VAR_1, int VAR_2)
{
 struct ksz_port_mib *VAR_3 = &VAR_1->port_mib[VAR_2];

 if (VAR_3->mib_start < VAR_0)
  while (VAR_3->cnt_ptr < VAR_0) {
   FUNC_0(VAR_1, VAR_2, VAR_3->cnt_ptr,
    &VAR_3->counter[VAR_3->cnt_ptr]);
   ++VAR_3->cnt_ptr;
  }
 if (VAR_1->mib_cnt > VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_3->dropped,
   &VAR_3->counter[VAR_0]);
 VAR_3->cnt_ptr = 0;
 return 0;
}
