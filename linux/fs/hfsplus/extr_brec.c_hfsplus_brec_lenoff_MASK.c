
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hfs_bnode {TYPE_1__* tree; } ;
typedef int __be16 ;
struct TYPE_2__ {int node_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfs_bnode*,int *,int,int) ;

u16 FUNC_2(struct hfs_bnode *VAR_0, u16 VAR_1, u16 *VAR_2)
{
 __be16 VAR_3[2];
 u16 VAR_4;

 VAR_4 = VAR_0->tree->node_size - (VAR_1 + 2) * 2;
 FUNC_1(VAR_0, VAR_3, VAR_4, 4);
 *VAR_2 = FUNC_0(VAR_3[1]);
 return FUNC_0(VAR_3[0]) - *VAR_2;
}
