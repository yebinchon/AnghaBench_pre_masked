
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int dummy; } ;
struct _riva_hw_state {int * seq; int * gra; int * attr; int * crtc; int misc_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvidia_par*,int ) ;
 int FUNC_1 (struct nvidia_par*,int) ;
 int FUNC_2 (struct nvidia_par*,int) ;
 int FUNC_3 (struct nvidia_par*,int) ;
 int FUNC_4 (struct nvidia_par*) ;
 int FUNC_5 (struct nvidia_par*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct nvidia_par*,struct _riva_hw_state*) ;

__attribute__((used)) static void FUNC_9(struct nvidia_par *VAR_4,
       struct _riva_hw_state *VAR_5)
{
 int VAR_6;

 FUNC_6();
 FUNC_0(VAR_4, 0);

 FUNC_8(VAR_4, VAR_5);

 VAR_5->misc_output = FUNC_4(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->crtc[VAR_6] = FUNC_2(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5->attr[VAR_6] = FUNC_1(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_5->gra[VAR_6] = FUNC_3(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5->seq[VAR_6] = FUNC_5(VAR_4, VAR_6);
 FUNC_7();
}
