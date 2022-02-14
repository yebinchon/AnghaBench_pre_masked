
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_1; int member_2; int member_3; int const member_0; } ;
struct cphy {int adapter; } ;







 int FUNC_0 (struct cphy*,int*,int *,int *,int *) ;
 int FUNC_1 (struct cphy*) ;
 int FUNC_2 (struct cphy*,struct reg_val const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cphy*) ;

__attribute__((used)) static int FUNC_5(struct cphy *VAR_0)
{
 static const struct reg_val VAR_1[] = {

  { 128, 132 +130,
   0xffff, 0x4 },
  { 128, 131,
   0xffff, 0x8 << (130*4) },


  { 128, 131,
   0xffff, 0x2 << (129*4) },


  { 0, 0, 0, 0 }
 };
 int VAR_2, VAR_3 = 0;


 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_3, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_2)
  return VAR_2;
 if (VAR_3)
  FUNC_3(VAR_0->adapter,
    FUNC_1(VAR_0));

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
