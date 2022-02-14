
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hvc_struct* driver_data; } ;
struct hvc_struct {int n_outbuf; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct hvc_struct *VAR_1 = VAR_0->driver_data;

 if (!VAR_1)
  return 0;
 return VAR_1->n_outbuf;
}
