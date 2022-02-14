
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct nci_dev {int dummy; } ;


 int FUNC_0 (struct nci_dev*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct nci_dev *VAR_0, u8 VAR_1,
        u32 VAR_2)
{
 u32 VAR_3 = 13560;
 u32 VAR_4, VAR_5, VAR_6;
 char VAR_7[9];

 VAR_4 = (24 * VAR_3) / VAR_2;
 VAR_6 = 24 * VAR_3 - VAR_4 * VAR_2;
 VAR_5 = (32768 * VAR_6) / VAR_2;

 VAR_7[0] = 0x00;
 VAR_7[1] = 0x00;
 VAR_7[2] = 0x00;

 VAR_7[3] = 0x10;
 VAR_7[4] = 0x04;
 VAR_7[5] = VAR_5 & 0xFF;
 VAR_7[6] = (VAR_5 >> 8) & 0xff;
 VAR_7[7] = VAR_4;
 VAR_7[8] = VAR_1;

 return FUNC_0(VAR_0, 9, VAR_7);
}
