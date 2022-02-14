
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct htc_target {TYPE_1__* dev; int tgt_creds; int cred_dist_list; int credit_info; scalar_t__ rx_st_flags; scalar_t__ htc_flags; } ;
struct htc_packet {int dummy; } ;
struct TYPE_3__ {int irq_proc_reg; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct htc_target*) ;
 int FUNC_4 (struct htc_target*) ;
 int FUNC_5 (struct htc_target*,struct htc_packet*) ;
 struct htc_packet* FUNC_6 (struct htc_target*,int) ;
 int FUNC_7 (struct htc_target*) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static int FUNC_9(struct htc_target *VAR_0)
{
 struct htc_packet *VAR_1;
 int VAR_2;

 FUNC_8(&VAR_0->dev->irq_proc_reg, 0,
        sizeof(VAR_0->dev->irq_proc_reg));


 FUNC_1(VAR_0->dev);

 VAR_0->htc_flags = 0;
 VAR_0->rx_st_flags = 0;


 while ((VAR_1 = FUNC_6(VAR_0, 0)) != ((void*)0)) {
  VAR_2 = FUNC_5(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }


 FUNC_0(VAR_0->credit_info, &VAR_0->cred_dist_list,
      VAR_0->tgt_creds);

 FUNC_4(VAR_0);


 VAR_2 = FUNC_7(VAR_0);

 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_2(VAR_0->dev);

 if (VAR_2)
  FUNC_3(VAR_0);

 return VAR_2;
}
