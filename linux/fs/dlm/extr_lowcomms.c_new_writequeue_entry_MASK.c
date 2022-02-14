
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writequeue_entry {struct connection* con; scalar_t__ users; scalar_t__ end; scalar_t__ len; scalar_t__ offset; int page; } ;
struct connection {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct writequeue_entry*) ;
 struct writequeue_entry* FUNC_2 (int,int ) ;

__attribute__((used)) static struct writequeue_entry *FUNC_3(struct connection *VAR_0,
           gfp_t VAR_1)
{
 struct writequeue_entry *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct writequeue_entry), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->page = FUNC_0(VAR_1);
 if (!VAR_2->page) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 VAR_2->offset = 0;
 VAR_2->len = 0;
 VAR_2->end = 0;
 VAR_2->users = 0;
 VAR_2->con = VAR_0;

 return VAR_2;
}
