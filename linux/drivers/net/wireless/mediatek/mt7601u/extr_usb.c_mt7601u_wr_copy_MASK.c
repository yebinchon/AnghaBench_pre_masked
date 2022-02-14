
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct mt7601u_dev*,int,void const*,int) ;

void FUNC_2(struct mt7601u_dev *VAR_0, u32 VAR_1,
       const void *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1 & 3, "unaligned write copy off:%08x", VAR_1);
 FUNC_0(VAR_3 & 3, "short write copy off:%08x", VAR_1);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3 / 4);
}
