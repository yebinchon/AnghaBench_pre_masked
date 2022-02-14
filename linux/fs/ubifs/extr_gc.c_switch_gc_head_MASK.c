
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {scalar_t__ used; scalar_t__ offs; int lnum; } ;
struct ubifs_info {int gc_lnum; scalar_t__ leb_size; TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_1 (struct ubifs_info*,size_t,int,int ) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_wbuf*,int,int ) ;
 int FUNC_5 (struct ubifs_wbuf*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->gc_lnum;
 struct ubifs_wbuf *VAR_4 = &VAR_1->jheads[VAR_0].wbuf;

 FUNC_2(VAR_1, VAR_3 != -1);
 FUNC_0("switch GC head from LEB %d:%d to LEB %d (waste %d bytes)",
        VAR_4->lnum, VAR_4->offs + VAR_4->used, VAR_3,
        VAR_1->leb_size - VAR_4->offs - VAR_4->used);

 VAR_2 = FUNC_5(VAR_4);
 if (VAR_2)
  return VAR_2;





 VAR_2 = FUNC_3(VAR_1, VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0, VAR_3, 0);
 if (VAR_2)
  return VAR_2;

 VAR_1->gc_lnum = -1;
 VAR_2 = FUNC_4(VAR_4, VAR_3, 0);
 return VAR_2;
}
