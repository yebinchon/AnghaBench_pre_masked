
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngene_channel {int demod_type; } ;
 int VAR_0 ;
 int FUNC_0 (struct ngene_channel*) ;
 int FUNC_1 (struct ngene_channel*) ;
 int FUNC_2 (struct ngene_channel*,int) ;
 int FUNC_3 (struct ngene_channel*) ;

__attribute__((used)) static int FUNC_4(struct ngene_channel *VAR_1)
{
 switch (VAR_1->demod_type) {
 case 129:
  return FUNC_0(VAR_1);
 case 135:
  return FUNC_3(VAR_1);
 case 130:
 case 132:
 case 131:
 case 134:
 case 133:
  return FUNC_2(VAR_1, VAR_1->demod_type);
 case 128:
  return FUNC_1(VAR_1);
 }

 return -VAR_0;
}
