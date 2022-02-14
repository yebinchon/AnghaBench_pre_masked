
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mei_txe_hw {scalar_t__ slots; int aliveness; } ;
struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mei_msg_hdr*) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (struct mei_device*,char*,int) ;
 int FUNC_7 (struct mei_txe_hw*) ;
 int FUNC_8 (struct mei_device*,unsigned long,scalar_t__ const) ;
 int FUNC_9 (struct mei_device*) ;
 int FUNC_10 (struct mei_device*) ;
 int FUNC_11 (scalar_t__*,int const*,unsigned long) ;
 struct mei_txe_hw* FUNC_12 (struct mei_device*) ;

__attribute__((used)) static int FUNC_13(struct mei_device *VAR_7,
    const void *VAR_8, size_t VAR_9,
    const void *VAR_10, size_t VAR_11)
{
 struct mei_txe_hw *VAR_12 = FUNC_12(VAR_7);
 unsigned long VAR_13;
 const u32 *VAR_14;
 u32 VAR_15 = VAR_6;
 u32 VAR_16;
 unsigned long VAR_17, VAR_18;

 if (FUNC_2(!VAR_8 || !VAR_10 || VAR_9 & 0x3))
  return -VAR_1;

 FUNC_3(VAR_7->dev, VAR_4, FUNC_0((struct mei_msg_hdr *)VAR_8));

 VAR_16 = FUNC_5(VAR_9 + VAR_11);
 if (VAR_16 > VAR_15)
  return -VAR_2;

 if (FUNC_1(!VAR_12->aliveness, "txe write: aliveness not asserted\n"))
  return -VAR_0;


 FUNC_9(VAR_7);

 if (!FUNC_10(VAR_7)) {
  char VAR_19[VAR_3];

  FUNC_6(VAR_7, VAR_19, VAR_3);
  FUNC_4(VAR_7->dev, "Input is not ready %s\n", VAR_19);
  return -VAR_0;
 }

 VAR_14 = VAR_8;
 for (VAR_17 = 0; VAR_17 < VAR_9 / VAR_5; VAR_17++)
  FUNC_8(VAR_7, VAR_17, VAR_14[VAR_17]);

 VAR_14 = VAR_10;
 for (VAR_18 = 0; VAR_18 < VAR_11 / VAR_5; VAR_18++)
  FUNC_8(VAR_7, VAR_17 + VAR_18, VAR_14[VAR_18]);

 VAR_13 = VAR_11 & 0x3;
 if (VAR_13 > 0) {
  u32 VAR_20 = 0;

  FUNC_11(&VAR_20, (const u8 *)VAR_10 + VAR_11 - VAR_13, VAR_13);
  FUNC_8(VAR_7, VAR_17 + VAR_18, VAR_20);
 }


 VAR_12->slots = 0;


 FUNC_7(VAR_12);

 return 0;
}
