
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ txq_entries; scalar_t__ rxq_entries; int net_dev; } ;
struct efx_channel {scalar_t__ eventq_mask; int channel; struct efx_nic* efx; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_channel*) ;
 scalar_t__ FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,int ) ;
 int VAR_2 ;
 unsigned long FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct efx_channel *VAR_3)
{
 struct efx_nic *VAR_4 = VAR_3->efx;
 unsigned long VAR_5;

 FUNC_3(VAR_4, VAR_2, VAR_4->net_dev,
    "chan %d create event queue\n", VAR_3->channel);



 VAR_5 = FUNC_4(VAR_4->rxq_entries + VAR_4->txq_entries + 128);
 FUNC_0(VAR_5 > VAR_0);
 VAR_3->eventq_mask = FUNC_2(VAR_5, VAR_1) - 1;

 return FUNC_1(VAR_3);
}
