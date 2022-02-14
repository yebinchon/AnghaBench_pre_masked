
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct hvc_struct* driver_data; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct hvc_struct {int outbuf_size; int n_outbuf; int outbuf; int lock; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hvc_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct hvc_struct*) ;
 int FUNC_4 (int,unsigned char const*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
 struct hvc_struct *VAR_5 = VAR_2->driver_data;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;


 if (!VAR_5)
  return -VAR_1;


 if (VAR_5->port.count <= 0)
  return -VAR_0;

 while (VAR_4 > 0) {
  int VAR_9 = 0;

  FUNC_5(&VAR_5->lock, VAR_6);

  VAR_7 = VAR_5->outbuf_size - VAR_5->n_outbuf;

  if (VAR_7) {
   if (VAR_7 > VAR_4)
    VAR_7 = VAR_4;
   FUNC_4(VAR_5->outbuf + VAR_5->n_outbuf, VAR_3, VAR_7);
   VAR_4 -= VAR_7;
   VAR_3 += VAR_7;
   VAR_5->n_outbuf += VAR_7;
   VAR_8 += VAR_7;
  }

  if (VAR_5->n_outbuf > 0)
   VAR_9 = FUNC_3(VAR_5);

  FUNC_6(&VAR_5->lock, VAR_6);

  if (!VAR_9)
   break;

  if (VAR_4) {
   if (VAR_5->n_outbuf > 0)
    FUNC_1(VAR_5);
   FUNC_0();
  }
 }




 if (VAR_5->n_outbuf)
  FUNC_2();

 return VAR_8;
}
