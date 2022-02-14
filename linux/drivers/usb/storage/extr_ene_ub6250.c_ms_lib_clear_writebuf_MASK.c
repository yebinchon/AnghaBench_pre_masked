
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_4__ {int PagesPerBlock; int BytesPerSector; TYPE_1__* blkext; scalar_t__ blkpag; scalar_t__ wrtblk; } ;
struct ene_ub6250_info {TYPE_2__ MS_Lib; } ;
struct TYPE_3__ {int logadr; int mngflg; int ovrflg; int status1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (struct ene_ub6250_info*) ;

__attribute__((used)) static void FUNC_2(struct us_data *VAR_4)
{
 int VAR_5;
 struct ene_ub6250_info *VAR_6 = (struct ene_ub6250_info *) VAR_4->extra;

 VAR_6->MS_Lib.wrtblk = (u16)-1;
 FUNC_1(VAR_6);

 if (VAR_6->MS_Lib.blkpag)
  FUNC_0(VAR_6->MS_Lib.blkpag, 0xff, VAR_6->MS_Lib.PagesPerBlock * VAR_6->MS_Lib.BytesPerSector);

 if (VAR_6->MS_Lib.blkext) {
  for (VAR_5 = 0; VAR_5 < VAR_6->MS_Lib.PagesPerBlock; VAR_5++) {
   VAR_6->MS_Lib.blkext[VAR_5].status1 = VAR_3;
   VAR_6->MS_Lib.blkext[VAR_5].ovrflg = VAR_2;
   VAR_6->MS_Lib.blkext[VAR_5].mngflg = VAR_1;
   VAR_6->MS_Lib.blkext[VAR_5].logadr = VAR_0;
  }
 }
}
