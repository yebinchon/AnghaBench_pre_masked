
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int dma_usable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct r852_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct r852_device *VAR_4)
{
 VAR_4->dma_usable = (FUNC_1(VAR_4, VAR_2) &
  (VAR_0 | VAR_1)) == (VAR_0 | VAR_1);

 if (!VAR_4->dma_usable)
  FUNC_0("Non dma capable device detected, dma disabled");

 if (!VAR_3) {
  FUNC_0("disabling dma on user request");
  VAR_4->dma_usable = 0;
 }
}
