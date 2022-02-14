
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_upr {unsigned int type; int paddr; } ;
struct slic_device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct slic_upr* FUNC_0 (int,int ) ;
 int FUNC_1 (struct slic_device*,struct slic_upr*) ;

__attribute__((used)) static int FUNC_2(struct slic_device *VAR_2, unsigned int VAR_3,
   dma_addr_t VAR_4)
{
 struct slic_upr *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->type = VAR_3;
 VAR_5->paddr = VAR_4;

 FUNC_1(VAR_2, VAR_5);

 return 0;
}
