
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ (* write ) (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;scalar_t__ (* read ) (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2, u16 VAR_3)
{
 s32 VAR_4;
 u16 VAR_5 = 0;
 u16 VAR_6, VAR_7;

 for (VAR_6 = VAR_3; VAR_6 < (VAR_0 + VAR_3); VAR_6++) {
  VAR_4 = VAR_2->nvm.ops.read(VAR_2, VAR_6, 1, &VAR_7);
  if (VAR_4) {
   FUNC_0("NVM Read Error while updating checksum.\n");
   goto out;
  }
  VAR_5 += VAR_7;
 }
 VAR_5 = (u16) VAR_1 - VAR_5;
 VAR_4 = VAR_2->nvm.ops.write(VAR_2, (VAR_0 + VAR_3), 1,
    &VAR_5);
 if (VAR_4)
  FUNC_0("NVM Write Error while updating checksum.\n");

out:
 return VAR_4;
}
