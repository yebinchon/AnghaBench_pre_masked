
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r820t_sect_type {int phase_y; int gain_x; } ;
struct r820t_priv {int dummy; } ;


 int FUNC_0 (struct r820t_sect_type*) ;
 int FUNC_1 (struct r820t_priv*,struct r820t_sect_type*,int) ;
 int FUNC_2 (struct r820t_priv*,struct r820t_sect_type*,int*) ;
 int FUNC_3 (struct r820t_priv*,struct r820t_sect_type*,int ,int ,int) ;
 int FUNC_4 (struct r820t_priv*,struct r820t_sect_type*) ;
 int FUNC_5 (struct r820t_priv*) ;
 int FUNC_6 (struct r820t_priv*,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct r820t_priv *VAR_0, struct r820t_sect_type *VAR_1)
{
 struct r820t_sect_type VAR_2[3];
 int VAR_3;
 u8 VAR_4 = 0;
 u8 VAR_5, VAR_6;

 FUNC_5(VAR_0);

 VAR_3 = FUNC_2(VAR_0, VAR_2, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_4 == 1) {
  VAR_5 = 0x08;
  VAR_6 = 0x09;
 } else {
  VAR_5 = 0x09;
  VAR_6 = 0x08;
 }


 FUNC_0(VAR_2);


 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_5);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_2[0].gain_x,
    VAR_2[0].phase_y, VAR_5);
 if (VAR_3 < 0)
  return VAR_3;


 FUNC_0(VAR_2);


 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_6);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_2[0].gain_x,
    VAR_2[0].phase_y, VAR_6);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_2);


 VAR_3 = FUNC_4(VAR_0, VAR_2);

 *VAR_1 = VAR_2[0];


 VAR_3 = FUNC_6(VAR_0, 0x08, 0, 0x3f);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_6(VAR_0, 0x09, 0, 0x3f);

 return VAR_3;
}
