
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ u8 ;
struct zynqmp_qspi {int bytes_to_receive; int rxbuf; } ;


 int FUNC_0 (int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct zynqmp_qspi *VAR_0,
           ulong VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_0->rxbuf, &VAR_1, VAR_2);
 VAR_0->rxbuf += VAR_2;
 VAR_0->bytes_to_receive -= VAR_2;
}
