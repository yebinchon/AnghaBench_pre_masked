
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_1; int member_2; int member_3; int const member_0; } ;
struct cphy {int modtype; int priv; } ;



 int VAR_0 ;
 int FUNC_0 (struct cphy*,int ) ;
 int FUNC_1 (struct cphy*) ;
 int FUNC_2 (struct cphy*) ;
 int FUNC_3 (struct cphy*,int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct cphy*,struct reg_val const*) ;
 int FUNC_6 (struct cphy*,int const,int ,unsigned int*) ;
 int FUNC_7 (struct cphy*,int const,int ) ;

__attribute__((used)) static int FUNC_8(struct cphy *VAR_4, int VAR_5)
{
 static const struct reg_val VAR_6[] = {
  { 128, 0xc001, 0, 1 << 5 },
  { 128, 0xc017, 0, 1 << 5 },
  { 128, 0xc013, 0xffff, 0xf341 },
  { 128, 0xc210, 0xffff, 0x8000 },
  { 128, 0xc210, 0xffff, 0x8100 },
  { 128, 0xc210, 0xffff, 0x8000 },
  { 128, 0xc210, 0xffff, 0 },
  { 0, 0, 0, 0 }
 };
 static const struct reg_val VAR_7[] = {
  { 128, 0xca00, 0xffff, 0x0080 },
  { 128, 0xca12, 0xffff, 0 },
  { 0, 0, 0, 0 }
 };

 int VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_6(VAR_4, 128, VAR_0,
      &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_4, 128, 0);
 if (VAR_8)
  return VAR_8;

 FUNC_4(125);
 VAR_4->priv = VAR_1;
 VAR_8 = FUNC_5(VAR_4, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_4(50);

 VAR_8 = FUNC_0(VAR_4, 0);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_4->modtype = VAR_8;

 if (VAR_8 == VAR_2 || VAR_8 == VAR_3)
  VAR_8 = FUNC_3(VAR_4, VAR_8);
 else
  VAR_8 = FUNC_2(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_4, VAR_7);
 if (VAR_8)
  return VAR_8;


 if (VAR_9 & 1)
  VAR_8 = FUNC_1(VAR_4);
 return VAR_8;
}
