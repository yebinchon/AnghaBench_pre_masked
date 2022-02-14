
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct gtp_dev {int hash_size; int * addr_hash; int * tid_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct gtp_dev *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_2->addr_hash = FUNC_2(VAR_3, sizeof(struct hlist_head),
           VAR_1);
 if (VAR_2->addr_hash == ((void*)0))
  return -VAR_0;

 VAR_2->tid_hash = FUNC_2(VAR_3, sizeof(struct hlist_head),
          VAR_1);
 if (VAR_2->tid_hash == ((void*)0))
  goto err1;

 VAR_2->hash_size = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(&VAR_2->addr_hash[VAR_4]);
  FUNC_0(&VAR_2->tid_hash[VAR_4]);
 }
 return 0;
err1:
 FUNC_1(VAR_2->addr_hash);
 return -VAR_0;
}
