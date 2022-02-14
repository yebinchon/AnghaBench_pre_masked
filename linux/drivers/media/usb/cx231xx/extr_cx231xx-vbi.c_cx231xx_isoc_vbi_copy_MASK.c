
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct urb {unsigned char* transfer_buffer; scalar_t__ actual_length; int status; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {int last_sav; int partial_buf; scalar_t__ is_partial_line; } ;
struct cx231xx {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,scalar_t__*) ;
 int FUNC_1 (unsigned char*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*,int,unsigned char*,scalar_t__) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (struct cx231xx*,int,int ) ;

__attribute__((used)) static inline int FUNC_5(struct cx231xx *VAR_2, struct urb *VAR_3)
{
 struct cx231xx_dmaqueue *VAR_4 = VAR_3->context;
 int VAR_5 = 1;
 unsigned char *VAR_6;
 u32 VAR_7 = 0, VAR_8 = 0;
 u8 VAR_9 = 0;

 if (!VAR_2)
  return 0;

 if (VAR_2->state & VAR_0)
  return 0;

 if (VAR_3->status < 0) {
  FUNC_4(VAR_2, -1, VAR_3->status);
  if (VAR_3->status == -VAR_1)
   return 0;
 }


 VAR_6 = VAR_3->transfer_buffer;
 VAR_8 = VAR_3->actual_length;

 if (VAR_8 > 0) {
  VAR_7 = 0;

  if (VAR_4->is_partial_line) {


   VAR_9 = VAR_4->last_sav;
  } else {



   VAR_9 = FUNC_0(VAR_6,
         VAR_4->partial_buf,
         &VAR_7);
  }

  VAR_9 &= 0xF0;


  if (VAR_9) {
   VAR_7 += FUNC_2(VAR_2, VAR_4,
    VAR_9,
    VAR_6 + VAR_7,
    VAR_8 - VAR_7);
  }


  VAR_4->is_partial_line = 0;

  while (VAR_7 < VAR_8) {
   u32 VAR_10 = 0;

   VAR_9 = FUNC_1(
    VAR_6 + VAR_7,
    VAR_8 - VAR_7,
    &VAR_10);

   VAR_7 += VAR_10;

   VAR_9 &= 0xF0;
   if (VAR_9 && (VAR_7 < VAR_8)) {
    VAR_7 += FUNC_2(VAR_2,
     VAR_4, VAR_9,
     VAR_6+VAR_7,
     VAR_8-VAR_7);
   }
  }



  FUNC_3(VAR_4->partial_buf, VAR_6 + VAR_8 - 4, 4);
  VAR_7 = 0;
 }

 return VAR_5;
}
