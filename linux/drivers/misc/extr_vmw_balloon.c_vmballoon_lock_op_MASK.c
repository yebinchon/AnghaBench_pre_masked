
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vmballoon {int page; int batch_page; int comm_lock; } ;
typedef enum vmballoon_page_size_type { ____Placeholder_vmballoon_page_size_type } vmballoon_page_size_type ;
typedef enum vmballoon_op { ____Placeholder_vmballoon_op } vmballoon_op ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct vmballoon*,unsigned long,unsigned long,unsigned int) ;
 int VAR_9 ;

__attribute__((used)) static unsigned long FUNC_7(struct vmballoon *VAR_10,
           unsigned int VAR_11,
           enum vmballoon_page_size_type VAR_12,
           enum vmballoon_op VAR_13)
{
 unsigned long VAR_14, VAR_15;

 FUNC_1(&VAR_10->comm_lock);

 if (FUNC_3(&VAR_9)) {
  if (VAR_13 == VAR_8)
   VAR_14 = VAR_12 == VAR_0 ?
    VAR_1 :
    VAR_3;
  else
   VAR_14 = VAR_12 == VAR_0 ?
    VAR_2 :
    VAR_4;

  VAR_15 = FUNC_0(FUNC_5(VAR_10->batch_page));
 } else {
  VAR_14 = VAR_13 == VAR_8 ? VAR_5 :
        VAR_6;
  VAR_15 = FUNC_2(VAR_10->page);


  if (FUNC_4(VAR_15 != (u32)VAR_15))
   return VAR_7;
 }

 return FUNC_6(VAR_10, VAR_14, VAR_15, VAR_11);
}
