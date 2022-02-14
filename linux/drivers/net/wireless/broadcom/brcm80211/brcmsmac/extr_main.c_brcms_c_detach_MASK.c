
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct brcms_c_info {int cmi; } ;


 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_info*) ;
 int FUNC_4 (struct brcms_c_info*) ;
 int FUNC_5 (struct brcms_c_info*) ;

uint FUNC_6(struct brcms_c_info *VAR_0)
{
 uint VAR_1;

 if (VAR_0 == ((void*)0))
  return 0;

 FUNC_0(VAR_0);


 VAR_1 = 0;
 if (!FUNC_4(VAR_0))
  VAR_1++;

 FUNC_1(VAR_0->cmi);

 FUNC_5(VAR_0);

 FUNC_3(VAR_0);

 FUNC_2(VAR_0);
 return VAR_1;
}
