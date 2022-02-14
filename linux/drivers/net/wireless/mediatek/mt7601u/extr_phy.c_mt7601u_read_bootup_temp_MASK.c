
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7601u_dev {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt7601u_dev*,int,int ) ;
 int FUNC_1 (struct mt7601u_dev*,int,int ,int) ;
 int FUNC_2 (struct mt7601u_dev*,int) ;
 int FUNC_3 (struct mt7601u_dev*,int,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ) ;
 int FUNC_5 (struct mt7601u_dev*,int ,int) ;
 int FUNC_6 (struct mt7601u_dev*,int) ;

__attribute__((used)) static s8 FUNC_7(struct mt7601u_dev *VAR_3)
{
 u8 VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_3, VAR_2);
 VAR_6 = FUNC_4(VAR_3, VAR_1);

 FUNC_5(VAR_3, VAR_1, 0);
 FUNC_5(VAR_3, VAR_2, 0x00000010);
 FUNC_5(VAR_3, VAR_1, 0x00000010);

 VAR_4 = FUNC_1(VAR_3, 47, 0, 0x10);

 FUNC_3(VAR_3, 22, 0x40);

 for (VAR_8 = 100; VAR_8 && (VAR_4 & 0x10); VAR_8--)
  VAR_4 = FUNC_2(VAR_3, 47);

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_0);

 FUNC_3(VAR_3, 22, 0);

 VAR_4 = FUNC_2(VAR_3, 21);
 VAR_4 |= 0x02;
 FUNC_3(VAR_3, 21, VAR_4);
 VAR_4 &= ~0x02;
 FUNC_3(VAR_3, 21, VAR_4);

 FUNC_5(VAR_3, VAR_1, 0);
 FUNC_5(VAR_3, VAR_2, VAR_7);
 FUNC_5(VAR_3, VAR_1, VAR_6);

 FUNC_6(VAR_3, VAR_5);
 return VAR_5;
}
