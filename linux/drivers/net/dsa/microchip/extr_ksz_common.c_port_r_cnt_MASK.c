
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ksz_port_mib {size_t cnt_ptr; int * counters; } ;
struct ksz_device {size_t reg_mib_cnt; size_t mib_cnt; TYPE_2__* dev_ops; TYPE_1__* ports; } ;
struct TYPE_4__ {int (* r_mib_pkt ) (struct ksz_device*,int,size_t,int *,int *) ;int (* r_mib_cnt ) (struct ksz_device*,int,size_t,int *) ;} ;
struct TYPE_3__ {struct ksz_port_mib mib; } ;


 int FUNC_0 (struct ksz_device*,int,size_t,int *) ;
 int FUNC_1 (struct ksz_device*,int,size_t,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ksz_device *VAR_0, int VAR_1)
{
 struct ksz_port_mib *VAR_2 = &VAR_0->ports[VAR_1].mib;
 u64 *VAR_3;


 while (VAR_2->cnt_ptr < VAR_0->reg_mib_cnt) {
  VAR_0->dev_ops->r_mib_cnt(VAR_0, VAR_1, VAR_2->cnt_ptr,
     &VAR_2->counters[VAR_2->cnt_ptr]);
  ++VAR_2->cnt_ptr;
 }


 VAR_3 = &VAR_2->counters[VAR_0->mib_cnt];


 while (VAR_2->cnt_ptr < VAR_0->mib_cnt) {
  VAR_0->dev_ops->r_mib_pkt(VAR_0, VAR_1, VAR_2->cnt_ptr,
     VAR_3, &VAR_2->counters[VAR_2->cnt_ptr]);
  ++VAR_2->cnt_ptr;
 }
 VAR_2->cnt_ptr = 0;
}
