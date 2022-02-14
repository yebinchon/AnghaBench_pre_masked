
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lsi_mask; int isc; int lsi_ptr; int handler; } ;
struct airq_info {int summary_indicator_idx; int aiv; TYPE_1__ airq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct airq_info*) ;
 int FUNC_3 (struct airq_info*) ;
 struct airq_info* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

__attribute__((used)) static struct airq_info *FUNC_7(int VAR_7)
{
 struct airq_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return ((void*)0);
 FUNC_6(&VAR_8->lock);
 VAR_8->aiv = FUNC_0(VAR_5, VAR_0 | VAR_2
       | VAR_1);
 if (!VAR_8->aiv) {
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 VAR_8->airq.handler = VAR_6;
 VAR_8->summary_indicator_idx = VAR_7;
 VAR_8->airq.lsi_ptr = FUNC_2(VAR_8);
 VAR_8->airq.lsi_mask = 0xff;
 VAR_8->airq.isc = VAR_4;
 VAR_9 = FUNC_5(&VAR_8->airq);
 if (VAR_9) {
  FUNC_1(VAR_8->aiv);
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 return VAR_8;
}
