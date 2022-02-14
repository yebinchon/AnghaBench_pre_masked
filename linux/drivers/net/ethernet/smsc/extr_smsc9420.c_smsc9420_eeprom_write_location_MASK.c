
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smsc9420_pdata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smsc9420_pdata*,int ,int ,char*,int,int) ;
 int FUNC_1 (struct smsc9420_pdata*,int) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smsc9420_pdata *VAR_4,
       u8 VAR_5, u8 VAR_6)
{
 u32 VAR_7 = VAR_0 | VAR_5;
 int VAR_8;

 FUNC_0(VAR_4, VAR_3, VAR_4->dev, "address 0x%x, data 0x%x\n", VAR_5, VAR_6);
 VAR_8 = FUNC_1(VAR_4, VAR_7);

 if (!VAR_8) {
  VAR_7 = VAR_1 | VAR_5;
  FUNC_2(VAR_4, VAR_2, (u32)VAR_6);
  VAR_8 = FUNC_1(VAR_4, VAR_7);
 }

 return VAR_8;
}
