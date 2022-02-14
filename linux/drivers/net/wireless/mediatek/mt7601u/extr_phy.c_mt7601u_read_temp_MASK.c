
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*,int,int ) ;
 int FUNC_1 (struct mt7601u_dev*,int,int,int) ;
 int FUNC_2 (struct mt7601u_dev*,int) ;
 int FUNC_3 (struct mt7601u_dev*,int ) ;

__attribute__((used)) static s8 FUNC_4(struct mt7601u_dev *VAR_1)
{
 int VAR_2;
 u8 VAR_3;
 s8 VAR_4;

 VAR_3 = FUNC_1(VAR_1, 47, 0x7f, 0x10);


 for (VAR_2 = 100; VAR_2 && (VAR_3 & 0x10); VAR_2--)
  VAR_3 = FUNC_2(VAR_1, 47);

 VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_0);

 FUNC_3(VAR_1, VAR_4);
 return VAR_4;
}
