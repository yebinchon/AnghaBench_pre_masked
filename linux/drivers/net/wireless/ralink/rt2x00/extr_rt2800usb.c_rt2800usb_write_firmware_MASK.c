
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 int FUNC_4 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int const*,int) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct rt2x00_dev *VAR_11,
        const u8 *VAR_12, const size_t VAR_13)
{
 int VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;




 if (FUNC_5(VAR_11, VAR_6) ||
     FUNC_5(VAR_11, VAR_7) ||
     FUNC_5(VAR_11, VAR_8)) {
  VAR_15 = 0;
  VAR_16 = 4096;
 } else {
  VAR_15 = 4096;
  VAR_16 = 4096;
 }




 VAR_17 = FUNC_2(VAR_11);
 if (VAR_17 < 0)
  return VAR_17;
 if (VAR_17) {
  FUNC_4(VAR_11,
       "Firmware loading not required - NIC in AutoRun mode\n");
  FUNC_0(VAR_5, &VAR_11->cap_flags);
 } else {
  FUNC_6(VAR_11, VAR_0,
           VAR_12 + VAR_15, VAR_16);
 }

 FUNC_7(VAR_11, VAR_1, ~0);
 FUNC_7(VAR_11, VAR_3, ~0);





 VAR_14 = FUNC_8(VAR_11, VAR_9,
          0, VAR_10,
          VAR_4);
 if (VAR_14 < 0) {
  FUNC_3(VAR_11, "Failed to write Firmware to device\n");
  return VAR_14;
 }

 FUNC_1(10);
 FUNC_7(VAR_11, VAR_2, 0);

 return 0;
}
