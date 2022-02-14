
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct logsuper {TYPE_1__* active; } ;
struct lbuf {scalar_t__ l_ldata; } ;
struct jfs_sb_info {int aggregate; int uuid; } ;
struct jfs_log {int dummy; } ;
struct TYPE_2__ {int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct jfs_log*,struct lbuf*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct lbuf*) ;
 int FUNC_3 (struct lbuf*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct jfs_log*,int,struct lbuf**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct jfs_log * VAR_8, struct jfs_sb_info *VAR_9,
      int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 struct logsuper *VAR_13;
 struct lbuf *VAR_14;
 uuid_t *VAR_15 = &VAR_9->uuid;




 if ((VAR_11 = FUNC_4(VAR_8, 1, &VAR_14)))
  return VAR_11;

 VAR_13 = (struct logsuper *) VAR_14->l_ldata;
 if (VAR_10) {
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   if (FUNC_7(&VAR_13->active[VAR_12].uuid)) {
    FUNC_5(&VAR_13->active[VAR_12].uuid, VAR_15);
    VAR_9->aggregate = VAR_12;
    break;
   }
  if (VAR_12 == VAR_2) {
   FUNC_0("Too many file systems sharing journal!");
   FUNC_2(VAR_14);
   return -VAR_1;
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   if (FUNC_6(&VAR_13->active[VAR_12].uuid, VAR_15)) {
    FUNC_5(&VAR_13->active[VAR_12].uuid,
       &VAR_7);
    break;
   }
  if (VAR_12 == VAR_2) {
   FUNC_0("Somebody stomped on the journal!");
   FUNC_2(VAR_14);
   return -VAR_0;
  }

 }
 FUNC_1(VAR_8, VAR_14, VAR_6 | VAR_4 | VAR_5);
 VAR_11 = FUNC_3(VAR_14, VAR_3);

 return VAR_11;
}
