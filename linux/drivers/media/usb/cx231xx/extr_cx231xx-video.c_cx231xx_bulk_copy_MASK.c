
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct urb {unsigned char* transfer_buffer; int actual_length; int status; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {int last_sav; int partial_buf; scalar_t__ is_partial_line; } ;
struct cx231xx {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int*) ;
 int FUNC_1 (unsigned char*,int,int*) ;
 int FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*,int,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (struct cx231xx*,int,int ) ;

__attribute__((used)) static inline int FUNC_5(struct cx231xx *VAR_2, struct urb *VAR_3)
{
 struct cx231xx_dmaqueue *VAR_4 = VAR_3->context;
 unsigned char *VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0;
 u8 VAR_8 = 0;

 if (!VAR_2)
  return 0;

 if (VAR_2->state & VAR_0)
  return 0;

 if (VAR_3->status < 0) {
  FUNC_4(VAR_2, -1, VAR_3->status);
  if (VAR_3->status == -VAR_1)
   return 0;
 }

 if (1) {


  VAR_5 = VAR_3->transfer_buffer;
  VAR_7 = VAR_3->actual_length;
  VAR_6 = 0;

  if (VAR_4->is_partial_line) {

   VAR_8 = VAR_4->last_sav;
  } else {


   VAR_8 =
       FUNC_0(VAR_5,
         VAR_4->partial_buf,
         &VAR_6);
  }

  VAR_8 &= 0xF0;


  if (VAR_8) {
   VAR_6 += FUNC_2(VAR_2, VAR_4,
    VAR_8,
    VAR_5 + VAR_6,
    VAR_7 - VAR_6);
  }




  while (VAR_6 < VAR_7) {
   u32 VAR_9 = 0;

   VAR_8 = FUNC_1(
    VAR_5 + VAR_6,
    VAR_7 - VAR_6,
    &VAR_9);

   VAR_6 += VAR_9;

   VAR_8 &= 0xF0;
   if (VAR_8 && (VAR_6 < VAR_7)) {
    VAR_6 += FUNC_2(VAR_2,
     VAR_4, VAR_8,
     VAR_5 + VAR_6,
     VAR_7 - VAR_6);
   }
  }



  FUNC_3(VAR_4->partial_buf, VAR_5 + VAR_7 - 4, 4);
  VAR_6 = 0;

 }
 return 1;
}
