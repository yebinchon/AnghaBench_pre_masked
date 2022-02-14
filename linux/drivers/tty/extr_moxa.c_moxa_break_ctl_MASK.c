
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int tableAddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3, int VAR_4)
{
 struct moxa_port *VAR_5 = VAR_3->driver_data;

 FUNC_0(VAR_5->tableAddr, VAR_4 ? VAR_0 : VAR_1,
   VAR_2);
 return 0;
}
