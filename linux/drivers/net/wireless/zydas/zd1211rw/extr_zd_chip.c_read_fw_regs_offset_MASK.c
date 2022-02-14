
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zd_chip {scalar_t__ fw_regs_base; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct zd_chip *VAR_1)
{
 int VAR_2;

 FUNC_0(FUNC_2(&VAR_1->mutex));
 VAR_2 = FUNC_4(VAR_1, (u16*)&VAR_1->fw_regs_base,
                 VAR_0);
 if (VAR_2)
  return VAR_2;
 FUNC_1(FUNC_3(VAR_1), "fw_regs_base: %#06hx\n",
    (u16)VAR_1->fw_regs_base);

 return 0;
}
