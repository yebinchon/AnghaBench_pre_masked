
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_qspi {int data_completion; int rx_bytes; scalar_t__ tx_bytes; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zynq_qspi*,int ) ;
 int FUNC_2 (struct zynq_qspi*,int ) ;
 int FUNC_3 (struct zynq_qspi*,int ,int) ;
 int FUNC_4 (struct zynq_qspi*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 u32 VAR_10;
 bool VAR_11;
 struct zynq_qspi *VAR_12 = (struct zynq_qspi *)VAR_9;

 VAR_10 = FUNC_1(VAR_12, VAR_7);
 FUNC_3(VAR_12, VAR_7, VAR_10);

 if ((VAR_10 & VAR_5) ||
     (VAR_10 & VAR_3)) {





  VAR_11 = !!(VAR_10 & VAR_5);

  FUNC_2(VAR_12, VAR_6);
  if (VAR_12->tx_bytes) {

   FUNC_4(VAR_12, VAR_6,
        VAR_11);
  } else {




   if (!VAR_12->rx_bytes) {
    FUNC_3(VAR_12,
      VAR_2,
      VAR_4);
    FUNC_0(&VAR_12->data_completion);
   }
  }
  return VAR_0;
 }

 return VAR_1;
}
