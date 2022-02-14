
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {scalar_t__ bw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mt7601u_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mt7601u_dev *VAR_2, bool VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 if (!VAR_3)
  VAR_4 |= 0x10000;
 if (VAR_2->bw != VAR_1)
  VAR_4 |= 0x00100;


 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_4 | 1);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2, VAR_0, VAR_4);
}
