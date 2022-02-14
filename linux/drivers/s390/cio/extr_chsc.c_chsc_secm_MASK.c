
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_subsystem {int cm_enabled; void* cub_addr2; void* cub_addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct channel_subsystem*,int) ;
 int FUNC_1 (struct channel_subsystem*) ;
 int FUNC_2 (struct channel_subsystem*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(struct channel_subsystem *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 && !VAR_3->cm_enabled) {
  VAR_3->cub_addr1 = (void *)FUNC_4(VAR_2 | VAR_1);
  VAR_3->cub_addr2 = (void *)FUNC_4(VAR_2 | VAR_1);
  if (!VAR_3->cub_addr1 || !VAR_3->cub_addr2) {
   FUNC_3((unsigned long)VAR_3->cub_addr1);
   FUNC_3((unsigned long)VAR_3->cub_addr2);
   return -VAR_0;
  }
 }
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_3->cm_enabled = VAR_4;
  if (VAR_3->cm_enabled) {
   VAR_5 = FUNC_1(VAR_3);
   if (VAR_5) {
    FUNC_0(VAR_3, 0);
    VAR_3->cm_enabled = 0;
   }
  } else
   FUNC_2(VAR_3);
 }
 if (!VAR_3->cm_enabled) {
  FUNC_3((unsigned long)VAR_3->cub_addr1);
  FUNC_3((unsigned long)VAR_3->cub_addr2);
 }
 return VAR_5;
}
