
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct mxser_port* driver_data; } ;
struct mxser_port {int xmit_cnt; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct mxser_port *VAR_1 = VAR_0->driver_data;
 return VAR_1->xmit_cnt;
}
