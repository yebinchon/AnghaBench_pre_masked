
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


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ksz_device*,int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ksz_device*,int,size_t,int *) ;
 int FUNC_4 (struct ksz_device*,int,size_t,int *,int *) ;

__attribute__((used)) static void FUNC_5(struct ksz_device *VAR_2, int VAR_3)
{
 struct ksz_port_mib *VAR_4 = &VAR_2->ports[VAR_3].mib;


 FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_3), 1);
 FUNC_1(VAR_2, VAR_0, VAR_1, 1);
 FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_3), 0);

 VAR_4->cnt_ptr = 0;


 while (VAR_4->cnt_ptr < VAR_2->reg_mib_cnt) {
  VAR_2->dev_ops->r_mib_cnt(VAR_2, VAR_3, VAR_4->cnt_ptr,
     &VAR_4->counters[VAR_4->cnt_ptr]);
  ++VAR_4->cnt_ptr;
 }


 while (VAR_4->cnt_ptr < VAR_2->mib_cnt) {
  VAR_2->dev_ops->r_mib_pkt(VAR_2, VAR_3, VAR_4->cnt_ptr,
     ((void*)0), &VAR_4->counters[VAR_4->cnt_ptr]);
  ++VAR_4->cnt_ptr;
 }
 VAR_4->cnt_ptr = 0;
 FUNC_2(VAR_4->counters, 0, VAR_2->mib_cnt * sizeof(u64));
}
