
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (struct mei_msg_hdr*) ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*,scalar_t__ const) ;
 int FUNC_7 (struct mei_device*) ;
 int FUNC_8 (scalar_t__*,int const*,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mei_device *VAR_6,
        const void *VAR_7, size_t VAR_8,
        const void *VAR_9, size_t VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;
 const u32 *VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (FUNC_1(!VAR_7 || !VAR_9 || VAR_8 & 0x3))
  return -VAR_0;

 FUNC_2(VAR_6->dev, VAR_4, FUNC_0((struct mei_msg_hdr *)VAR_7));

 VAR_15 = FUNC_4(VAR_6);
 FUNC_2(VAR_6->dev, "empty slots = %hu.\n", VAR_15);

 if (VAR_15 < 0)
  return -VAR_3;

 VAR_14 = FUNC_3(VAR_8 + VAR_10);
 if (VAR_14 > (u32)VAR_15)
  return -VAR_2;

 VAR_13 = VAR_7;
 for (VAR_12 = 0; VAR_12 < VAR_8 / VAR_5; VAR_12++)
  FUNC_6(VAR_6, VAR_13[VAR_12]);

 VAR_13 = VAR_9;
 for (VAR_12 = 0; VAR_12 < VAR_10 / VAR_5; VAR_12++)
  FUNC_6(VAR_6, VAR_13[VAR_12]);

 VAR_11 = VAR_10 & 0x3;
 if (VAR_11 > 0) {
  u32 VAR_16 = 0;

  FUNC_8(&VAR_16, (const u8 *)VAR_9 + VAR_10 - VAR_11, VAR_11);
  FUNC_6(VAR_6, VAR_16);
 }

 FUNC_5(VAR_6);
 if (!FUNC_7(VAR_6))
  return -VAR_1;

 return 0;
}
