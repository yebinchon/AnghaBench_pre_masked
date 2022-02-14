
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int lnum; int offs; int used; } ;
struct ubifs_info {TYPE_1__* jheads; } ;
struct TYPE_2__ {int log_hash; struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int,int) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,void*,int,int ) ;
 int FUNC_5 (struct ubifs_wbuf*) ;
 int FUNC_6 (struct ubifs_wbuf*,void*,int) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_1, int VAR_2, void *VAR_3, int VAR_4,
        int *VAR_5, int *VAR_6, int VAR_7)
{
 int VAR_8;
 struct ubifs_wbuf *VAR_9 = &VAR_1->jheads[VAR_2].wbuf;

 FUNC_2(VAR_1, VAR_2 != VAR_0);

 *VAR_5 = VAR_1->jheads[VAR_2].wbuf.lnum;
 *VAR_6 = VAR_1->jheads[VAR_2].wbuf.offs + VAR_1->jheads[VAR_2].wbuf.used;
 FUNC_1("jhead %s, LEB %d:%d, len %d",
  FUNC_0(VAR_2), *VAR_5, *VAR_6, VAR_4);

 if (FUNC_3(VAR_1)) {
  VAR_8 = FUNC_4(VAR_1, VAR_3, VAR_4, VAR_1->jheads[VAR_2].log_hash);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_6(VAR_9, VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;
 if (VAR_7)
  VAR_8 = FUNC_5(VAR_9);
 return VAR_8;
}
