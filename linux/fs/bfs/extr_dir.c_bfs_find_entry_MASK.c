
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {unsigned char* name; int len; } ;
struct inode {unsigned long i_size; int i_sb; } ;
struct buffer_head {unsigned long b_size; scalar_t__ b_data; } ;
struct bfs_dirent {int name; int ino; } ;
struct TYPE_2__ {scalar_t__ i_sblock; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,unsigned char const*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct buffer_head* FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static struct buffer_head *FUNC_5(struct inode *VAR_3,
   const struct qstr *VAR_4,
   struct bfs_dirent **VAR_5)
{
 unsigned long VAR_6 = 0, VAR_7 = 0;
 struct buffer_head *VAR_8 = ((void*)0);
 struct bfs_dirent *VAR_9;
 const unsigned char *VAR_10 = VAR_4->name;
 int VAR_11 = VAR_4->len;

 *VAR_5 = ((void*)0);
 if (VAR_11 > VAR_2)
  return ((void*)0);

 while (VAR_6 * VAR_0 + VAR_7 < VAR_3->i_size) {
  if (!VAR_8) {
   VAR_8 = FUNC_4(VAR_3->i_sb, FUNC_0(VAR_3)->i_sblock + VAR_6);
   if (!VAR_8) {
    VAR_6++;
    continue;
   }
  }
  VAR_9 = (struct bfs_dirent *)(VAR_8->b_data + VAR_7);
  VAR_7 += VAR_1;
  if (FUNC_3(VAR_9->ino) &&
    FUNC_1(VAR_11, VAR_10, VAR_9->name)) {
   *VAR_5 = VAR_9;
   return VAR_8;
  }
  if (VAR_7 < VAR_8->b_size)
   continue;
  FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
  VAR_7 = 0;
  VAR_6++;
 }
 FUNC_2(VAR_8);
 return ((void*)0);
}
