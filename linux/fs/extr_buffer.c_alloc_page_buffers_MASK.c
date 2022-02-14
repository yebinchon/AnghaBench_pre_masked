
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct buffer_head {int b_blocknr; unsigned long b_size; struct buffer_head* b_this_page; } ;
typedef int gfp_t ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct buffer_head* FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 struct mem_cgroup* FUNC_2 (struct page*) ;
 int FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mem_cgroup*) ;
 int FUNC_6 (struct buffer_head*,struct page*,long) ;

struct buffer_head *FUNC_7(struct page *VAR_4, unsigned long VAR_5,
  bool VAR_6)
{
 struct buffer_head *VAR_7, *VAR_8;
 gfp_t VAR_9 = VAR_0 | VAR_2;
 long VAR_10;
 struct mem_cgroup *VAR_11;

 if (VAR_6)
  VAR_9 |= VAR_3;

 VAR_11 = FUNC_2(VAR_4);
 FUNC_5(VAR_11);

 VAR_8 = ((void*)0);
 VAR_10 = VAR_1;
 while ((VAR_10 -= VAR_5) >= 0) {
  VAR_7 = FUNC_0(VAR_9);
  if (!VAR_7)
   goto no_grow;

  VAR_7->b_this_page = VAR_8;
  VAR_7->b_blocknr = -1;
  VAR_8 = VAR_7;

  VAR_7->b_size = VAR_5;


  FUNC_6(VAR_7, VAR_4, VAR_10);
 }
out:
 FUNC_4();
 FUNC_3(VAR_11);
 return VAR_8;



no_grow:
 if (VAR_8) {
  do {
   VAR_7 = VAR_8;
   VAR_8 = VAR_8->b_this_page;
   FUNC_1(VAR_7);
  } while (VAR_8);
 }

 goto out;
}
