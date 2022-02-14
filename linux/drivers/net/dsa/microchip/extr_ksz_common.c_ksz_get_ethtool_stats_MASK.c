
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct ksz_port_mib {int cnt_mutex; int counters; int cnt_ptr; } ;
struct ksz_device {int mib_cnt; int reg_mib_cnt; TYPE_1__* ports; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct dsa_port {int slave; } ;
struct TYPE_2__ {struct ksz_port_mib mib; } ;


 struct dsa_port* FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ksz_device*,int) ;

void FUNC_6(struct dsa_switch *VAR_0, int VAR_1, uint64_t *VAR_2)
{
 const struct dsa_port *VAR_3 = FUNC_0(VAR_0, VAR_1);
 struct ksz_device *VAR_4 = VAR_0->priv;
 struct ksz_port_mib *VAR_5;

 VAR_5 = &VAR_4->ports[VAR_1].mib;
 FUNC_2(&VAR_5->cnt_mutex);


 if (!FUNC_4(VAR_3->slave))
  VAR_5->cnt_ptr = VAR_4->reg_mib_cnt;
 FUNC_5(VAR_4, VAR_1);
 FUNC_1(VAR_2, VAR_5->counters, VAR_4->mib_cnt * sizeof(u64));
 FUNC_3(&VAR_5->cnt_mutex);
}
