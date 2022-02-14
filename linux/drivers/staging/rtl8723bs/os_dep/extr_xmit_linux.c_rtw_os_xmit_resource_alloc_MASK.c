
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct xmit_buf {scalar_t__ pallocated_buf; int * pbuf; } ;
struct adapter {int dummy; } ;
typedef int SIZE_PTR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(struct adapter *VAR_3, struct xmit_buf *VAR_4, u32 VAR_5, u8 VAR_6)
{
 if (VAR_5 > 0) {
  VAR_4->pallocated_buf = FUNC_1(VAR_5);
  if (!VAR_4->pallocated_buf)
   return VAR_1;

  VAR_4->pbuf = (u8 *)FUNC_0((SIZE_PTR)(VAR_4->pallocated_buf), VAR_0);
 }

 return VAR_2;
}
