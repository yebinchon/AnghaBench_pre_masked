
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct isci_host {size_t* io_request_sequence; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct isci_host*) ;
 int FUNC_3 (struct isci_host*,size_t) ;

enum sci_status FUNC_4(struct isci_host *VAR_3, u16 VAR_4)
{
 u16 VAR_5 = FUNC_1(VAR_4);
 u16 VAR_6 = FUNC_0(VAR_4);


 if (FUNC_2(VAR_3) == 0)
  return VAR_0;

 if (VAR_6 == VAR_3->io_request_sequence[VAR_5]) {
  VAR_3->io_request_sequence[VAR_5] = (VAR_6+1) & (VAR_1-1);

  FUNC_3(VAR_3, VAR_5);

  return VAR_2;
 }
 return VAR_0;
}
