
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_enc_dev {int ch; int motion_lock; struct solo_dev* solo_dev; } ;
struct solo_dev {int motion_mask; } ;


 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct solo_dev*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct solo_enc_dev *VAR_2, int VAR_3)
{
 struct solo_dev *VAR_4 = VAR_2->solo_dev;
 u32 VAR_5 = 1 << VAR_2->ch;
 unsigned long VAR_6;

 FUNC_3(&VAR_2->motion_lock, VAR_6);

 if (VAR_3)
  VAR_4->motion_mask |= VAR_5;
 else
  VAR_4->motion_mask &= ~VAR_5;

 FUNC_2(VAR_4, VAR_1, VAR_5);

 FUNC_2(VAR_4, VAR_0,
         FUNC_1(VAR_4->motion_mask) |
         (FUNC_0(VAR_4) >> 16));

 FUNC_4(&VAR_2->motion_lock, VAR_6);
}
