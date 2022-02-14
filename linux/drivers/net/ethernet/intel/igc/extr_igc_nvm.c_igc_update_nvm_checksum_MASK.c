
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* write ) (struct igc_hw*,scalar_t__,int,scalar_t__*) ;scalar_t__ (* read ) (struct igc_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct igc_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct igc_hw*,scalar_t__,int,scalar_t__*) ;

s32 FUNC_3(struct igc_hw *VAR_2)
{
 u16 VAR_3 = 0;
 u16 VAR_4, VAR_5;
 s32 VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = VAR_2->nvm.ops.read(VAR_2, VAR_4, 1, &VAR_5);
  if (VAR_6) {
   FUNC_0("NVM Read Error while updating checksum.\n");
   goto out;
  }
  VAR_3 += VAR_5;
 }
 VAR_3 = (u16)VAR_1 - VAR_3;
 VAR_6 = VAR_2->nvm.ops.write(VAR_2, VAR_0, 1, &VAR_3);
 if (VAR_6)
  FUNC_0("NVM Write Error while updating checksum.\n");

out:
 return VAR_6;
}
