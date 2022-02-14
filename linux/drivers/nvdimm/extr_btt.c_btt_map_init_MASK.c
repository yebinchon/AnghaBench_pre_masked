
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arena_info {size_t logoff; size_t mapoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int) ;
 size_t VAR_3 ;
 int FUNC_1 (struct arena_info*,size_t,void*,size_t,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,char*,size_t) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t,int ) ;
 size_t FUNC_6 (size_t,size_t) ;
 int FUNC_7 (struct arena_info*) ;

__attribute__((used)) static int FUNC_8(struct arena_info *VAR_4)
{
 int VAR_5 = -VAR_0;
 void *VAR_6;
 size_t VAR_7 = 0;
 size_t VAR_8 = VAR_3;
 size_t VAR_9 = VAR_4->logoff - VAR_4->mapoff;

 VAR_6 = FUNC_5(VAR_8, VAR_2);
 if (!VAR_6)
  return -VAR_1;






 FUNC_3(FUNC_7(VAR_4), !FUNC_0(VAR_4->mapoff, 512),
  "arena->mapoff: %#llx is unaligned\n", VAR_4->mapoff);

 while (VAR_9) {
  size_t VAR_10 = FUNC_6(VAR_9, VAR_8);

  FUNC_3(FUNC_7(VAR_4), VAR_10 < 512,
   "chunk size: %#zx is unaligned\n", VAR_10);
  VAR_5 = FUNC_1(VAR_4, VAR_4->mapoff + VAR_7, VAR_6,
    VAR_10, 0);
  if (VAR_5)
   goto free;

  VAR_7 += VAR_10;
  VAR_9 -= VAR_10;
  FUNC_2();
 }

 free:
 FUNC_4(VAR_6);
 return VAR_5;
}
