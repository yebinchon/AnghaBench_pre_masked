
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct adapter {scalar_t__* port; } ;
struct TYPE_2__ {unsigned int nqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct adapter*,int,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11 = FUNC_1(VAR_9, 0)->nqsets;
 unsigned int VAR_12 = VAR_9->port[1] ? FUNC_1(VAR_9, 1)->nqsets : 1;
 u8 VAR_13[VAR_8 + 1];
 u16 VAR_14[VAR_7 + 1];

 for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
  VAR_13[VAR_10] = VAR_10;
 VAR_13[VAR_8] = 0xff;

 for (VAR_10 = 0; VAR_10 < VAR_7 / 2; ++VAR_10) {
  VAR_14[VAR_10] = VAR_10 % VAR_11;
  VAR_14[VAR_10 + VAR_7 / 2] = (VAR_10 % VAR_12) + VAR_11;
 }
 VAR_14[VAR_7] = 0xffff;

 FUNC_2(VAR_9, VAR_1 | VAR_4 | VAR_5 |
        VAR_6 | VAR_2 | VAR_3 |
        FUNC_0(6) | VAR_0, VAR_13, VAR_14);
}
