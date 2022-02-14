
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int beaconing; int ies_mutex; int ies; } ;
struct uwb_ie_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct uwb_ie_hdr* FUNC_2 (void**,size_t*) ;
 int FUNC_3 (struct uwb_rc*,struct uwb_ie_hdr const*) ;
 int FUNC_4 (struct uwb_rc*,int ) ;

int FUNC_5(struct uwb_rc *VAR_1,
    const struct uwb_ie_hdr *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 void *VAR_5;
 const struct uwb_ie_hdr *VAR_6;

 FUNC_0(&VAR_1->ies_mutex);

 VAR_5 = (void *)VAR_2;
 for (;;) {
  VAR_6 = FUNC_2(&VAR_5, &VAR_3);
  if (!VAR_6)
   break;

  VAR_4 = FUNC_3(VAR_1, VAR_6);
  if (VAR_4 < 0)
   break;
 }
 if (VAR_4 >= 0) {
  if (VAR_3 == 0) {
   if (VAR_1->beaconing != -1)
    VAR_4 = FUNC_4(VAR_1, VAR_1->ies);
  } else
   VAR_4 = -VAR_0;
 }

 FUNC_1(&VAR_1->ies_mutex);

 return VAR_4;
}
