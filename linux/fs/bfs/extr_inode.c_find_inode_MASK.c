
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct super_block {char* s_id; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_inode {int dummy; } ;
struct TYPE_2__ {int si_lasti; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 struct bfs_inode* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct buffer_head* FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static struct bfs_inode *FUNC_4(struct super_block *VAR_3, u16 VAR_4, struct buffer_head **VAR_5)
{
 if ((VAR_4 < VAR_1) || (VAR_4 > FUNC_0(VAR_3)->si_lasti)) {
  FUNC_2("Bad inode number %s:%08x\n", VAR_3->s_id, VAR_4);
  return FUNC_1(-VAR_2);
 }

 VAR_4 -= VAR_1;

 *VAR_5 = FUNC_3(VAR_3, 1 + VAR_4 / VAR_0);
 if (!*VAR_5) {
  FUNC_2("Unable to read inode %s:%08x\n", VAR_3->s_id, VAR_4);
  return FUNC_1(-VAR_2);
 }

 return (struct bfs_inode *)(*VAR_5)->b_data + VAR_4 % VAR_0;
}
