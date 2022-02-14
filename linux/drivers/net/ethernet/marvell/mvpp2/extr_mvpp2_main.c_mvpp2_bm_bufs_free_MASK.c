
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_bm_pool {int buf_num; int buf_size; int id; } ;
struct mvpp2 {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,struct mvpp2*,struct mvpp2_bm_pool*,int *,int *) ;
 int FUNC_3 (struct mvpp2_bm_pool*,void*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, struct mvpp2 *VAR_2,
          struct mvpp2_bm_pool *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 > VAR_3->buf_num) {
  FUNC_0(1, "Pool does not have so many bufs pool(%d) bufs(%d)\n",
       VAR_3->id, VAR_4);
  VAR_4 = VAR_3->buf_num;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  dma_addr_t VAR_6;
  phys_addr_t VAR_7;
  void *VAR_8;

  FUNC_2(VAR_1, VAR_2, VAR_3,
     &VAR_6, &VAR_7);

  FUNC_1(VAR_1, VAR_6,
     VAR_3->buf_size, VAR_0);

  VAR_8 = (void *)FUNC_4(VAR_7);
  if (!VAR_8)
   break;

  FUNC_3(VAR_3, VAR_8);
 }


 VAR_3->buf_num -= VAR_5;
}
