
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx18_av_state {scalar_t__ aud_input; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx18*,int,int,int) ;
 int FUNC_1 (struct cx18*,int) ;
 int FUNC_2 (struct cx18*,int,int) ;
 int FUNC_3 (struct cx18*,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct cx18 *VAR_1, int VAR_2)
{
 struct cx18_av_state *VAR_3 = &VAR_1->av_state;
 u8 VAR_4;

 if (VAR_3->aud_input > VAR_0) {




  VAR_4 = FUNC_1(VAR_1, 0x803);
  if (VAR_2) {

   VAR_4 &= ~0x10;
   FUNC_3(VAR_1, 0x803, VAR_4, VAR_4, 0x1f);
   FUNC_2(VAR_1, 0x8d3, 0x1f);
  } else {

   VAR_4 |= 0x10;
   FUNC_3(VAR_1, 0x803, VAR_4, VAR_4, 0x1f);
  }
 } else {

  FUNC_0(VAR_1, 0x8d3, ~0x2, VAR_2 ? 0x02 : 0x00);
 }
}
