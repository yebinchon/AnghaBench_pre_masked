
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct port* driver_data; } ;
struct port {int fifo_ul; } ;
struct nozomi {int dummy; } ;


 struct nozomi* FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0)
{
 struct port *VAR_1 = VAR_0->driver_data;
 int VAR_2 = 4096;
 const struct nozomi *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3)
  VAR_2 = FUNC_1(&VAR_1->fifo_ul);

 return VAR_2;
}
