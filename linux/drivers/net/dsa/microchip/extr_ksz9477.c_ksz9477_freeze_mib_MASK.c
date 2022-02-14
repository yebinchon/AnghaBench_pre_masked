
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cnt_mutex; } ;
struct ksz_port {int freeze; TYPE_1__ mib; } ;
struct ksz_device {struct ksz_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_device*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ksz_device *VAR_2, int VAR_3, bool VAR_4)
{
 u32 VAR_5 = VAR_4 ? VAR_0 : 0;
 struct ksz_port *VAR_6 = &VAR_2->ports[VAR_3];


 FUNC_1(&VAR_6->mib.cnt_mutex);
 FUNC_0(VAR_2, VAR_3, VAR_1, VAR_5);


 VAR_6->freeze = VAR_4;
 FUNC_2(&VAR_6->mib.cnt_mutex);
}
