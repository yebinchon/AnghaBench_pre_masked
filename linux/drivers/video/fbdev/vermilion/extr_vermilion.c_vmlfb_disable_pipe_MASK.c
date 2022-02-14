
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vml_par {int dummy; } ;
struct vml_info {int pipe_disabled; struct vml_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vml_par*,int ) ;
 int FUNC_1 (struct vml_par*,int ,int) ;
 int FUNC_2 (struct vml_info*) ;

__attribute__((used)) static void FUNC_3(struct vml_info *VAR_5)
{
 struct vml_par *VAR_6 = VAR_5->par;


 FUNC_1(VAR_6, VAR_4, 0);
 while (!(FUNC_0(VAR_6, VAR_4) & VAR_2)) ;


 FUNC_1(VAR_6, VAR_0,
      FUNC_0(VAR_6, VAR_0) & ~VAR_1);
 (void)FUNC_0(VAR_6, VAR_0);

 FUNC_2(VAR_5);


 FUNC_1(VAR_6, VAR_3, 0);
 (void)FUNC_0(VAR_6, VAR_3);

 VAR_5->pipe_disabled = 1;
}
