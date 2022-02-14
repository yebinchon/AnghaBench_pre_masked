
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int workspace; } ;
struct workspace {unsigned int level; struct list_head list; int buf; TYPE_1__ strm; } ;


 int VAR_0 ;
 struct list_head* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 struct workspace* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct list_head*) ;
 int FUNC_8 () ;

__attribute__((used)) static struct list_head *FUNC_9(unsigned int VAR_5)
{
 struct workspace *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(FUNC_6(VAR_3, VAR_2),
   FUNC_8());
 VAR_6->strm.workspace = FUNC_3(VAR_7, VAR_1);
 VAR_6->level = VAR_5;
 VAR_6->buf = FUNC_2(VAR_4, VAR_1);
 if (!VAR_6->strm.workspace || !VAR_6->buf)
  goto fail;

 FUNC_1(&VAR_6->list);

 return &VAR_6->list;
fail:
 FUNC_7(&VAR_6->list);
 return FUNC_0(-VAR_0);
}
