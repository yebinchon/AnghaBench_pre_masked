
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int stride; } ;
struct usbatm_data {unsigned int buf_usage; unsigned char* cell_buf; TYPE_1__ rx_channel; } ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_1 (struct usbatm_data*,unsigned char*) ;

__attribute__((used)) static void FUNC_2(struct usbatm_data *VAR_0,
  unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_0->rx_channel.stride;
 unsigned int VAR_4 = VAR_0->buf_usage;




 if (VAR_4 > 0) {

  unsigned char *VAR_5 = VAR_0->cell_buf;
  unsigned int VAR_6 = VAR_3 - VAR_4;

  if (VAR_2 >= VAR_6) {

   FUNC_0(VAR_5 + VAR_4, VAR_1, VAR_6);
   VAR_1 += VAR_6;
   VAR_2 -= VAR_6;
   FUNC_1(VAR_0, VAR_5);
   VAR_0->buf_usage = 0;
  } else {

   FUNC_0(VAR_5 + VAR_4, VAR_1, VAR_2);
   VAR_0->buf_usage = VAR_4 + VAR_2;
   return;
  }
 }

 for (; VAR_2 >= VAR_3; VAR_2 -= VAR_3, VAR_1 += VAR_3)
  FUNC_1(VAR_0, VAR_1);

 if (VAR_2 > 0) {


  FUNC_0(VAR_0->cell_buf, VAR_1, VAR_2);
  VAR_0->buf_usage = VAR_2;
 }
}
