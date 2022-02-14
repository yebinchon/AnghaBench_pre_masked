
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_l3l4_hdr {int status; int type; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_3 (int,struct device*,char*) ;
 int FUNC_4 (struct i2400m*) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int VAR_1 ;
 int FUNC_6 (struct i2400m*,struct i2400m_l3l4_hdr const*,size_t,char*) ;
 unsigned int FUNC_7 (int ) ;

void FUNC_8(struct i2400m *VAR_2,
   const struct i2400m_l3l4_hdr *VAR_3, size_t VAR_4)
{
 struct device *VAR_5 = FUNC_5(VAR_2);
 unsigned VAR_6;

 FUNC_2(3, VAR_5, "(i2400m %p l3l4_hdr %p size %zu)\n",
    VAR_2, VAR_3, VAR_4);


 VAR_6 = FUNC_7(VAR_3->type);
 switch (VAR_6) {
 case 128:
  FUNC_6(VAR_2,
      VAR_3, VAR_4, "REPORT STATE");
  break;


 case 129:
  if (VAR_3->status == FUNC_0(VAR_0)) {
   if (VAR_1)
    FUNC_3(1, VAR_5, "ready for powersave, "
      "not requesting (disabled by module "
      "parameter)\n");
   else {
    FUNC_3(1, VAR_5, "ready for powersave, "
      "requesting\n");
    FUNC_4(VAR_2);
   }
  }
  break;
 }
 FUNC_1(3, VAR_5, "(i2400m %p l3l4_hdr %p size %zu) = void\n",
  VAR_2, VAR_3, VAR_4);
}
