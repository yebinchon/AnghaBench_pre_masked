
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vf610_nfc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct vf610_nfc*) ;
 int FUNC_2 (struct vf610_nfc*,int ,int ,int ,int ) ;
 int FUNC_3 (struct vf610_nfc*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct vf610_nfc *VAR_9, u32 VAR_10, u32 VAR_11,
     u32 VAR_12, u32 VAR_13, u32 VAR_14)
{
 FUNC_2(VAR_9, VAR_2, VAR_0,
       VAR_1, VAR_10);

 FUNC_2(VAR_9, VAR_5, VAR_7,
       VAR_8, VAR_11);

 FUNC_3(VAR_9, VAR_6, VAR_14);
 FUNC_3(VAR_9, VAR_3, VAR_12);
 FUNC_3(VAR_9, VAR_4, VAR_13);

 FUNC_0(VAR_9->dev,
  "col 0x%04x, row 0x%08x, cmd1 0x%08x, cmd2 0x%08x, len %d\n",
  VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 FUNC_1(VAR_9);
}
