
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct moxa_port*,int*,int*) ;
 int FUNC_1 (struct moxa_port*,int,int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
 struct moxa_port *VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(&VAR_3);
 VAR_7 = VAR_4->driver_data;
 if (!VAR_7) {
  FUNC_3(&VAR_3);
  return -VAR_0;
 }

 FUNC_0(VAR_7, &VAR_8, &VAR_9);
 if (VAR_5 & VAR_2)
  VAR_9 = 1;
 if (VAR_5 & VAR_1)
  VAR_8 = 1;
 if (VAR_6 & VAR_2)
  VAR_9 = 0;
 if (VAR_6 & VAR_1)
  VAR_8 = 0;
 FUNC_1(VAR_7, VAR_8, VAR_9);
 FUNC_3(&VAR_3);
 return 0;
}
