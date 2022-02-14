
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rc_dev {int keylock; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int FUNC_0 (struct rc_dev*,int,int ,int ,int ) ;
 int FUNC_1 (struct rc_dev*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct rc_dev *VAR_0, enum rc_proto VAR_1,
     u32 VAR_2, u8 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5 = FUNC_1(VAR_0, VAR_2);

 FUNC_2(&VAR_0->keylock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3);
 FUNC_3(&VAR_0->keylock, VAR_4);
}
