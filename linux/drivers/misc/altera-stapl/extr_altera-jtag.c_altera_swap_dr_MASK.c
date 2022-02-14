
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct altera_jtag {int dr_pre; int dr_post; int jtag_state; int dr_length; int const drstop_state; int * dr_buffer; int dr_post_data; int dr_pre_data; } ;
struct altera_state {struct altera_jtag js; } ;
typedef enum altera_jtag_state { ____Placeholder_altera_jtag_state } altera_jtag_state ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct altera_state*,int,int,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int,int *,int,int,int ,int) ;
 int FUNC_3 (int *,int *,int,int,int) ;
 int FUNC_4 (struct altera_state*,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct altera_state *VAR_2, u32 VAR_3,
    u8 *VAR_4, u32 VAR_5,
    u8 *VAR_6, u32 VAR_7)

{
 struct altera_jtag *VAR_8 = &VAR_2->js;
 int VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = VAR_8->dr_pre + VAR_3 + VAR_8->dr_post;
 int VAR_12 = 0;
 enum altera_jtag_state VAR_13 = 136;

 switch (VAR_8->jtag_state) {
 case 136:
 case 128:
 case 137:
  VAR_9 = 0;
  VAR_13 = 137;
  break;

 case 140:
 case 144:
 case 139:
 case 143:
 case 141:
 case 142:
 case 138:
  VAR_9 = 1;
  VAR_13 = 141;
  break;

 case 131:
 case 135:
 case 130:
 case 134:
 case 132:
 case 133:
 case 129:
  VAR_9 = 2;
  VAR_13 = 132;
  break;

 default:
  VAR_12 = -VAR_1;
  break;
 }

 if (VAR_12 == 0)
  if (VAR_8->jtag_state != VAR_13)
   VAR_12 = FUNC_4(VAR_2, VAR_13);

 if (VAR_12 == 0) {
  if (VAR_11 > VAR_8->dr_length) {
   VAR_10 = (VAR_11 + 7) >> 3;
   FUNC_5(VAR_8->dr_buffer);
   VAR_8->dr_buffer = (u8 *)FUNC_1(VAR_10);

   if (VAR_8->dr_buffer == ((void*)0))
    VAR_12 = -VAR_0;
   else
    VAR_8->dr_length = VAR_10 * 8;

  }
 }

 if (VAR_12 == 0) {




  FUNC_2(VAR_8->dr_buffer,
    VAR_8->dr_pre_data,
    VAR_8->dr_pre,
    VAR_4,
    VAR_5,
    VAR_3,
    VAR_8->dr_post_data,
    VAR_8->dr_post);


  FUNC_0(VAR_2,
    VAR_9,
    VAR_11,
    VAR_8->dr_buffer,
    VAR_8->dr_buffer);


  VAR_8->jtag_state = 141;
 }

 if (VAR_12 == 0)
  if (VAR_8->drstop_state != 141)
   VAR_12 = FUNC_4(VAR_2, VAR_8->drstop_state);

 if (VAR_12 == 0)

  FUNC_3(VAR_8->dr_buffer,
     VAR_6,
     VAR_7,
     VAR_8->dr_pre,
     VAR_3);

 return VAR_12;
}
