
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qstr {unsigned char* name; int len; } ;
struct inode {int i_size; void* i_mtime; void* i_ctime; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_dirent {unsigned char* name; scalar_t__ ino; } ;
struct TYPE_2__ {int i_sblock; int i_eblock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,unsigned char const*,int) ;
 int FUNC_5 (struct buffer_head*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct buffer_head* FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_7, const struct qstr *VAR_8, int VAR_9)
{
 const unsigned char *VAR_10 = VAR_8->name;
 int VAR_11 = VAR_8->len;
 struct buffer_head *VAR_12;
 struct bfs_dirent *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;

 FUNC_4("name=%s, namelen=%d\n", VAR_10, VAR_11);

 if (!VAR_11)
  return -VAR_5;
 if (VAR_11 > VAR_2)
  return -VAR_4;

 VAR_15 = FUNC_0(VAR_7)->i_sblock;
 VAR_16 = FUNC_0(VAR_7)->i_eblock;
 for (VAR_14 = VAR_15; VAR_14 <= VAR_16; VAR_14++) {
  VAR_12 = FUNC_7(VAR_7->i_sb, VAR_14);
  if (!VAR_12)
   return -VAR_3;
  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17 += VAR_1) {
   VAR_13 = (struct bfs_dirent *)(VAR_12->b_data + VAR_17);
   if (!VAR_13->ino) {
    VAR_18 = (VAR_14 - VAR_15) * VAR_0 + VAR_17;
    if (VAR_18 >= VAR_7->i_size) {
     VAR_7->i_size += VAR_1;
     VAR_7->i_ctime = FUNC_3(VAR_7);
    }
    VAR_7->i_mtime = FUNC_3(VAR_7);
    FUNC_6(VAR_7);
    VAR_13->ino = FUNC_2((u16)VAR_9);
    for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++)
     VAR_13->name[VAR_19] =
      (VAR_19 < VAR_11) ? VAR_10[VAR_19] : 0;
    FUNC_5(VAR_12, VAR_7);
    FUNC_1(VAR_12);
    return 0;
   }
  }
  FUNC_1(VAR_12);
 }
 return -VAR_6;
}
