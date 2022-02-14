
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct log_entry {int dummy; } ;
struct arena_info {size_t* log_index; scalar_t__ logoff; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct arena_info*,scalar_t__,void*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct arena_info *VAR_2, u32 VAR_3,
   u32 VAR_4, struct log_entry *VAR_5, unsigned long VAR_6)
{
 int VAR_7;
 u32 VAR_8 = VAR_2->log_index[VAR_4];
 unsigned int VAR_9 = VAR_0 / 2;
 void *VAR_10 = VAR_5;
 u64 VAR_11;

 VAR_11 = VAR_2->logoff + (VAR_3 * VAR_1) +
  (VAR_8 * VAR_0);

 VAR_7 = FUNC_0(VAR_2, VAR_11, VAR_10, VAR_9, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_11 += VAR_9;
 VAR_10 += VAR_9;
 return FUNC_0(VAR_2, VAR_11, VAR_10, VAR_9, VAR_6);
}
