
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_pfn_t ;
struct mmap_batch_state {int version; int user_err; int user_gfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_3, struct mmap_batch_state *VAR_4)
{
 int VAR_5;

 if (VAR_4->version == 1) {
  if (VAR_3) {
   xen_pfn_t VAR_6;

   VAR_5 = FUNC_1(VAR_6, VAR_4->user_gfn);
   if (VAR_5 < 0)
    return VAR_5;





   VAR_6 |= (VAR_3 == -VAR_0) ?
    VAR_2 :
    VAR_1;
   return FUNC_0(VAR_6, VAR_4->user_gfn++);
  } else
   VAR_4->user_gfn++;
 } else {
  if (VAR_3)
   return FUNC_0(VAR_3, VAR_4->user_err++);
  else
   VAR_4->user_err++;
 }

 return 0;
}
