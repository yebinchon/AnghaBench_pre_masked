
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hfs_bnode {scalar_t__ type; TYPE_1__* tree; } ;
struct TYPE_2__ {int attributes; scalar_t__ cnid; int max_key_len; int node_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfs_bnode*,int) ;
 int FUNC_1 (char*,int) ;

u16 FUNC_2(struct hfs_bnode *VAR_4, u16 VAR_5)
{
 u16 VAR_6, VAR_7;

 if (VAR_4->type != VAR_1 && VAR_4->type != VAR_2)
  return 0;

 if ((VAR_4->type == VAR_1) &&
    !(VAR_4->tree->attributes & VAR_3) &&
    (VAR_4->tree->cnid != VAR_0)) {
  VAR_6 = VAR_4->tree->max_key_len + 2;
 } else {
  VAR_7 = FUNC_0(VAR_4,
   VAR_4->tree->node_size - (VAR_5 + 1) * 2);
  if (!VAR_7)
   return 0;
  if (VAR_7 > VAR_4->tree->node_size - 2) {
   FUNC_1("recoff %d too large\n", VAR_7);
   return 0;
  }

  VAR_6 = FUNC_0(VAR_4, VAR_7) + 2;
  if (VAR_6 > VAR_4->tree->max_key_len + 2) {
   FUNC_1("keylen %d too large\n",
    VAR_6);
   VAR_6 = 0;
  }
 }
 return VAR_6;
}
