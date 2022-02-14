
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_dev {int socket_id; } ;
struct tifm_adapter {int socket_change_set; int lock; int media_switcher; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tifm_adapter *VAR_0, struct tifm_dev *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_0->socket_change_set |= 1 << VAR_1->socket_id;
 FUNC_2(&VAR_0->media_switcher);
 FUNC_1(&VAR_0->lock, VAR_2);
}
