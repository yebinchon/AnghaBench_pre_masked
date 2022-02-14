
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; } ;
struct slgt_info {int rx_restart; int rx_enabled; TYPE_2__ params; TYPE_1__* rbufs; scalar_t__ rx_pio; } ;
struct TYPE_3__ {scalar_t__ pdesc; } ;


 scalar_t__ VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned short FUNC_0 (struct slgt_info*,int ) ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*,unsigned short) ;
 int FUNC_4 (struct slgt_info*,unsigned short) ;
 int FUNC_5 (struct slgt_info*,int ,unsigned short) ;
 int FUNC_6 (struct slgt_info*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct slgt_info *VAR_13)
{
 unsigned short VAR_14;

 FUNC_3(VAR_13, VAR_6 + VAR_5);


 FUNC_5(VAR_13, VAR_12, VAR_6);


 VAR_14 = FUNC_0(VAR_13, VAR_8) & ~VAR_1;
 FUNC_5(VAR_13, VAR_8, (unsigned short)(VAR_14 | VAR_3));
 FUNC_5(VAR_13, VAR_8, VAR_14);

 FUNC_1(VAR_13);
 FUNC_2(VAR_13);

 if (VAR_13->rx_pio) {

  FUNC_5(VAR_13, VAR_11, (unsigned short)(FUNC_0(VAR_13, VAR_11) & ~VAR_2));
  FUNC_4(VAR_13, VAR_5);
  if (VAR_13->params.mode == VAR_7) {

   FUNC_6(VAR_13, VAR_9, VAR_4);
  }
 } else {

  FUNC_5(VAR_13, VAR_11, (unsigned short)(FUNC_0(VAR_13, VAR_11) | VAR_2));

  FUNC_6(VAR_13, VAR_10, VAR_13->rbufs[0].pdesc);

  if (VAR_13->params.mode != VAR_7) {

   FUNC_6(VAR_13, VAR_9, (VAR_3 + VAR_0));
  } else {

   FUNC_6(VAR_13, VAR_9, (VAR_4 + VAR_3 + VAR_0));
  }
 }

 FUNC_4(VAR_13, VAR_6);


 FUNC_5(VAR_13, VAR_8, (unsigned short)(FUNC_0(VAR_13, VAR_8) | VAR_1));

 VAR_13->rx_restart = 0;
 VAR_13->rx_enabled = 1;
}
