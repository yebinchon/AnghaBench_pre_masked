
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_epfile {int dentry; int name; int mutex; struct ffs_data* ffs; } ;
struct ffs_data {unsigned int eps_count; int user_flags; unsigned int* eps_addrmap; struct ffs_epfile* epfiles; int sb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ffs_epfile*,unsigned int) ;
 int FUNC_2 (int ,int ,struct ffs_epfile*,int *) ;
 struct ffs_epfile* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ffs_data *VAR_4)
{
 struct ffs_epfile *VAR_5, *VAR_6;
 unsigned VAR_7, VAR_8;

 FUNC_0();

 VAR_8 = VAR_4->eps_count;
 VAR_6 = FUNC_3(VAR_8, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = VAR_6;
 for (VAR_7 = 1; VAR_7 <= VAR_8; ++VAR_7, ++VAR_5) {
  VAR_5->ffs = VAR_4;
  FUNC_4(&VAR_5->mutex);
  if (VAR_4->user_flags & VAR_1)
   FUNC_5(VAR_5->name, "ep%02x", VAR_4->eps_addrmap[VAR_7]);
  else
   FUNC_5(VAR_5->name, "ep%u", VAR_7);
  VAR_5->dentry = FUNC_2(VAR_4->sb, VAR_5->name,
       VAR_5,
       &VAR_3);
  if (FUNC_6(!VAR_5->dentry)) {
   FUNC_1(VAR_6, VAR_7 - 1);
   return -VAR_0;
  }
 }

 VAR_4->epfiles = VAR_6;
 return 0;
}
