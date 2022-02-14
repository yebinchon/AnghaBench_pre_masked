
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_string {size_t len; int str; } ;
struct TYPE_2__ {int pool_ns; } ;
struct ceph_inode_info {TYPE_1__ i_layout; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct ceph_string*) ;
 struct ceph_string* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct ceph_inode_info *VAR_0,
         char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3 = 0;
 struct ceph_string *VAR_4 = FUNC_1(VAR_0->i_layout.pool_ns);

 if (VAR_4) {
  VAR_3 = VAR_4->len;
  if (VAR_3 <= VAR_2)
   FUNC_2(VAR_1, VAR_4->str, VAR_3);
  FUNC_0(VAR_4);
 }
 return VAR_3;
}
