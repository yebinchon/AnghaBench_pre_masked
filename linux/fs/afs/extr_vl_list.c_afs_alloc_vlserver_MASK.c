
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vlserver {size_t name_len; unsigned short port; int name; int probe_lock; int probe_wq; int lock; int usage; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct afs_vlserver* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct afs_vlserver*,char const*,size_t) ;

struct afs_vlserver *FUNC_7(const char *VAR_1, size_t VAR_2,
     unsigned short VAR_3)
{
 struct afs_vlserver *VAR_4;

 VAR_4 = FUNC_2(FUNC_6(VAR_4, VAR_1, VAR_2 + 1),
      VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_4->usage, 1);
  FUNC_4(&VAR_4->lock);
  FUNC_1(&VAR_4->probe_wq);
  FUNC_5(&VAR_4->probe_lock);
  VAR_4->name_len = VAR_2;
  VAR_4->port = VAR_3;
  FUNC_3(VAR_4->name, VAR_1, VAR_2);
 }
 return VAR_4;
}
