
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct hfs_find_data {TYPE_9__* search_key; TYPE_7__* key; } ;
struct hfs_bnode {TYPE_5__* tree; } ;
typedef scalar_t__ __be32 ;
struct TYPE_17__ {scalar_t__ cnid; } ;
struct TYPE_13__ {scalar_t__ parent; } ;
struct TYPE_11__ {scalar_t__ cnid; } ;
struct TYPE_18__ {TYPE_8__ attr; TYPE_4__ cat; TYPE_2__ ext; } ;
struct TYPE_15__ {scalar_t__ cnid; } ;
struct TYPE_12__ {scalar_t__ parent; } ;
struct TYPE_10__ {scalar_t__ cnid; } ;
struct TYPE_16__ {TYPE_6__ attr; TYPE_3__ cat; TYPE_1__ ext; } ;
struct TYPE_14__ {scalar_t__ cnid; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(struct hfs_bnode *VAR_3,
    struct hfs_find_data *VAR_4,
    int *VAR_5,
    int *VAR_6,
    int *VAR_7)
{
 __be32 VAR_8;
 __be32 VAR_9;

 if (VAR_3->tree->cnid == VAR_2) {
  VAR_8 = VAR_4->key->ext.cnid;
  VAR_9 = VAR_4->search_key->ext.cnid;
 } else if (VAR_3->tree->cnid == VAR_1) {
  VAR_8 = VAR_4->key->cat.parent;
  VAR_9 = VAR_4->search_key->cat.parent;
 } else if (VAR_3->tree->cnid == VAR_0) {
  VAR_8 = VAR_4->key->attr.cnid;
  VAR_9 = VAR_4->search_key->attr.cnid;
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
  FUNC_0();
 }

 if (VAR_8 == VAR_9) {
  (*VAR_6) = (*VAR_7);
  if ((*VAR_5) == (*VAR_6))
   return 1;
 } else {
  if (FUNC_1(VAR_8) < FUNC_1(VAR_9))
   (*VAR_5) = (*VAR_7) + 1;
  else
   (*VAR_6) = (*VAR_7) - 1;
 }

 return 0;
}
