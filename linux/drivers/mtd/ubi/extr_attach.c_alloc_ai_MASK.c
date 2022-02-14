
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_attach_info {int aeb_slab_cache; int volumes; int fastmap; int alien; int erase; int free; int corr; } ;
struct ubi_ainf_peb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ubi_attach_info*) ;
 int FUNC_2 (char*,int,int ,int ,int *) ;
 struct ubi_attach_info* FUNC_3 (int,int ) ;

__attribute__((used)) static struct ubi_attach_info *FUNC_4(void)
{
 struct ubi_attach_info *VAR_2;

 VAR_2 = FUNC_3(sizeof(struct ubi_attach_info), VAR_0);
 if (!VAR_2)
  return VAR_2;

 FUNC_0(&VAR_2->corr);
 FUNC_0(&VAR_2->free);
 FUNC_0(&VAR_2->erase);
 FUNC_0(&VAR_2->alien);
 FUNC_0(&VAR_2->fastmap);
 VAR_2->volumes = VAR_1;
 VAR_2->aeb_slab_cache = FUNC_2("ubi_aeb_slab_cache",
            sizeof(struct ubi_ainf_peb),
            0, 0, ((void*)0));
 if (!VAR_2->aeb_slab_cache) {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
