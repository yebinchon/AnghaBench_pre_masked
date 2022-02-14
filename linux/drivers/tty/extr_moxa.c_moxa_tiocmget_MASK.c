
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int dummy; } ;


 int FUNC_0 (struct moxa_port*,int*,int*) ;
 int FUNC_1 (struct moxa_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_5)
{
 struct moxa_port *VAR_6 = VAR_5->driver_data;
 int VAR_7 = 0, VAR_8, VAR_9;

 FUNC_0(VAR_6, &VAR_8, &VAR_9);
 if (VAR_8)
  VAR_7 |= VAR_3;
 if (VAR_9)
  VAR_7 |= VAR_4;
 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 & 1)
  VAR_7 |= VAR_1;
 if (VAR_8 & 2)
  VAR_7 |= VAR_2;
 if (VAR_8 & 4)
  VAR_7 |= VAR_0;
 return VAR_7;
}
