
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_loop_get {size_t len; unsigned char** buf; } ;
struct pcmcia_device {int dummy; } ;
typedef int cisdata_t ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*,int ,int ,struct pcmcia_loop_get*) ;

size_t FUNC_1(struct pcmcia_device *VAR_1, cisdata_t VAR_2,
   unsigned char **VAR_3)
{
 struct pcmcia_loop_get VAR_4 = {
  .len = 0,
  .buf = VAR_3,
 };

 *VAR_4.buf = ((void*)0);
 FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_4);

 return VAR_4.len;
}
