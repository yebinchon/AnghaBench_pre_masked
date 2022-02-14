
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_chan; int markwq; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;
typedef scalar_t__ scif_epd_t ;
typedef int dma_cookie_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int *,int *) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(scif_epd_t VAR_4, int VAR_5)
{
 struct scif_endpt *VAR_6 = (struct scif_endpt *)VAR_4;
 dma_cookie_t VAR_7 = VAR_5 & ~VAR_3;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_6->rma_info.markwq,
            FUNC_0(
            VAR_6->rma_info.dma_chan,
            VAR_7, ((void*)0), ((void*)0)) ==
            VAR_0,
            VAR_2);
 if (!VAR_8)
  VAR_8 = -VAR_1;
 else if (VAR_8 > 0)
  VAR_8 = 0;
 return VAR_8;
}
