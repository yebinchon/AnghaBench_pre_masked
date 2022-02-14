
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* resp; int error; } ;
struct TYPE_3__ {int sbc; } ;
struct mmc_blk_request {TYPE_2__ stop; TYPE_1__ mrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mmc_blk_request *VAR_3)
{
 u32 VAR_4;
 if (!VAR_3->stop.error) {
  bool VAR_5;


  VAR_4 = VAR_3->stop.resp[0] & VAR_0;
  VAR_5 = VAR_4 & VAR_2 && !VAR_3->mrq.sbc;

  if (VAR_4 && !VAR_5)
   VAR_3->stop.error = -VAR_1;
 }
}
