
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvterm_priv {int hvsi; int termno; } ;
struct hvc_struct {size_t vtermno; } ;


 int FUNC_0 (int *,struct hvc_struct*) ;
 struct hvterm_priv** VAR_0 ;
 int FUNC_1 (struct hvc_struct*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct hvc_struct *VAR_1, int VAR_2)
{
 struct hvterm_priv *VAR_3 = VAR_0[VAR_1->vtermno];
 int VAR_4;

 FUNC_2("HVSI@%x: open !\n", VAR_3->termno);

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(&VAR_3->hvsi, VAR_1);
}
