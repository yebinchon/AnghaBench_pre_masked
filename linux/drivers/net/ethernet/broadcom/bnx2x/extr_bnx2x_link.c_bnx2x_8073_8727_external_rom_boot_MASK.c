
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_10,
          struct bnx2x_phy *VAR_11,
          u8 VAR_12)
{
 u32 VAR_13 = 0;
 u16 VAR_14, VAR_15;
 int VAR_16 = 0;



 FUNC_2(VAR_10, VAR_11,
    VAR_1,
    VAR_2,
    0x0001);


 FUNC_2(VAR_10, VAR_11,
    VAR_1,
    VAR_2,
    0x008c);

 FUNC_2(VAR_10, VAR_11,
    VAR_1,
    VAR_6, 0x0001);


 FUNC_2(VAR_10, VAR_11,
    VAR_1,
    VAR_2,
    VAR_3);


 FUNC_2(VAR_10, VAR_11,
    VAR_1,
    VAR_2,
    VAR_4);


 FUNC_4(100);


 do {
  VAR_13++;
  if (VAR_13 > 300) {
   FUNC_0(VAR_8,
     "bnx2x_8073_8727_external_rom_boot port %x:"
     "Download failed. fw version = 0x%x\n",
     VAR_12, VAR_14);
   VAR_16 = -VAR_0;
   break;
  }

  FUNC_1(VAR_10, VAR_11,
    VAR_1,
    VAR_7, &VAR_14);
  FUNC_1(VAR_10, VAR_11,
    VAR_1,
    VAR_5, &VAR_15);

  FUNC_5(1000, 2000);
 } while (VAR_14 == 0 || VAR_14 == 0x4321 ||
   ((VAR_15 & 0xff) != 0x03 && (VAR_11->type ==
   VAR_9)));


 FUNC_2(VAR_10, VAR_11,
    VAR_1,
    VAR_6, 0x0000);
 FUNC_3(VAR_10, VAR_11, VAR_12);

 FUNC_0(VAR_8,
   "bnx2x_8073_8727_external_rom_boot port %x:"
   "Download complete. fw version = 0x%x\n",
   VAR_12, VAR_14);

 return VAR_16;
}
