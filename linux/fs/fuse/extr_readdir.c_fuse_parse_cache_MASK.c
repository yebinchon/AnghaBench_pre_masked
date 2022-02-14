
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int cache_off; int pos; } ;
struct fuse_file {TYPE_1__ readdir; } ;
struct fuse_dirent {scalar_t__ namelen; int off; int type; int ino; int name; } ;
struct dir_context {int pos; } ;
typedef enum fuse_parse_result { ____Placeholder_fuse_parse_result } fuse_parse_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct fuse_dirent*) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dir_context*,int ,scalar_t__,int ,int ) ;
 int * FUNC_3 (int ,char,scalar_t__) ;

__attribute__((used)) static enum fuse_parse_result FUNC_4(struct fuse_file *VAR_7,
            void *VAR_8, unsigned int VAR_9,
            struct dir_context *VAR_10)
{
 unsigned int VAR_11 = VAR_7->readdir.cache_off & ~VAR_6;
 enum fuse_parse_result VAR_12 = VAR_2;

 FUNC_1(VAR_11 >= VAR_9);

 for (;;) {
  struct fuse_dirent *VAR_13 = VAR_8 + VAR_11;
  unsigned int VAR_14 = VAR_9 - VAR_11;
  size_t VAR_15;

  if (VAR_14 < VAR_5 || !VAR_13->namelen)
   break;

  VAR_15 = FUNC_0(VAR_13);

  if (FUNC_1(VAR_13->namelen > VAR_4))
   return VAR_1;
  if (FUNC_1(VAR_15 > VAR_14))
   return VAR_1;
  if (FUNC_1(FUNC_3(VAR_13->name, '/', VAR_13->namelen) != ((void*)0)))
   return VAR_1;

  if (VAR_7->readdir.pos == VAR_10->pos) {
   VAR_12 = VAR_3;
   if (!FUNC_2(VAR_10, VAR_13->name, VAR_13->namelen,
          VAR_13->ino, VAR_13->type))
    return VAR_0;
   VAR_10->pos = VAR_13->off;
  }
  VAR_7->readdir.pos = VAR_13->off;
  VAR_7->readdir.cache_off += VAR_15;

  VAR_11 += VAR_15;
 }

 return VAR_12;
}
