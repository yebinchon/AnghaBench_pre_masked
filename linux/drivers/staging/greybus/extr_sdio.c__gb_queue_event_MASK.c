
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_sdio_host {int queued_events; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct gb_sdio_host *VAR_2, u8 VAR_3)
{
 if (VAR_3 & VAR_0)
  VAR_2->queued_events &= ~VAR_1;
 else if (VAR_3 & VAR_1)
  VAR_2->queued_events &= ~VAR_0;

 VAR_2->queued_events |= VAR_3;
}
