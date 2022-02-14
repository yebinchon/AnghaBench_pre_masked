
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct net_device {unsigned long mem_start; } ;
struct TYPE_2__ {unsigned long rmem_end; unsigned long rmem_start; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, int VAR_3,
      struct sk_buff *VAR_4, int VAR_5)
{
 unsigned long VAR_6 = VAR_5 - (VAR_0<<8);
 unsigned long VAR_7 = VAR_6+VAR_2->mem_start;

 if (VAR_7 + VAR_3 > VAR_1.rmem_end) {

  int VAR_8 = VAR_1.rmem_end - VAR_7;
  FUNC_0(VAR_4->data, VAR_2->mem_start + VAR_6,
         VAR_8);
  VAR_3 -= VAR_8;
  FUNC_0(VAR_4->data + VAR_8,
         VAR_1.rmem_start, VAR_3);
 } else {
  FUNC_0(VAR_4->data, VAR_2->mem_start + VAR_6,
         VAR_3);
 }
}
