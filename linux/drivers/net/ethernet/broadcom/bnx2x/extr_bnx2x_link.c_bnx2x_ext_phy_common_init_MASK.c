
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*,int*,int*,int ,int) ;
 int FUNC_2 (struct bnx2x*,int*,int*,int ,int) ;
 int FUNC_3 (struct bnx2x*,int*,int*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int*,int*,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_2, u32 VAR_3[],
         u32 VAR_4[], u8 VAR_5,
         u32 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_6) {
 case 136:
  VAR_8 = FUNC_1(VAR_2, VAR_3,
      VAR_4,
      VAR_5, VAR_7);
  break;
 case 132:
 case 130:
 case 129:
  VAR_8 = FUNC_4(VAR_2, VAR_3,
      VAR_4,
      VAR_5, VAR_7);
  break;

 case 131:



  VAR_8 = FUNC_3(VAR_2, VAR_3,
      VAR_4,
      VAR_5, VAR_7);
  break;
 case 135:
 case 134:
 case 133:



  VAR_8 = FUNC_2(VAR_2, VAR_3,
      VAR_4,
      VAR_5, VAR_7);
  break;
 case 128:
  VAR_8 = -VAR_0;
  break;
 default:
  FUNC_0(VAR_1,
      "ext_phy 0x%x common init not required\n",
      VAR_6);
  break;
 }

 if (VAR_8)
  FUNC_5(VAR_2->dev, "Warning: PHY was not initialized,"
          " Port %d\n",
    0);
 return VAR_8;
}
