
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_enc_dev {int ch; int motion_lock; struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct solo_dev*,int ) ;
 int FUNC_1 (struct solo_dev*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct solo_enc_dev *VAR_2)
{
 struct solo_dev *VAR_3 = VAR_2->solo_dev;
 unsigned long VAR_4;
 u32 VAR_5 = 1 << VAR_2->ch;
 int VAR_6 = 0;

 FUNC_2(&VAR_2->motion_lock, VAR_4);
 if (FUNC_0(VAR_3, VAR_1) & VAR_5) {
  FUNC_1(VAR_3, VAR_0, VAR_5);
  VAR_6 = 1;
 }
 FUNC_3(&VAR_2->motion_lock, VAR_4);

 return VAR_6;
}
