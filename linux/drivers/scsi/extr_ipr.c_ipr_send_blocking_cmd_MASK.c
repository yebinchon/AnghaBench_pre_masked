
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipr_ioa_cfg {TYPE_1__* host; } ;
struct ipr_cmnd {int completion; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipr_cmnd*,int ,void (*) (struct timer_list*),int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ipr_cmnd *VAR_1,
      void (*VAR_2) (struct timer_list *),
      u32 VAR_3)
{
 struct ipr_ioa_cfg *VAR_4 = VAR_1->ioa_cfg;

 FUNC_0(&VAR_1->completion);
 FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);

 FUNC_3(VAR_4->host->host_lock);
 FUNC_4(&VAR_1->completion);
 FUNC_2(VAR_4->host->host_lock);
}
