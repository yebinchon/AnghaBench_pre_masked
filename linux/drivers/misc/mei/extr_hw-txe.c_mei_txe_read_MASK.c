
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mei_txe_hw {int dummy; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct mei_device*,unsigned long) ;
 int FUNC_3 (struct mei_txe_hw*) ;
 int FUNC_4 (unsigned long*,unsigned long*,unsigned long) ;
 struct mei_txe_hw* FUNC_5 (struct mei_device*) ;

__attribute__((used)) static int FUNC_6(struct mei_device *VAR_2,
  unsigned char *VAR_3, unsigned long VAR_4)
{

 struct mei_txe_hw *VAR_5 = FUNC_5(VAR_2);
 u32 *VAR_6, VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 if (FUNC_0(!VAR_3 || !VAR_4))
  return -VAR_0;

 VAR_6 = (u32 *)VAR_3;
 VAR_8 = VAR_4 & 0x3;

 FUNC_1(VAR_2->dev, "buffer-length = %lu buf[0]0x%08X\n",
  VAR_4, FUNC_2(VAR_2, 0));

 for (VAR_9 = 0; VAR_9 < VAR_4 / VAR_1; VAR_9++) {

  VAR_7 = FUNC_2(VAR_2, VAR_9 + 1);
  FUNC_1(VAR_2->dev, "buf[%d] = 0x%08X\n", VAR_9, VAR_7);
  *VAR_6++ = VAR_7;
 }

 if (VAR_8) {
  VAR_7 = FUNC_2(VAR_2, VAR_9 + 1);
  FUNC_4(VAR_6, &VAR_7, VAR_8);
 }

 FUNC_3(VAR_5);
 return 0;
}
