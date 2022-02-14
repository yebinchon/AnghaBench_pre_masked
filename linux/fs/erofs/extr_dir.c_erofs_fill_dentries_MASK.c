
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
typedef struct erofs_dirent {int nid; int nameoff; int file_type; } const erofs_dirent ;
struct dir_context {int dummy; } ;
struct TYPE_2__ {int nid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (unsigned char,char const*,unsigned int) ;
 int FUNC_3 (struct dir_context*,char const*,unsigned int,int ,unsigned char) ;
 int FUNC_4 (int ,char*,int ) ;
 unsigned char FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (char const*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, struct dir_context *VAR_3,
          void *VAR_4, unsigned int *VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 struct erofs_dirent *VAR_8 = VAR_4 + *VAR_5;
 const struct erofs_dirent *VAR_9 = VAR_4 + VAR_6;

 while (VAR_8 < VAR_9) {
  const char *VAR_10;
  unsigned int VAR_11;
  unsigned char VAR_12;

  VAR_12 = FUNC_5(VAR_8->file_type);

  VAR_6 = FUNC_6(VAR_8->nameoff);
  VAR_10 = (char *)VAR_4 + VAR_6;


  if (VAR_8 + 1 >= VAR_9)
   VAR_11 = FUNC_8(VAR_10, VAR_7 - VAR_6);
  else
   VAR_11 = FUNC_6(VAR_8[1].nameoff) - VAR_6;


  if (VAR_6 + VAR_11 > VAR_7 ||
      VAR_11 > VAR_1) {
   FUNC_4(VAR_2->i_sb, "bogus dirent @ nid %llu",
      FUNC_1(VAR_2)->nid);
   FUNC_0(1);
   return -VAR_0;
  }

  FUNC_2(VAR_12, VAR_10, VAR_11);
  if (!FUNC_3(VAR_3, VAR_10, VAR_11,
         FUNC_7(VAR_8->nid), VAR_12))

   return 1;
  ++VAR_8;
  *VAR_5 += sizeof(struct erofs_dirent);
 }
 *VAR_5 = VAR_7;
 return 0;
}
