
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {int l_pn; int l_flag; scalar_t__ l_blkno; } ;
struct jfs_log {int l2bsize; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct lbuf*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct lbuf*) ;

__attribute__((used)) static void FUNC_2(struct jfs_log * VAR_2, struct lbuf * VAR_3, int VAR_4)
{
 FUNC_0("lbmDirectWrite: bp:0x%p flag:0x%x pn:0x%x",
   VAR_3, VAR_4, VAR_3->l_pn);




 VAR_3->l_flag = VAR_4 | VAR_1;


 VAR_3->l_blkno =
     VAR_2->base + (VAR_3->l_pn << (VAR_0 - VAR_2->l2bsize));




 FUNC_1(VAR_3);
}
