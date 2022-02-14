
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunzilog_port {unsigned int cflag; int* curregs; int port; } ;


 int FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (unsigned int,int*) ;
 int FUNC_3 (struct uart_sunzilog_port*,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_sunzilog_port *VAR_5)
{
 unsigned int VAR_6 = VAR_5->cflag;
 int VAR_7, VAR_8;

 VAR_5->cflag &= ~VAR_0;
 VAR_5->cflag |= FUNC_2(VAR_6, &VAR_8);

 VAR_7 = FUNC_0(VAR_8, VAR_3 / VAR_4);
 VAR_5->curregs[VAR_1] = (VAR_7 & 0xff);
 VAR_5->curregs[VAR_2] = (VAR_7 >> 8) & 0xff;
 FUNC_3(VAR_5, FUNC_1(&VAR_5->port));
}
