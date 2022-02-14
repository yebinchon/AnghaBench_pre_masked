
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_struct {size_t isc; int lsi_mask; int list; int flags; scalar_t__ lsi_ptr; int handler; } ;
typedef int dbf_txt ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,char*,struct airq_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct airq_struct *VAR_7)
{
 char VAR_8[32];

 if (!VAR_7->handler || VAR_7->isc > VAR_4)
  return -VAR_1;
 if (!VAR_7->lsi_ptr) {
  VAR_7->lsi_ptr = FUNC_3(1, VAR_3);
  if (!VAR_7->lsi_ptr)
   return -VAR_2;
  VAR_7->flags |= VAR_0;
 }
 if (!VAR_7->lsi_mask)
  VAR_7->lsi_mask = 0xff;
 FUNC_4(VAR_8, sizeof(VAR_8), "rairq:%p", VAR_7);
 FUNC_0(4, VAR_8);
 FUNC_2(VAR_7->isc);
 FUNC_5(&VAR_6);
 FUNC_1(&VAR_7->list, &VAR_5[VAR_7->isc]);
 FUNC_6(&VAR_6);
 return 0;
}
