
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_1__* host; } ;
struct ipr_cmnd {int (* done ) (struct ipr_cmnd*) ;struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct ipr_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct ipr_cmnd *VAR_0)
{
 unsigned long VAR_1;
 struct ipr_ioa_cfg *VAR_2 = VAR_0->ioa_cfg;

 FUNC_0(VAR_2->host->host_lock, VAR_1);
 VAR_0->done(VAR_0);
 FUNC_1(VAR_2->host->host_lock, VAR_1);
}
