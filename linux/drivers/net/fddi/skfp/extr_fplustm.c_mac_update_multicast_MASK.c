
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct TYPE_5__ {struct s_fpmc* table; } ;
struct TYPE_6__ {TYPE_1__ mc; scalar_t__ func_addr; } ;
struct TYPE_7__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;
struct TYPE_8__ {int* a; } ;
struct s_fpmc {TYPE_4__ a; scalar_t__ n; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct s_smc *VAR_13)
{
 struct s_fpmc *VAR_14 ;
 u_char *VAR_15 ;
 int VAR_16 ;




 FUNC_2(FUNC_1(VAR_0),VAR_9) ;




 if (VAR_13->hw.fp.func_addr) {
  VAR_15 = (u_char *) &VAR_13->hw.fp.func_addr ;
  FUNC_2(FUNC_1(VAR_6),0xffff) ;
  FUNC_2(FUNC_1(VAR_5),(u_short) ~((VAR_15[0] << 8) + VAR_15[1])) ;
  FUNC_2(FUNC_1(VAR_4),(u_short) ~((VAR_15[2] << 8) + VAR_15[3])) ;
  FUNC_2(FUNC_1(VAR_7),VAR_11|VAR_8) ;
  FUNC_2(FUNC_1(VAR_3), 0xc000) ;
  FUNC_2(FUNC_1(VAR_2), 0x0000) ;
  FUNC_2(FUNC_1(VAR_1), 0x0000) ;
  FUNC_2(FUNC_1(VAR_0),VAR_10) ;
 }




 FUNC_2(FUNC_1(VAR_4),0xffff) ;
 FUNC_2(FUNC_1(VAR_5),0xffff) ;
 FUNC_2(FUNC_1(VAR_6),0xffff) ;
 FUNC_2(FUNC_1(VAR_7),VAR_11|VAR_8) ;

 for (VAR_16 = 0, VAR_14 = VAR_13->hw.fp.mc.table; VAR_16 < VAR_12; VAR_16++, VAR_14++) {
  if (VAR_14->n) {
   FUNC_0() ;




   FUNC_2(FUNC_1(VAR_3),
    (u_short)((VAR_14->a.a[0]<<8)+VAR_14->a.a[1])) ;
   FUNC_2(FUNC_1(VAR_2),
    (u_short)((VAR_14->a.a[2]<<8)+VAR_14->a.a[3])) ;
   FUNC_2(FUNC_1(VAR_1),
    (u_short)((VAR_14->a.a[4]<<8)+VAR_14->a.a[5])) ;
   FUNC_2(FUNC_1(VAR_0),VAR_10) ;
  }
 }
}
