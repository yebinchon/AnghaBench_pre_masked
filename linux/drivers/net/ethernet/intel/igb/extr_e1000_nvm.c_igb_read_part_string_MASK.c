
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int,int*) ;

s32 FUNC_5(struct e1000_hw *VAR_6, u8 *VAR_7, u32 VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u16 VAR_13;

 if (VAR_7 == ((void*)0)) {
  FUNC_0("PBA string buffer was null\n");
  VAR_9 = VAR_0;
  goto out;
 }

 VAR_9 = VAR_6->nvm.ops.read(VAR_6, VAR_3, 1, &VAR_10);
 if (VAR_9) {
  FUNC_0("NVM Read Error\n");
  goto out;
 }

 VAR_9 = VAR_6->nvm.ops.read(VAR_6, VAR_4, 1, &VAR_11);
 if (VAR_9) {
  FUNC_0("NVM Read Error\n");
  goto out;
 }





 if (VAR_10 != VAR_5) {
  FUNC_0("NVM PBA number is not stored as string\n");


  if (VAR_8 < 11) {
   FUNC_0("PBA string buffer too small\n");
   return VAR_1;
  }


  VAR_7[0] = (VAR_10 >> 12) & 0xF;
  VAR_7[1] = (VAR_10 >> 8) & 0xF;
  VAR_7[2] = (VAR_10 >> 4) & 0xF;
  VAR_7[3] = VAR_10 & 0xF;
  VAR_7[4] = (VAR_11 >> 12) & 0xF;
  VAR_7[5] = (VAR_11 >> 8) & 0xF;
  VAR_7[6] = '-';
  VAR_7[7] = 0;
  VAR_7[8] = (VAR_11 >> 4) & 0xF;
  VAR_7[9] = VAR_11 & 0xF;


  VAR_7[10] = '\0';


  for (VAR_12 = 0; VAR_12 < 10; VAR_12++) {
   if (VAR_7[VAR_12] < 0xA)
    VAR_7[VAR_12] += '0';
   else if (VAR_7[VAR_12] < 0x10)
    VAR_7[VAR_12] += 'A' - 0xA;
  }

  goto out;
 }

 VAR_9 = VAR_6->nvm.ops.read(VAR_6, VAR_11, 1, &VAR_13);
 if (VAR_9) {
  FUNC_0("NVM Read Error\n");
  goto out;
 }

 if (VAR_13 == 0xFFFF || VAR_13 == 0) {
  FUNC_0("NVM PBA number section invalid length\n");
  VAR_9 = VAR_2;
  goto out;
 }

 if (VAR_8 < (((u32)VAR_13 * 2) - 1)) {
  FUNC_0("PBA string buffer too small\n");
  VAR_9 = VAR_1;
  goto out;
 }


 VAR_11++;
 VAR_13--;

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_9 = VAR_6->nvm.ops.read(VAR_6, VAR_11 + VAR_12, 1, &VAR_10);
  if (VAR_9) {
   FUNC_0("NVM Read Error\n");
   goto out;
  }
  VAR_7[VAR_12 * 2] = (u8)(VAR_10 >> 8);
  VAR_7[(VAR_12 * 2) + 1] = (u8)(VAR_10 & 0xFF);
 }
 VAR_7[VAR_12 * 2] = '\0';

out:
 return VAR_9;
}
