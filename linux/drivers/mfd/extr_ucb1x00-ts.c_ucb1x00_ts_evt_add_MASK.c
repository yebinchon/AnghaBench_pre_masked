
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ucb1x00_ts {struct input_dev* idev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static inline void FUNC_3(struct ucb1x00_ts *VAR_4, u16 VAR_5, u16 VAR_6, u16 VAR_7)
{
 struct input_dev *VAR_8 = VAR_4->idev;

 FUNC_0(VAR_8, VAR_1, VAR_6);
 FUNC_0(VAR_8, VAR_2, VAR_7);
 FUNC_0(VAR_8, VAR_0, VAR_5);
 FUNC_1(VAR_8, VAR_3, 1);
 FUNC_2(VAR_8);
}
