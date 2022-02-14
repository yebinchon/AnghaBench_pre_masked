
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {unsigned int sync_key_len; int * sync_key_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char const*,int *,unsigned int) ;
 int FUNC_3 (int *,char const*,unsigned int) ;

void FUNC_4(struct pvr2_ioread *VAR_1,
         const char *VAR_2,
         unsigned int VAR_3)
{
 if (!VAR_1) return;

 if (!VAR_2) VAR_3 = 0;
 if ((VAR_3 == VAR_1->sync_key_len) &&
     ((!VAR_3) ||
      (!FUNC_2(VAR_2,VAR_1->sync_key_ptr,VAR_3)))) return;

 if (VAR_3 != VAR_1->sync_key_len) {
  if (VAR_1->sync_key_ptr) {
   FUNC_0(VAR_1->sync_key_ptr);
   VAR_1->sync_key_ptr = ((void*)0);
  }
  VAR_1->sync_key_len = 0;
  if (VAR_3) {
   VAR_1->sync_key_ptr = FUNC_1(VAR_3,VAR_0);
   if (VAR_1->sync_key_ptr) {
    VAR_1->sync_key_len = VAR_3;
   }
  }
 }
 if (!VAR_1->sync_key_len) return;
 FUNC_3(VAR_1->sync_key_ptr,VAR_2,VAR_1->sync_key_len);
}
