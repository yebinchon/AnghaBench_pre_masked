
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* release ) (struct igc_hw*) ;scalar_t__ (* acquire ) (struct igc_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct igc_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 scalar_t__ FUNC_3 (struct igc_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct igc_hw*) ;
 int FUNC_5 (struct igc_hw*) ;
 int FUNC_6 (struct igc_hw*) ;
 int FUNC_7 (struct igc_hw*) ;

__attribute__((used)) static s32 FUNC_8(struct igc_hw *VAR_2)
{
 u16 VAR_3 = 0;
 s32 VAR_4 = 0;
 u16 VAR_5, VAR_6;





 VAR_4 = FUNC_1(VAR_2, 0, 1, &VAR_6);
 if (VAR_4) {
  FUNC_0("EEPROM read failed\n");
  goto out;
 }

 VAR_4 = VAR_2->nvm.ops.acquire(VAR_2);
 if (VAR_4)
  goto out;






 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, VAR_5, 1, &VAR_6);
  if (VAR_4) {
   VAR_2->nvm.ops.release(VAR_2);
   FUNC_0("NVM Read Error while updating checksum.\n");
   goto out;
  }
  VAR_3 += VAR_6;
 }
 VAR_3 = (u16)VAR_1 - VAR_3;
 VAR_4 = FUNC_3(VAR_2, VAR_0, 1,
         &VAR_3);
 if (VAR_4) {
  VAR_2->nvm.ops.release(VAR_2);
  FUNC_0("NVM Write Error while updating checksum.\n");
  goto out;
 }

 VAR_2->nvm.ops.release(VAR_2);

 VAR_4 = FUNC_2(VAR_2);

out:
 return VAR_4;
}
