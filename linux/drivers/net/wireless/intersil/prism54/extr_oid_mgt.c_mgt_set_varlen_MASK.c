
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct islpci_mgmtframe {TYPE_1__* header; } ;
struct TYPE_7__ {int ndev; } ;
typedef TYPE_2__ islpci_private ;
typedef enum oid_num_t { ____Placeholder_oid_num_t } oid_num_t ;
struct TYPE_8__ {int size; int flags; int oid; } ;
struct TYPE_6__ {int operation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct islpci_mgmtframe*) ;
 int FUNC_3 (int ,int ,int ,void*,int,struct islpci_mgmtframe**) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (int,void*) ;

int
FUNC_6(islpci_private *VAR_7, enum oid_num_t VAR_8, void *VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 struct islpci_mgmtframe *VAR_12;
 int VAR_13 = VAR_3;
 int VAR_14;
 u32 VAR_15;

 FUNC_0(VAR_8 >= VAR_2);

 VAR_14 = VAR_6[VAR_8].size;
 VAR_15 = VAR_6[VAR_8].oid;

 FUNC_4(VAR_6[VAR_8].flags & VAR_1, VAR_9);

 if (FUNC_1(VAR_7) >= VAR_5) {
  VAR_11 = FUNC_3(VAR_7->ndev, VAR_4, VAR_15,
          VAR_9, VAR_14 + VAR_10, &VAR_12);
  if (!VAR_11) {
   VAR_13 = VAR_12->header->operation;
   FUNC_2(VAR_12);
  }
  if (VAR_11 || VAR_13 == VAR_3)
   VAR_11 = -VAR_0;
 } else
  VAR_11 = -VAR_0;


 if (VAR_9)
  FUNC_5(VAR_6[VAR_8].flags & VAR_1, VAR_9);

 return VAR_11;
}
