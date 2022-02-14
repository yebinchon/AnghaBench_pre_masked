
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugetlbfs_fs_context {unsigned int mode; void* min_val_type; void* min_size_opt; int hstate; void* nr_inodes; void* max_val_type; void* max_size_opt; int gid; int uid; } ;
struct fs_parse_result {unsigned int uint_32; } ;
struct fs_parameter {int key; int * string; } ;
struct fs_context {struct hugetlbfs_fs_context* fs_private; } ;


 int VAR_0 ;







 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct fs_context*,char*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int) ;
 void* FUNC_7 (int *,char**) ;
 int FUNC_8 (char*,unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct fs_context *VAR_4, struct fs_parameter *VAR_5)
{
 struct hugetlbfs_fs_context *VAR_6 = VAR_4->fs_private;
 struct fs_parse_result VAR_7;
 char *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_4, &VAR_3, VAR_5, &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_10) {
 case 128:
  VAR_6->uid = FUNC_6(FUNC_0(), VAR_7.uint_32);
  if (!FUNC_10(VAR_6->uid))
   goto bad_val;
  return 0;

 case 134:
  VAR_6->gid = FUNC_5(FUNC_0(), VAR_7.uint_32);
  if (!FUNC_2(VAR_6->gid))
   goto bad_val;
  return 0;

 case 132:
  VAR_6->mode = VAR_7.uint_32 & 01777U;
  return 0;

 case 129:

  if (!FUNC_4(VAR_5->string[0]))
   goto bad_val;
  VAR_6->max_size_opt = FUNC_7(VAR_5->string, &VAR_8);
  VAR_6->max_val_type = VAR_2;
  if (*VAR_8 == '%')
   VAR_6->max_val_type = VAR_1;
  return 0;

 case 131:

  if (!FUNC_4(VAR_5->string[0]))
   goto bad_val;
  VAR_6->nr_inodes = FUNC_7(VAR_5->string, &VAR_8);
  return 0;

 case 130:
  VAR_9 = FUNC_7(VAR_5->string, &VAR_8);
  VAR_6->hstate = FUNC_9(VAR_9);
  if (!VAR_6->hstate) {
   FUNC_8("Unsupported page size %lu MB\n", VAR_9 >> 20);
   return -VAR_0;
  }
  return 0;

 case 133:

  if (!FUNC_4(VAR_5->string[0]))
   goto bad_val;
  VAR_6->min_size_opt = FUNC_7(VAR_5->string, &VAR_8);
  VAR_6->min_val_type = VAR_2;
  if (*VAR_8 == '%')
   VAR_6->min_val_type = VAR_1;
  return 0;

 default:
  return -VAR_0;
 }

bad_val:
 return FUNC_3(VAR_4, "hugetlbfs: Bad value '%s' for mount option '%s'\n",
        VAR_5->string, VAR_5->key);
}
