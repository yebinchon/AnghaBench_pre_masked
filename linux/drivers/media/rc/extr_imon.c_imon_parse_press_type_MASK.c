
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct imon_context {scalar_t__ kc; scalar_t__ last_keycode; unsigned char rc_toggle; int kc_lock; scalar_t__ release_code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct imon_context *VAR_3,
     unsigned char *VAR_4, u8 VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_0(&VAR_3->kc_lock, VAR_7);


 if (VAR_3->kc == VAR_2 && VAR_4[0] == 0x02 && VAR_4[3] == 0x00)
  VAR_3->kc = VAR_3->last_keycode;


 else if (VAR_3->kc == VAR_2 && VAR_4[0] == 0x68 && VAR_4[1] == 0x82 &&
   VAR_4[2] == 0x81 && VAR_4[3] == 0xb7)
  VAR_3->kc = VAR_3->last_keycode;


 else if (VAR_3->kc == VAR_2 && VAR_4[0] == 0x01 && VAR_4[1] == 0x00 &&
   VAR_4[2] == 0x81 && VAR_4[3] == 0xb7)
  VAR_3->kc = VAR_3->last_keycode;


 else if (VAR_5 == VAR_1) {
  VAR_3->rc_toggle = VAR_4[2];
  VAR_6 = 1;


 } else if (VAR_3->kc == VAR_2)
  VAR_6 = -VAR_0;


 else if (VAR_3->release_code)
  VAR_6 = 0;


 else
  VAR_6 = 1;

 FUNC_1(&VAR_3->kc_lock, VAR_7);

 return VAR_6;
}
