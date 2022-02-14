
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int dma_error; int dummy_dma_page_physical_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r592_device*,int ,int ) ;
 int FUNC_1 (struct r592_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct r592_device *VAR_6, int VAR_7)
{
 FUNC_0(VAR_6, VAR_3,
  VAR_4);


 FUNC_1(VAR_6, VAR_2,
   VAR_6->dummy_dma_page_physical_address);

 FUNC_0(VAR_6, VAR_5, VAR_1);
 FUNC_0(VAR_6, VAR_5, VAR_0);
 VAR_6->dma_error = VAR_7;
}
