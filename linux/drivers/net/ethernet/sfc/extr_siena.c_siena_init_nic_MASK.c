
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ context_id; int rx_indir_table; } ;
struct efx_nic {TYPE_1__ rss_context; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int,int,int ) ;
 int FUNC_5 (struct efx_nic*,int *,int ) ;
 int FUNC_6 (struct efx_nic*,int *,int ) ;
 int FUNC_7 (struct efx_nic*,int,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct efx_nic *VAR_17)
{
 efx_oword_t VAR_18;
 int VAR_19;


 VAR_19 = FUNC_3(VAR_17);
 if (VAR_19)
  return VAR_19;


 FUNC_5(VAR_17, &VAR_18, VAR_14);
 FUNC_1(VAR_18, VAR_9, 1);
 FUNC_6(VAR_17, &VAR_18, VAR_14);




 FUNC_5(VAR_17, &VAR_18, VAR_13);
 FUNC_1(VAR_18, VAR_1, 0);
 FUNC_1(VAR_18, VAR_10, 1);
 FUNC_6(VAR_17, &VAR_18, VAR_13);

 FUNC_5(VAR_17, &VAR_18, VAR_12);
 FUNC_1(VAR_18, VAR_3, 0);
 FUNC_1(VAR_18, VAR_6, 1);



 FUNC_1(VAR_18, VAR_5, 1);
 FUNC_1(VAR_18, VAR_4, 1);
 FUNC_1(VAR_18, VAR_7, 1);
 FUNC_1(VAR_18, VAR_8,
       VAR_0 >> 5);
 FUNC_6(VAR_17, &VAR_18, VAR_12);

 FUNC_7(VAR_17, 0, VAR_17->rss_context.rx_indir_table, ((void*)0));
 VAR_17->rss_context.context_id = 0;


 VAR_19 = FUNC_4(VAR_17, 1, 0, 0);
 if (VAR_19)
  return VAR_19;


 FUNC_0(VAR_18, VAR_2, 0);
 FUNC_6(VAR_17, &VAR_18, VAR_15);

 FUNC_0(VAR_18, VAR_11, 1);
 FUNC_6(VAR_17, &VAR_18, VAR_16);

 FUNC_2(VAR_17);
 return 0;
}
