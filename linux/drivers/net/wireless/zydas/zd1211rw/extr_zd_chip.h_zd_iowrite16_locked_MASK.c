
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef int u16 ;
struct zd_ioreq16 {int value; int addr; } ;
struct zd_chip {int usb; int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct zd_ioreq16*,int) ;

__attribute__((used)) static inline int FUNC_3(struct zd_chip *VAR_0, u16 VAR_1,
                               zd_addr_t VAR_2)
{
 struct zd_ioreq16 VAR_3;

 FUNC_0(FUNC_1(&VAR_0->mutex));
 VAR_3.addr = VAR_2;
 VAR_3.value = VAR_1;

 return FUNC_2(&VAR_0->usb, &VAR_3, 1);
}
