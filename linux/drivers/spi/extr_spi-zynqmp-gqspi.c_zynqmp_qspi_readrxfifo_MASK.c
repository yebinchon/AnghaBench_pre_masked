
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ulong ;
typedef int u32 ;
struct zynqmp_qspi {scalar_t__ bytes_to_receive; scalar_t__ rxbuf; } ;


 int VAR_0 ;
 void* FUNC_0 (struct zynqmp_qspi*,int ) ;
 int FUNC_1 (struct zynqmp_qspi*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_qspi *VAR_1, u32 VAR_2)
{
 ulong VAR_3;
 int VAR_4 = 0;

 while ((VAR_4 < VAR_2) && (VAR_1->bytes_to_receive > 0)) {
  if (VAR_1->bytes_to_receive >= 4) {
   (*(u32 *) VAR_1->rxbuf) =
   FUNC_0(VAR_1, VAR_0);
   VAR_1->rxbuf += 4;
   VAR_1->bytes_to_receive -= 4;
   VAR_4 += 4;
  } else {
   VAR_3 = FUNC_0(VAR_1, VAR_0);
   VAR_4 += VAR_1->bytes_to_receive;
   FUNC_1(VAR_1, VAR_3,
         VAR_1->bytes_to_receive);
   VAR_1->bytes_to_receive = 0;
  }
 }
}
