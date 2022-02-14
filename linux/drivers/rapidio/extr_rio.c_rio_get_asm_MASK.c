
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {struct list_head* next; } ;
struct rio_dev {scalar_t__ vid; scalar_t__ did; scalar_t__ asm_vid; scalar_t__ asm_did; TYPE_1__ global_list; } ;
struct list_head {struct list_head* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct rio_dev* FUNC_2 (struct list_head*) ;
 struct rio_dev* FUNC_3 (struct rio_dev*) ;
 int FUNC_4 (struct rio_dev*) ;
 struct list_head VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct rio_dev *FUNC_7(u16 VAR_3, u16 VAR_4,
       u16 VAR_5, u16 VAR_6, struct rio_dev *VAR_7)
{
 struct list_head *VAR_8;
 struct rio_dev *VAR_9;

 FUNC_0(FUNC_1());
 FUNC_5(&VAR_2);
 VAR_8 = VAR_7 ? VAR_7->global_list.next : VAR_1.next;

 while (VAR_8 && (VAR_8 != &VAR_1)) {
  VAR_9 = FUNC_2(VAR_8);
  if ((VAR_3 == VAR_0 || VAR_9->vid == VAR_3) &&
      (VAR_4 == VAR_0 || VAR_9->did == VAR_4) &&
      (VAR_5 == VAR_0 || VAR_9->asm_vid == VAR_5) &&
      (VAR_6 == VAR_0 || VAR_9->asm_did == VAR_6))
   goto exit;
  VAR_8 = VAR_8->next;
 }
 VAR_9 = ((void*)0);
      exit:
 FUNC_4(VAR_7);
 VAR_9 = FUNC_3(VAR_9);
 FUNC_6(&VAR_2);
 return VAR_9;
}
