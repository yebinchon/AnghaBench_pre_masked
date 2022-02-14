
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {int stack_entries; int stack_len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct dma_debug_entry* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static struct dma_debug_entry *FUNC_8(void)
{
 struct dma_debug_entry *VAR_4;
 unsigned long VAR_5;

 FUNC_5(&VAR_1, VAR_5);
 if (VAR_3 == 0) {
  if (FUNC_3(VAR_0)) {
   VAR_2 = 1;
   FUNC_6(&VAR_1, VAR_5);
   FUNC_4("debugging out of memory - disabling\n");
   return ((void*)0);
  }
  FUNC_2();
 }

 VAR_4 = FUNC_1();

 FUNC_6(&VAR_1, VAR_5);






 return VAR_4;
}
