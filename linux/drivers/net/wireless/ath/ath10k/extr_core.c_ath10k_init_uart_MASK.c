
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uart_pin; scalar_t__ uart_pin_workaround; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int FUNC_0 (struct ath10k*,int ,int) ;
 int FUNC_1 (struct ath10k*,char*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_4)
{
 int VAR_5;





 VAR_5 = FUNC_0(VAR_4, VAR_2, 0);
 if (VAR_5) {
  FUNC_2(VAR_4, "could not disable UART prints (%d)\n", VAR_5);
  return VAR_5;
 }

 if (!VAR_3) {
  if (VAR_4->hw_params.uart_pin_workaround) {
   VAR_5 = FUNC_0(VAR_4, VAR_0,
       VAR_4->hw_params.uart_pin);
   if (VAR_5) {
    FUNC_2(VAR_4, "failed to set UART TX pin: %d",
         VAR_5);
    return VAR_5;
   }
  }

  return 0;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_4->hw_params.uart_pin);
 if (VAR_5) {
  FUNC_2(VAR_4, "could not enable UART prints (%d)\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_2, 1);
 if (VAR_5) {
  FUNC_2(VAR_4, "could not enable UART prints (%d)\n", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_0(VAR_4, VAR_1, 19200);
 if (VAR_5) {
  FUNC_2(VAR_4, "could not set the baud rate (%d)\n", VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_4, "UART prints enabled\n");
 return 0;
}
