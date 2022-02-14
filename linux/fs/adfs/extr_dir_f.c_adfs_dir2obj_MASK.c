
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {char* name; unsigned int name_len; int attr; void* size; void* execaddr; void* loadaddr; void* indaddr; } ;
struct adfs_direntry {char* dirobname; int newdiratts; int dirlen; int direxec; int dirload; int dirinddiscadd; } ;
struct adfs_dir {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct adfs_dir*,struct object_info*) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct adfs_dir *VAR_1, struct object_info *VAR_2,
 struct adfs_direntry *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->dirobname[VAR_4] < ' ')
   break;

  VAR_2->name[VAR_4] = VAR_3->dirobname[VAR_4];
 }

 VAR_2->name_len = VAR_4;
 VAR_2->indaddr = FUNC_1(VAR_3->dirinddiscadd, 3);
 VAR_2->loadaddr = FUNC_1(VAR_3->dirload, 4);
 VAR_2->execaddr = FUNC_1(VAR_3->direxec, 4);
 VAR_2->size = FUNC_1(VAR_3->dirlen, 4);
 VAR_2->attr = VAR_3->newdiratts;

 FUNC_0(VAR_1, VAR_2);
}
