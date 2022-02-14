
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* read ) (struct igc_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct igc_hw*,scalar_t__,int,scalar_t__*) ;

s32 FUNC_2(struct igc_hw *VAR_3)
{
 u16 VAR_4 = 0;
 u16 VAR_5, VAR_6;
 s32 VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < (VAR_1 + 1); VAR_5++) {
  VAR_7 = VAR_3->nvm.ops.read(VAR_3, VAR_5, 1, &VAR_6);
  if (VAR_7) {
   FUNC_0("NVM Read Error\n");
   goto out;
  }
  VAR_4 += VAR_6;
 }

 if (VAR_4 != (u16)VAR_2) {
  FUNC_0("NVM Checksum Invalid\n");
  VAR_7 = -VAR_0;
  goto out;
 }

out:
 return VAR_7;
}
