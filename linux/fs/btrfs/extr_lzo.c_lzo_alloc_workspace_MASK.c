
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct workspace {struct list_head list; void* cbuf; void* buf; void* mem; } ;


 int VAR_0 ;
 struct list_head* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ) ;
 struct workspace* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct list_head*) ;

__attribute__((used)) static struct list_head *FUNC_6(unsigned int VAR_4)
{
 struct workspace *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->mem = FUNC_2(VAR_2, VAR_1);
 VAR_5->buf = FUNC_2(FUNC_4(VAR_3), VAR_1);
 VAR_5->cbuf = FUNC_2(FUNC_4(VAR_3), VAR_1);
 if (!VAR_5->mem || !VAR_5->buf || !VAR_5->cbuf)
  goto fail;

 FUNC_1(&VAR_5->list);

 return &VAR_5->list;
fail:
 FUNC_5(&VAR_5->list);
 return FUNC_0(-VAR_0);
}
