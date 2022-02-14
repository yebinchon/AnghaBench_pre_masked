
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbc_port {int write_fifo; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,char*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2(struct dbc_port *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->write_fifo);
 if (VAR_3 < VAR_2)
  VAR_2 = VAR_3;
 if (VAR_2 != 0)
  VAR_2 = FUNC_1(&VAR_0->write_fifo, VAR_1, VAR_2);
 return VAR_2;
}
