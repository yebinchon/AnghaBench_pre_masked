
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int cmng_enables; } ;
struct cmng_init_input {TYPE_2__ flags; scalar_t__ port_rate; } ;
struct TYPE_4__ {scalar_t__ pmf; } ;
struct TYPE_6__ {scalar_t__ line_speed; } ;
struct bnx2x {int cmng; TYPE_1__ port; TYPE_3__ link_vars; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bnx2x*,int,struct cmng_init_input*) ;
 int FUNC_3 (struct bnx2x*,struct cmng_init_input*) ;
 int FUNC_4 (struct cmng_init_input*,int *) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct cmng_init_input*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct cmng_init_input VAR_7;
 FUNC_6(&VAR_7, 0, sizeof(struct cmng_init_input));

 VAR_7.port_rate = VAR_4->link_vars.line_speed;

 if (VAR_6 == VAR_1 && VAR_7.port_rate) {
  int VAR_8;


  if (VAR_5)
   FUNC_5(VAR_4);


  FUNC_3(VAR_4, &VAR_7);


  if (VAR_4->port.pmf)
   for (VAR_8 = VAR_3; VAR_8 < FUNC_0(VAR_4); VAR_8++)
    FUNC_2(VAR_4, VAR_8, &VAR_7);


  VAR_7.flags.cmng_enables |=
     VAR_0;

  FUNC_4(&VAR_7, &VAR_4->cmng);
  return;
 }


 FUNC_1(VAR_2,
    "rate shaping and fairness are disabled\n");
}
