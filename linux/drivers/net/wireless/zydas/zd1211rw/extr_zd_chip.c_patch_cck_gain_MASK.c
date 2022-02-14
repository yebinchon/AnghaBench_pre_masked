
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_chip {int mutex; int rf; int patch_cck_gain; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int*,int ) ;
 int FUNC_5 (struct zd_chip*,int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct zd_chip *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 if (!VAR_2->patch_cck_gain || !FUNC_6(&VAR_2->rf))
  return 0;

 FUNC_0(FUNC_2(&VAR_2->mutex));
 VAR_3 = FUNC_4(VAR_2, &VAR_4, VAR_0);
 if (VAR_3)
  return VAR_3;
 FUNC_1(FUNC_3(VAR_2), "patching value %x\n", VAR_4 & 0xff);
 return FUNC_5(VAR_2, VAR_4 & 0xff, VAR_1);
}
