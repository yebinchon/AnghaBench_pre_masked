
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct log_entry {void* seq; void* new_map; void* old_map; void* lba; } ;
struct arena_info {size_t info2off; size_t logoff; scalar_t__ nfree; scalar_t__ external_nlba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct arena_info*,scalar_t__,int ,struct log_entry*,int ) ;
 int FUNC_2 (struct arena_info*,size_t,void*,size_t,int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int,char*,size_t) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (size_t,int ) ;
 size_t FUNC_8 (size_t,size_t) ;
 int FUNC_9 (struct arena_info*) ;

__attribute__((used)) static int FUNC_10(struct arena_info *VAR_4)
{
 size_t VAR_5 = VAR_4->info2off - VAR_4->logoff;
 size_t VAR_6 = VAR_3, VAR_7 = 0;
 struct log_entry VAR_8;
 void *VAR_9;
 int VAR_10;
 u32 VAR_11;

 VAR_9 = FUNC_7(VAR_6, VAR_1);
 if (!VAR_9)
  return -VAR_0;





 FUNC_5(FUNC_9(VAR_4), !FUNC_0(VAR_4->logoff, 512),
  "arena->logoff: %#llx is unaligned\n", VAR_4->logoff);

 while (VAR_5) {
  size_t VAR_12 = FUNC_8(VAR_5, VAR_6);

  FUNC_5(FUNC_9(VAR_4), VAR_12 < 512,
   "chunk size: %#zx is unaligned\n", VAR_12);
  VAR_10 = FUNC_2(VAR_4, VAR_4->logoff + VAR_7, VAR_9,
    VAR_12, 0);
  if (VAR_10)
   goto free;

  VAR_7 += VAR_12;
  VAR_5 -= VAR_12;
  FUNC_3();
 }

 for (VAR_11 = 0; VAR_11 < VAR_4->nfree; VAR_11++) {
  VAR_8.lba = FUNC_4(VAR_11);
  VAR_8.old_map = FUNC_4(VAR_4->external_nlba + VAR_11);
  VAR_8.new_map = FUNC_4(VAR_4->external_nlba + VAR_11);
  VAR_8.seq = FUNC_4(VAR_2);
  VAR_10 = FUNC_1(VAR_4, VAR_11, 0, &VAR_8, 0);
  if (VAR_10)
   goto free;
 }

 free:
 FUNC_6(VAR_9);
 return VAR_10;
}
