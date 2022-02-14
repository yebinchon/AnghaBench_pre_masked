
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmlogrdr_priv_t {int connection_established; int priv_lock; } ;
struct iucv_path {struct vmlogrdr_priv_t* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iucv_path *VAR_1, u8 *VAR_2)
{
 struct vmlogrdr_priv_t * VAR_3 = VAR_1->private;

 FUNC_0(&VAR_3->priv_lock);
 VAR_3->connection_established = 1;
 FUNC_1(&VAR_3->priv_lock);
 FUNC_2(&VAR_0);
}
