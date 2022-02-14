
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int flash_size; } ;
struct bnx2x {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,int,int *,int) ;
 int FUNC_5 (struct bnx2x*,int,int,int) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (int*,int *,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_6, u32 VAR_7, u8 *VAR_8,
        int VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_9 == 1)
  return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);

 if ((VAR_7 & 0x03) || (VAR_9 & 0x03) || (VAR_9 == 0)) {
  FUNC_0(VAR_0 | VAR_1,
     "Invalid parameter: offset 0x%x  buf_size 0x%x\n",
     VAR_7, VAR_9);
  return -VAR_3;
 }

 if (VAR_7 + VAR_9 > VAR_6->common.flash_size) {
  FUNC_0(VAR_0 | VAR_1,
     "Invalid parameter: offset (0x%x) + buf_size (0x%x) > flash_size (0x%x)\n",
     VAR_7, VAR_9, VAR_6->common.flash_size);
  return -VAR_3;
 }


 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10)
  return VAR_10;


 FUNC_3(VAR_6);

 VAR_13 = 0;
 VAR_11 = VAR_4;
 while ((VAR_13 < VAR_9) && (VAR_10 == 0)) {
  if (VAR_13 == (VAR_9 - sizeof(u32)))
   VAR_11 |= VAR_5;
  else if (((VAR_7 + 4) % VAR_2) == 0)
   VAR_11 |= VAR_5;
  else if ((VAR_7 % VAR_2) == 0)
   VAR_11 |= VAR_4;

  FUNC_7(&VAR_12, VAR_8, 4);







  VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_12, VAR_11);


  VAR_7 += sizeof(u32);
  VAR_8 += sizeof(u32);
  VAR_13 += sizeof(u32);




  if ((VAR_11 & VAR_5) &&
      (VAR_13 < VAR_9)) {
   FUNC_0(VAR_0 | VAR_1,
      "Releasing NVM lock after offset 0x%x\n",
      (u32)(VAR_7 - sizeof(u32)));
   FUNC_6(VAR_6);
   FUNC_8(1000, 2000);
   VAR_10 = FUNC_1(VAR_6);
   if (VAR_10)
    return VAR_10;
  }

  VAR_11 = 0;
 }


 FUNC_2(VAR_6);
 FUNC_6(VAR_6);

 return VAR_10;
}
