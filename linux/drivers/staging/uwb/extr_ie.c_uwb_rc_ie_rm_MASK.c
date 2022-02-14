
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int beaconing; int ies_mutex; int ies; } ;
typedef enum uwb_ie { ____Placeholder_uwb_ie } uwb_ie ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_rc*,int) ;
 int FUNC_3 (struct uwb_rc*,int ) ;

int FUNC_4(struct uwb_rc *VAR_0, enum uwb_ie VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->ies_mutex);

 FUNC_2(VAR_0, VAR_1);

 if (VAR_0->beaconing != -1)
  VAR_2 = FUNC_3(VAR_0, VAR_0->ies);

 FUNC_1(&VAR_0->ies_mutex);

 return VAR_2;
}
