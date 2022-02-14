
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct mt7601u_dev *VAR_4)
{
 u32 *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(sizeof(*VAR_5) * VAR_3 * 2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5[VAR_6 * 2] = 0xffffffff;
  VAR_5[VAR_6 * 2 + 1] = 0x00ffffff;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_2,
           VAR_5, VAR_3 * 2);
 FUNC_0(VAR_5);

 return VAR_7;
}
