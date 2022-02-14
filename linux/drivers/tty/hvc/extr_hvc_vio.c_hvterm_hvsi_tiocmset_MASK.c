
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvterm_priv {int hvsi; int termno; } ;
struct hvc_struct {size_t vtermno; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct hvterm_priv** VAR_1 ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hvc_struct *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct hvterm_priv *VAR_5 = VAR_1[VAR_2->vtermno];

 FUNC_1("HVSI@%x: Set modem control, set=%x,clr=%x\n",
   VAR_5->termno, VAR_3, VAR_4);

 if (VAR_3 & VAR_0)
  FUNC_0(&VAR_5->hvsi, 1);
 else if (VAR_4 & VAR_0)
  FUNC_0(&VAR_5->hvsi, 0);

 return 0;
}
