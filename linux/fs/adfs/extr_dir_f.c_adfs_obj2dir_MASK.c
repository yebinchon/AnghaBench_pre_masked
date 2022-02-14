
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {int attr; int size; int execaddr; int loadaddr; int indaddr; } ;
struct adfs_direntry {int newdiratts; int dirlen; int direxec; int dirload; int dirinddiscadd; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct adfs_direntry *VAR_0, struct object_info *VAR_1)
{
 FUNC_0(VAR_0->dirinddiscadd, 3, VAR_1->indaddr);
 FUNC_0(VAR_0->dirload, 4, VAR_1->loadaddr);
 FUNC_0(VAR_0->direxec, 4, VAR_1->execaddr);
 FUNC_0(VAR_0->dirlen, 4, VAR_1->size);
 VAR_0->newdiratts = VAR_1->attr;
}
