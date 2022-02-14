
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct brcmstb_reset {scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned long) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_1 ;
 struct brcmstb_reset* FUNC_2 (struct reset_controller_dev*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_2,
      unsigned long VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3) * VAR_0;
 struct brcmstb_reset *VAR_5 = FUNC_2(VAR_2);

 FUNC_4(FUNC_1(VAR_3), VAR_5->base + VAR_4 + VAR_1);




 FUNC_3(100, 200);

 return 0;
}
