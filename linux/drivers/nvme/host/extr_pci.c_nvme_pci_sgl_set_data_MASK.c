
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nvme_sgl_desc {int type; int length; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct nvme_sgl_desc *VAR_1,
  struct scatterlist *VAR_2)
{
 VAR_1->addr = FUNC_1(FUNC_2(VAR_2));
 VAR_1->length = FUNC_0(FUNC_3(VAR_2));
 VAR_1->type = VAR_0 << 4;
}
