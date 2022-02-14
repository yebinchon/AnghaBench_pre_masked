
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct cx18_av_state {int std; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cx18*,int,int,int) ;
 int FUNC_1 (struct cx18*,int) ;
 int FUNC_2 (struct cx18*,int,int) ;
 int FUNC_3 (struct cx18*,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct cx18 *VAR_6)
{
 struct cx18_av_state *VAR_7 = &VAR_6->av_state;
 v4l2_std_id VAR_8 = VAR_7->std;
 u8 VAR_9;


 FUNC_2(VAR_6, 0x49f, (VAR_8 & VAR_1) ? 0x14 : 0x11);
 FUNC_0(VAR_6, 0x401, ~0x60, 0);
 FUNC_0(VAR_6, 0x401, ~0x60, 0x60);

 if (VAR_8 & VAR_0) {
  if (VAR_8 == VAR_2) {

   FUNC_3(VAR_6, 0x808, 0xf7, 0xf7, 0xff);
   FUNC_3(VAR_6, 0x80b, 0x02, 0x02, 0x3f);
  } else if (VAR_8 == VAR_3) {

   FUNC_3(VAR_6, 0x808, 0xf8, 0xf8, 0xff);
   FUNC_3(VAR_6, 0x80b, 0x03, 0x03, 0x3f);
  } else {

   FUNC_3(VAR_6, 0x808, 0xf6, 0xf6, 0xff);
   FUNC_3(VAR_6, 0x80b, 0x01, 0x01, 0x3f);
  }
 } else if (VAR_8 & VAR_4) {

  FUNC_3(VAR_6, 0x808, 0xff, 0xff, 0xff);
  FUNC_3(VAR_6, 0x80b, 0x03, 0x03, 0x3f);
 } else if (VAR_8 & VAR_5) {

  FUNC_3(VAR_6, 0x808, 0xff, 0xff, 0xff);
  FUNC_3(VAR_6, 0x80b, 0x03, 0x03, 0x3f);
 }

 VAR_9 = FUNC_1(VAR_6, 0x803);
 if (VAR_9 & 0x10) {

  VAR_9 &= ~0x10;
  FUNC_3(VAR_6, 0x803, VAR_9, VAR_9, 0x1f);
  VAR_9 |= 0x10;
  FUNC_3(VAR_6, 0x803, VAR_9, VAR_9, 0x1f);
 }
}
