
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmlogrdr_priv_t {int iucv_path_severed; int priv_lock; scalar_t__ connection_established; int * path; } ;
struct iucv_path {struct vmlogrdr_priv_t* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct iucv_path*,int *) ;
 int FUNC_1 (struct iucv_path*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iucv_path *VAR_2, u8 *VAR_3)
{
 struct vmlogrdr_priv_t * VAR_4 = VAR_2->private;
 u8 VAR_5 = (u8) VAR_3[8];

 FUNC_2("vmlogrdr: connection severed with reason %i\n", VAR_5);

 FUNC_0(VAR_2, ((void*)0));
 FUNC_1(VAR_2);
 VAR_4->path = ((void*)0);

 FUNC_3(&VAR_4->priv_lock);
 VAR_4->connection_established = 0;
 VAR_4->iucv_path_severed = 1;
 FUNC_4(&VAR_4->priv_lock);

 FUNC_5(&VAR_0);

 FUNC_6(&VAR_1);
}
