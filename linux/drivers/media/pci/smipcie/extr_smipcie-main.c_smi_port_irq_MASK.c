
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smi_port {int _dmaInterruptCH0; int _dmaInterruptCH1; int _int_status; int tasklet; } ;


 int FUNC_0 (struct smi_port*) ;
 int FUNC_1 (struct smi_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct smi_port *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->_dmaInterruptCH0 | VAR_0->_dmaInterruptCH1;
 int VAR_3 = 0;

 if (VAR_1 & VAR_2) {
  FUNC_1(VAR_0);
  VAR_0->_int_status = VAR_1;
  FUNC_0(VAR_0);
  FUNC_2(&VAR_0->tasklet);
  VAR_3 = 1;
 }
 return VAR_3;
}
