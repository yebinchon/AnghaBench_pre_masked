
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int clock_mhz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (struct solo_dev*) ;
 int FUNC_8 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct solo_dev *VAR_9)
{
 int VAR_10;

 VAR_10 = (VAR_9->clock_mhz * 1000000)
  / (VAR_3 * (VAR_0 * 2) * 2);

 FUNC_8(VAR_9, VAR_8,
         FUNC_0(VAR_0)
         | FUNC_1(VAR_10));

 FUNC_8(VAR_9, VAR_6,
         FUNC_3(1)
         | FUNC_5(VAR_1)
         | FUNC_2(FUNC_7(VAR_9) >> 16));

 FUNC_8(VAR_9, VAR_4,
         VAR_5
         | VAR_7
         | FUNC_4(3)
         | FUNC_6(VAR_2));
}
