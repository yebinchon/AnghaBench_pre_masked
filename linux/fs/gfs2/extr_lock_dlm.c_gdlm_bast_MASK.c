
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_name; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gfs2_glock*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, int VAR_4)
{
 struct gfs2_glock *VAR_5 = VAR_3;

 switch (VAR_4) {
 case 129:
  FUNC_2(VAR_5, VAR_2);
  break;
 case 130:
  FUNC_2(VAR_5, VAR_0);
  break;
 case 128:
  FUNC_2(VAR_5, VAR_1);
  break;
 default:
  FUNC_1(VAR_5->gl_name.ln_sbd, "unknown bast mode %d\n", VAR_4);
  FUNC_0();
 }
}
