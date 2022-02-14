
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct solo_dev {scalar_t__ nr_chans; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct solo_dev *VAR_0, u8 VAR_1,
      int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_1 >= VAR_0->nr_chans)
  return;


 FUNC_8(VAR_0, FUNC_1(VAR_1),
         FUNC_0(VAR_1) |
         FUNC_6(VAR_2) |
         FUNC_3(VAR_4) |
         FUNC_5(VAR_6));

 FUNC_8(VAR_0, FUNC_2(VAR_1),
         FUNC_7(VAR_3) |
         FUNC_4(VAR_5));
}
