
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_fs_locations {int locations_count; struct nfsd4_fs_location* locations; } ;
struct nfsd4_fs_location {struct nfsd4_fs_location* hosts; struct nfsd4_fs_location* path; } ;


 int FUNC_0 (struct nfsd4_fs_location*) ;

__attribute__((used)) static void FUNC_1(struct nfsd4_fs_locations *VAR_0)
{
 struct nfsd4_fs_location *VAR_1 = VAR_0->locations;
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->locations_count; VAR_2++) {
  FUNC_0(VAR_1[VAR_2].path);
  FUNC_0(VAR_1[VAR_2].hosts);
 }

 FUNC_0(VAR_1);
 VAR_0->locations = ((void*)0);
}
