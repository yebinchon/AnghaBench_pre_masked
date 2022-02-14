
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r820t_sect_type {int gain_x; int phase_y; } ;
struct r820t_priv {int dummy; } ;


 int FUNC_0 (struct r820t_sect_type*) ;
 int FUNC_1 (struct r820t_priv*,struct r820t_sect_type*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct r820t_priv *VAR_0,
    struct r820t_sect_type *VAR_1)
{
 int VAR_2;
 struct r820t_sect_type VAR_3[3], VAR_4[3];


 if (!(VAR_1->gain_x & 0x1f))
  VAR_3[0].gain_x = ((VAR_1->gain_x) & 0xdf) + 1;
 else
  VAR_3[0].gain_x = VAR_1->gain_x - 1;
 VAR_3[0].phase_y = VAR_1->phase_y;


 VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_3[0].gain_x,
   VAR_3[0].phase_y, 0x08);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_3);

 VAR_4[0] = VAR_3[0];


 VAR_3[0].gain_x = VAR_1->gain_x;
 VAR_3[0].phase_y = VAR_1->phase_y;

 VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_3[0].gain_x,
      VAR_3[0].phase_y, 0x08);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_3);

 VAR_4[1] = VAR_3[0];


 if ((VAR_1->gain_x & 0x1f) == 0x00)
  VAR_3[0].gain_x = ((VAR_1->gain_x) | 0x20) + 1;
 else
  VAR_3[0].gain_x = VAR_1->gain_x + 1;
 VAR_3[0].phase_y = VAR_1->phase_y;

 VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_3[0].gain_x,
      VAR_3[0].phase_y, 0x08);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_3);

 VAR_4[2] = VAR_3[0];

 FUNC_0(VAR_4);

 *VAR_1 = VAR_4[0];

 return 0;
}
