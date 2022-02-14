
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ksz_port_mib {int counters; scalar_t__ cnt_ptr; int cnt_mutex; } ;
struct ksz_device {int mib_cnt; TYPE_1__* ports; } ;
struct TYPE_2__ {struct ksz_port_mib mib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ksz_device*,int,int ,int ) ;
 int FUNC_1 (struct ksz_device*,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ksz_device *VAR_4, int VAR_5)
{
 struct ksz_port_mib *VAR_6 = &VAR_4->ports[VAR_5].mib;


 FUNC_3(&VAR_6->cnt_mutex);
 FUNC_0(VAR_4, VAR_5, VAR_1,
       VAR_0);
 FUNC_1(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_5, VAR_1, 0);
 FUNC_4(&VAR_6->cnt_mutex);

 VAR_6->cnt_ptr = 0;
 FUNC_2(VAR_6->counters, 0, VAR_4->mib_cnt * sizeof(u64));
}
