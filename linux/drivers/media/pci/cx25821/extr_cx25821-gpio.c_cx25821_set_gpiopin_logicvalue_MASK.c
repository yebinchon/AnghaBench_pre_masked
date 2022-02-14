
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cx25821_dev*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct cx25821_dev *VAR_2,
        int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3;
 u32 VAR_6 = VAR_1;
 u32 VAR_7 = 0;


 if (VAR_3 >= 47)
  return;


 FUNC_2(VAR_2, VAR_3, 0);

 if (VAR_3 > 31) {
  VAR_5 = VAR_3 - 31;
  VAR_6 = VAR_0;
 }

 VAR_7 = FUNC_3(VAR_6);

 if (VAR_4 == 0)
  VAR_7 &= FUNC_0(VAR_5);
 else
  VAR_7 |= FUNC_1(VAR_5);

 FUNC_4(VAR_6, VAR_7);
}
