
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ssb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ssb_bus*,int ,int*) ;
 int FUNC_2 (struct ssb_bus*,int ,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct ssb_bus *VAR_7,
         u8 VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u8 VAR_14;

 VAR_12 = (VAR_8 * VAR_2) + VAR_3;
 while (1) {
  VAR_9 = FUNC_2(VAR_7, VAR_4,
        (VAR_12 & 0x0000F000) >> 12);
  if (VAR_9)
   goto error;
  VAR_9 = FUNC_2(VAR_7, VAR_5,
        (VAR_12 & 0x00FF0000) >> 16);
  if (VAR_9)
   goto error;
  VAR_9 = FUNC_2(VAR_7, VAR_6,
        (VAR_12 & 0xFF000000) >> 24);
  if (VAR_9)
   goto error;

  VAR_13 = 0;

  VAR_9 = FUNC_1(VAR_7, VAR_4, &VAR_14);
  if (VAR_9)
   goto error;
  VAR_13 |= ((u32)(VAR_14 & 0x0F)) << 12;
  VAR_9 = FUNC_1(VAR_7, VAR_5, &VAR_14);
  if (VAR_9)
   goto error;
  VAR_13 |= ((u32)VAR_14) << 16;
  VAR_9 = FUNC_1(VAR_7, VAR_6, &VAR_14);
  if (VAR_9)
   goto error;
  VAR_13 |= ((u32)VAR_14) << 24;

  VAR_11 = (VAR_13 - VAR_3) / VAR_2;
  if (VAR_11 == VAR_8)
   break;

  VAR_9 = -VAR_0;
  if (VAR_10++ > VAR_1)
   goto error;
  FUNC_3(10);
 }

 return 0;
error:
 FUNC_0("Failed to switch to core %u\n", VAR_8);
 return VAR_9;
}
