
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_io_store {unsigned int max; struct device* dev; scalar_t__ idx; struct dpaa2_io_store* alloced_addr; int paddr; int vaddr; } ;
struct dpaa2_dq {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpaa2_io_store*,int) ;
 int FUNC_1 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct dpaa2_io_store*) ;
 struct dpaa2_io_store* FUNC_4 (int,int ) ;
 struct dpaa2_io_store* FUNC_5 (size_t,int ) ;

struct dpaa2_io_store *FUNC_6(unsigned int VAR_2,
          struct device *VAR_3)
{
 struct dpaa2_io_store *VAR_4;
 size_t VAR_5;

 if (!VAR_2 || (VAR_2 > 16))
  return ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->max = VAR_2;
 VAR_5 = VAR_2 * sizeof(struct dpaa2_dq) + 64;
 VAR_4->alloced_addr = FUNC_5(VAR_5, VAR_1);
 if (!VAR_4->alloced_addr) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_4->vaddr = FUNC_0(VAR_4->alloced_addr, 64);
 VAR_4->paddr = FUNC_1(VAR_3, VAR_4->vaddr,
        sizeof(struct dpaa2_dq) * VAR_2,
        VAR_0);
 if (FUNC_2(VAR_3, VAR_4->paddr)) {
  FUNC_3(VAR_4->alloced_addr);
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_4->idx = 0;
 VAR_4->dev = VAR_3;

 return VAR_4;
}
