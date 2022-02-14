
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {size_t vtermno; } ;
struct hvc_opal_priv {int hvsi; } ;


 struct hvc_opal_priv** VAR_0 ;
 int FUNC_0 (int *,struct hvc_struct*) ;
 int FUNC_1 (struct hvc_struct*,int) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static void FUNC_3(struct hvc_struct *VAR_1, int VAR_2)
{
 struct hvc_opal_priv *VAR_3 = VAR_0[VAR_1->vtermno];

 FUNC_2("HVSI@%x: do close !\n", VAR_1->vtermno);

 FUNC_0(&VAR_3->hvsi, VAR_1);

 FUNC_1(VAR_1, VAR_2);
}
