
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct altera_jtag {int ir_pre; int ir_post; int jtag_state; int ir_length; int const irstop_state; int * ir_buffer; int ir_post_data; int ir_pre_data; } ;
struct altera_state {struct altera_jtag js; } ;
typedef enum altera_jtag_state { ____Placeholder_altera_jtag_state } altera_jtag_state ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct altera_state*,int,int,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int,int *,int,int,int ,int) ;
 int FUNC_3 (struct altera_state*,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct altera_state *VAR_2,
    u32 VAR_3,
    u8 *VAR_4,
    u32 VAR_5)

{
 struct altera_jtag *VAR_6 = &VAR_2->js;
 int VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = VAR_6->ir_pre + VAR_3 + VAR_6->ir_post;
 int VAR_10 = 0;
 enum altera_jtag_state VAR_11 = 136;

 switch (VAR_6->jtag_state) {
 case 136:
 case 128:
 case 137:
  VAR_7 = 0;
  VAR_11 = 137;
  break;

 case 140:
 case 144:
 case 139:
 case 143:
 case 141:
 case 142:
 case 138:
  VAR_7 = 1;
  VAR_11 = 141;
  break;

 case 131:
 case 135:
 case 130:
 case 134:
 case 132:
 case 133:
 case 129:
  VAR_7 = 2;
  VAR_11 = 132;
  break;

 default:
  VAR_10 = -VAR_1;
  break;
 }

 if (VAR_10 == 0)
  if (VAR_6->jtag_state != VAR_11)
   VAR_10 = FUNC_3(VAR_2, VAR_11);

 if (VAR_10 == 0) {
  if (VAR_9 > VAR_6->ir_length) {
   VAR_8 = (VAR_9 + 7) >> 3;
   FUNC_4(VAR_6->ir_buffer);
   VAR_6->ir_buffer = (u8 *)FUNC_1(VAR_8);
   if (VAR_6->ir_buffer == ((void*)0))
    VAR_10 = -VAR_0;
   else
    VAR_6->ir_length = VAR_8 * 8;

  }
 }

 if (VAR_10 == 0) {




  FUNC_2(VAR_6->ir_buffer,
     VAR_6->ir_pre_data,
     VAR_6->ir_pre,
     VAR_4,
     VAR_5,
     VAR_3,
     VAR_6->ir_post_data,
     VAR_6->ir_post);

  FUNC_0(VAR_2,
    VAR_7,
    VAR_9,
    VAR_6->ir_buffer,
    ((void*)0));


  VAR_6->jtag_state = 132;
 }

 if (VAR_10 == 0)
  if (VAR_6->irstop_state != 132)
   VAR_10 = FUNC_3(VAR_2, VAR_6->irstop_state);


 return VAR_10;
}
