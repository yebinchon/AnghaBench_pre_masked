
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_bm_pool {int dma_addr; int virt_addr; int size_bytes; int id; int buf_num; } ;
struct mvpp2 {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct device*,struct mvpp2*,struct mvpp2_bm_pool*,int) ;
 int FUNC_4 (struct mvpp2*,struct mvpp2_bm_pool*) ;
 int FUNC_5 (struct mvpp2*,int ) ;
 int FUNC_6 (struct mvpp2*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct mvpp2 *VAR_2,
     struct mvpp2_bm_pool *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);


 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_1(1, "cannot free all buffers in pool %d, buf_num left %d\n",
       VAR_3->id, VAR_3->buf_num);
  return 0;
 }

 VAR_5 = FUNC_5(VAR_2, FUNC_0(VAR_3->id));
 VAR_5 |= VAR_0;
 FUNC_6(VAR_2, FUNC_0(VAR_3->id), VAR_5);

 FUNC_2(VAR_1, VAR_3->size_bytes,
     VAR_3->virt_addr,
     VAR_3->dma_addr);
 return 0;
}
