
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int auth_list; int asoc_list; int sta_recvpriv; int sta_xmitpriv; int hash_list; int list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sta_info *VAR_0)
{
 FUNC_3((u8 *)VAR_0, 0, sizeof(struct sta_info));
 FUNC_4(&VAR_0->lock);
 FUNC_0(&VAR_0->list);
 FUNC_0(&VAR_0->hash_list);
 FUNC_2(&VAR_0->sta_xmitpriv);
 FUNC_1(&VAR_0->sta_recvpriv);
 FUNC_0(&VAR_0->asoc_list);
 FUNC_0(&VAR_0->auth_list);
}
