
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usba_udc {int int_enb_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct usba_udc*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct usba_udc *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_1->int_enb_cache | VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_3);
 VAR_1->int_enb_cache = VAR_3;
}
