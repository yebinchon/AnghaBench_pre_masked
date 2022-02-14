
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mt7601u_dev*,int,int,int) ;
 int FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (struct mt7601u_dev*,int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int,int ,int) ;

int FUNC_5(struct mt7601u_dev *VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10;

 if (VAR_8 == VAR_7->bw) {

  FUNC_0(VAR_7, 4, 0x18, VAR_8 == VAR_0 ? 0 : 0x10);

  return 0;
 }
 VAR_7->bw = VAR_8;


 VAR_10 = FUNC_2(VAR_7, VAR_4);
 VAR_9 = VAR_10 & ~(VAR_6 | VAR_5);
 FUNC_3(VAR_7, VAR_4, VAR_9);
 FUNC_4(VAR_7, VAR_1, VAR_3 | VAR_2,
    0, 500000);

 FUNC_0(VAR_7, 4, 0x18, VAR_8 == VAR_0 ? 0 : 0x10);

 FUNC_3(VAR_7, VAR_4, VAR_10);

 return FUNC_1(VAR_7);
}
