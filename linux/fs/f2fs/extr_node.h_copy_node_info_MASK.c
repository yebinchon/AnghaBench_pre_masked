
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {int version; int blk_addr; int ino; int nid; } ;



__attribute__((used)) static inline void FUNC_0(struct node_info *VAR_0,
      struct node_info *VAR_1)
{
 VAR_0->nid = VAR_1->nid;
 VAR_0->ino = VAR_1->ino;
 VAR_0->blk_addr = VAR_1->blk_addr;
 VAR_0->version = VAR_1->version;

}
