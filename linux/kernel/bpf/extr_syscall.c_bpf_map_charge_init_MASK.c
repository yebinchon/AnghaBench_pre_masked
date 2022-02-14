
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct user_struct {int dummy; } ;
struct bpf_map_memory {int pages; struct user_struct* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct user_struct*,int) ;
 int FUNC_1 (struct user_struct*) ;
 struct user_struct* FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4(struct bpf_map_memory *VAR_4, u64 VAR_5)
{
 u32 VAR_6 = FUNC_3(VAR_5, VAR_2) >> VAR_1;
 struct user_struct *VAR_7;
 int VAR_8;

 if (VAR_5 >= VAR_3 - VAR_2)
  return -VAR_0;

 VAR_7 = FUNC_2();
 VAR_8 = FUNC_0(VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return VAR_8;
 }

 VAR_4->pages = VAR_6;
 VAR_4->user = VAR_7;

 return 0;
}
