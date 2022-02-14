
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct atl2_hw {size_t flash_vendor; } ;
struct TYPE_3__ {int cmdREAD; int cmdWRSR; int cmdRDSR; int cmdWREN; int cmdRDID; int cmdCHIP_ERASE; int cmdSECTOR_ERASE; int cmdPROGRAM; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct atl2_hw*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_2(struct atl2_hw *VAR_9)
{
 if (VAR_9->flash_vendor >= FUNC_0(VAR_8))
  VAR_9->flash_vendor = 0;


 FUNC_1(VAR_9, VAR_1,
  VAR_8[VAR_9->flash_vendor].cmdPROGRAM);
 FUNC_1(VAR_9, VAR_5,
  VAR_8[VAR_9->flash_vendor].cmdSECTOR_ERASE);
 FUNC_1(VAR_9, VAR_0,
  VAR_8[VAR_9->flash_vendor].cmdCHIP_ERASE);
 FUNC_1(VAR_9, VAR_2,
  VAR_8[VAR_9->flash_vendor].cmdRDID);
 FUNC_1(VAR_9, VAR_6,
  VAR_8[VAR_9->flash_vendor].cmdWREN);
 FUNC_1(VAR_9, VAR_3,
  VAR_8[VAR_9->flash_vendor].cmdRDSR);
 FUNC_1(VAR_9, VAR_7,
  VAR_8[VAR_9->flash_vendor].cmdWRSR);
 FUNC_1(VAR_9, VAR_4,
  VAR_8[VAR_9->flash_vendor].cmdREAD);
}
