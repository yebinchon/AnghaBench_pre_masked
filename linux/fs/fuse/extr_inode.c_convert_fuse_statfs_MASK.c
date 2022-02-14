
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstatfs {int f_namelen; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_frsize; int f_bsize; int f_type; } ;
struct fuse_kstatfs {int namelen; int ffree; int files; int bavail; int bfree; int blocks; int frsize; int bsize; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kstatfs *VAR_1, struct fuse_kstatfs *VAR_2)
{
 VAR_1->f_type = VAR_0;
 VAR_1->f_bsize = VAR_2->bsize;
 VAR_1->f_frsize = VAR_2->frsize;
 VAR_1->f_blocks = VAR_2->blocks;
 VAR_1->f_bfree = VAR_2->bfree;
 VAR_1->f_bavail = VAR_2->bavail;
 VAR_1->f_files = VAR_2->files;
 VAR_1->f_ffree = VAR_2->ffree;
 VAR_1->f_namelen = VAR_2->namelen;

}
