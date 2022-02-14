
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct port* driver_data; } ;
struct port {int fifo_ul; } ;
struct nozomi {int dummy; } ;
typedef int s32 ;


 struct nozomi* FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct tty_struct *VAR_0)
{
 struct port *VAR_1 = VAR_0->driver_data;
 struct nozomi *VAR_2 = FUNC_0(VAR_0);
 s32 VAR_3 = 0;

 if (FUNC_2(!VAR_2 || !VAR_1)) {
  goto exit_in_buffer;
 }

 VAR_3 = FUNC_1(&VAR_1->fifo_ul);

exit_in_buffer:
 return VAR_3;
}
