
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hfs_bnode {scalar_t__ type; TYPE_1__* tree; } ;
struct TYPE_2__ {int attributes; int max_key_len; int node_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfs_bnode*,int) ;
 int FUNC_1 (struct hfs_bnode*,int) ;
 int FUNC_2 (char*,int) ;

u16 FUNC_3(struct hfs_bnode *VAR_4, u16 VAR_5)
{
 u16 VAR_6, VAR_7;

 if (VAR_4->type != VAR_0 && VAR_4->type != VAR_1)
  return 0;

 if ((VAR_4->type == VAR_0) &&
    !(VAR_4->tree->attributes & VAR_3)) {
  if (VAR_4->tree->attributes & VAR_2)
   VAR_6 = VAR_4->tree->max_key_len + 2;
  else
   VAR_6 = VAR_4->tree->max_key_len + 1;
 } else {
  VAR_7 = FUNC_0(VAR_4, VAR_4->tree->node_size - (VAR_5 + 1) * 2);
  if (!VAR_7)
   return 0;
  if (VAR_4->tree->attributes & VAR_2) {
   VAR_6 = FUNC_0(VAR_4, VAR_7) + 2;
   if (VAR_6 > VAR_4->tree->max_key_len + 2) {
    FUNC_2("keylen %d too large\n", VAR_6);
    VAR_6 = 0;
   }
  } else {
   VAR_6 = (FUNC_1(VAR_4, VAR_7) | 1) + 1;
   if (VAR_6 > VAR_4->tree->max_key_len + 1) {
    FUNC_2("keylen %d too large\n", VAR_6);
    VAR_6 = 0;
   }
  }
 }
 return VAR_6;
}
