
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int rw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_pgio_header* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfs_pgio_header*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static struct nfs_pgio_header *FUNC_2(void)
{
 struct nfs_pgio_header *VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->rw_mode = VAR_0;
 return VAR_3;
}
